// opcua_test.cpp : 定义控制台应用程序的入口点。
//
//#include <vld.h>
#include "stdafx.h"
#include <signal.h>
#include <iostream>
#include "open62541.h"
#include "machine.h"
#include "stdlib.h"
#include "ConstDefine.h"
#include <windows.h>
#include "NCConnectDll.h"

using namespace std;
#define MAX_STRING 256

CNCCONNECTDLL ppp;


//#pragma comment(lib, "libnml.lib")

static UA_Variant value;
static UA_Byte CommunicationInterface = (UA_Byte)1;
static UA_UInt32 ratedPower = (UA_UInt32)20;
//double *R = (double*)malloc(sizeof(double) *20);
//UA_Byte *ab = (UA_Byte*)malloc(sizeof(UA_Byte) * 20);
//int *GCode = (int*)malloc(sizeof(int) * 20);
//int *MCode = (int*)malloc(sizeof(int) * 20);
//UA_Byte *gcode = (UA_Byte*)malloc(sizeof(UA_Byte) * 20);
//UA_Byte *mcode = (UA_Byte*)malloc(sizeof(UA_Byte) *18);
static int controlAxisNumber;
UA_Boolean running = true;
static int iNCIndex;
static double retValueArrayDouble_Axis[] = {0};
static double retValueArrayDouble_Spindle[] = {0.0};
static double retValueArrayDouble_Actualspindle[] = { 0.0 };
static double retValueArrayDouble_spindleRate[] = { 0.0 };
static double retValueArrayDouble_Feed[] = {0.0};
static double retValueArrayDouble_FeedRate[] = { 0.0 };
static double retValueArrayDouble_Distance[] = { 0.0 };  // 剩余量

static void stopHandler(int sign) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c"); running = false;
}
/*
************************************************************************************************************
*Define datasource
*/

static UA_DataSource xaxismachinetoolcoordinatetheoryvalue_datasource;
static UA_DataSource yaxismachinetoolcoordinatetheoryvalue_datasource;
static UA_DataSource zaxismachinetoolcoordinatetheoryvalue_datasource;

static UA_DataSource spindleprogrammingspeed_datasource;
static UA_DataSource actualspindlevelocity_datasource;
static UA_DataSource spindletrimmingvalue_datasource;

static UA_DataSource feedprogrammingspeed_datasource;
static UA_DataSource feedrate_datasource;
static UA_DataSource feedadjustmentvalue_datasource;
// 剩余量
static UA_DataSource xaxisresidual_datasource;
static UA_DataSource yaxisresidual_datasource;
static UA_DataSource zaxisresidual_datasource;

// X编程值
static UA_StatusCode  read_xaxismachinetoolcoordinatetheoryvalue(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue * dataValue)
{

	ppp.getStatusAxisVal(iNCIndex, 0, 7005, retValueArrayDouble_Axis);
	double aa = retValueArrayDouble_Axis[0];
	UA_Float retvalue = (UA_Float)aa;
	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);   
	dataValue->hasValue = true;
	return UA_STATUSCODE_GOOD;
}

// Y编程值
//static UA_StatusCode  read_yaxismachinetoolcoordinatetheoryvalue(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 7005, retValueArrayDouble_Axis);
//	double aa = retValueArrayDouble_Axis[1];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// Z编程值
//static UA_StatusCode  read_zaxismachinetoolcoordinatetheoryvalue(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 7005, retValueArrayDouble_Axis);
//	double aa = retValueArrayDouble_Axis[2];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// X剩余量
//static UA_StatusCode  read_xaxisresidual(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//
//	ppp.getStatusAxisVal(iNCIndex, 0, 7010, retValueArrayDouble_Distance);
//	double aa = retValueArrayDouble_Distance[0];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// Y剩余量
//static UA_StatusCode  read_yaxisresidual(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//
//	ppp.getStatusDoubleVal(iNCIndex, 0, 7010, retValueArrayDouble_Distance);
//	double aa = retValueArrayDouble_Distance[1];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// Z剩余量
//static UA_StatusCode  read_zaxisresidual(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//
//	ppp.getStatusDoubleVal(iNCIndex, 0, 7010, retValueArrayDouble_Distance);
//	double aa = retValueArrayDouble_Distance[2];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// 主轴编程速度
//static UA_StatusCode  read_spindleprogrammingspeed(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 8003, retValueArrayDouble_Spindle);
//	double aa = retValueArrayDouble_Spindle[0];
//	UA_Float spspeed = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &spspeed, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// 主轴实际速度
//static UA_StatusCode  read_actualspindlevelocity(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 8004, retValueArrayDouble_Actualspindle);
//	double aa = retValueArrayDouble_Actualspindle[0];
//	UA_Float asvelocity = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &asvelocity, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// 主轴倍率
//static UA_StatusCode  read_spindletrimmingvalue(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 8005, retValueArrayDouble_spindleRate);
//	double aa = retValueArrayDouble_spindleRate[0];
//	UA_Float spindletrimmingvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &spindletrimmingvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// 进给编程值
//static UA_StatusCode  read_feedprogrammingspeed(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 5001, retValueArrayDouble_Feed);
//	double aa = retValueArrayDouble_Feed[0];
//	//double aa = retValueFeedDouble[0];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//// 进给倍率
//static UA_StatusCode  read_feedrate(UA_Server * server, const UA_NodeId * sessionId, void * sessionContext,
//	const UA_NodeId	* nodeId, void * nodeContext, UA_Boolean sourceTimeStamp, const UA_NumericRange	* range, UA_DataValue	* dataValue)
//{
//	
//	ppp.getStatusDoubleVal(iNCIndex, 0, 5009, retValueArrayDouble_FeedRate);
//	double aa = retValueArrayDouble_FeedRate[0];
//	UA_Float retvalue = (UA_Float)aa;
//	UA_Variant_setScalarCopy(&dataValue->value, &retvalue, &UA_TYPES[UA_TYPES_FLOAT]);
//	dataValue->hasValue = true;
//	return UA_STATUSCODE_GOOD;
//}
//
//static void setStaticAttribute(UA_Server *server)
//{
//	UA_String *stringVar = UA_String_new();
//	*stringVar = UA_STRING_ALLOC("Hit Robots");
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 2), value);
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 3), value);
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 4), value);
//	*stringVar = UA_STRING_ALLOC("Golding NC");
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 5), value);
//	*stringVar = UA_STRING_ALLOC("GSCSX-1.05.11-b");
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 6), value);
//	*stringVar = UA_STRING_ALLOC("Golding");
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 7), value);
//	*stringVar = UA_STRING_ALLOC("2019/3");
//	UA_Variant_setScalar(&value, stringVar, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 8), value);
//	UA_Variant_setScalar(&value, &CommunicationInterface, &UA_TYPES[UA_TYPES_BYTE]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 9), value);
//	UA_Variant_setScalar(&value, &ratedPower, &UA_TYPES[UA_TYPES_UINT32]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 10), value);
//
//}
//
//static void setConfigAttribute(UA_Server *server)
//{
//	char *controlAxisNameDescription = (char*) malloc(sizeof(char)*256);
//	ppp.getStatusStrVal(iNCIndex, 0, 2004, controlAxisNameDescription);
//	UA_String cad = UA_STRING(controlAxisNameDescription);
//	UA_Variant_setScalar(&value, &cad, &UA_TYPES[UA_TYPES_STRING]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 513), value);
//	ppp.getStatusIntVal(iNCIndex, 0, 2228, &controlAxisNumber);
//	UA_Byte controlAxisNum = (UA_Byte)controlAxisNumber;
//	UA_Variant_setScalar(&value, &controlAxisNum, &UA_TYPES[UA_TYPES_BYTE]);
//	UA_Server_writeValue(server, UA_NODEID_NUMERIC(2, 514), value);
//}
//
//static void setSpindleProcessAttribute(UA_Server *server)
//{
//	// 主轴编程转速
//	spindleprogrammingspeed_datasource.read = read_spindleprogrammingspeed;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8199),
//		spindleprogrammingspeed_datasource);
//	// 主轴实际转速
//	actualspindlevelocity_datasource.read = read_actualspindlevelocity;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8200),
//		actualspindlevelocity_datasource);
//	// 主轴转速调整率
//	spindletrimmingvalue_datasource.read = read_spindletrimmingvalue;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8201),
//		spindletrimmingvalue_datasource);
//}
//
static void setFeedShaftProcessAttribute(UA_Server *server)
{
	
	xaxismachinetoolcoordinatetheoryvalue_datasource.read = read_xaxismachinetoolcoordinatetheoryvalue;
	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 25),
		xaxismachinetoolcoordinatetheoryvalue_datasource);
	//yaxismachinetoolcoordinatetheoryvalue_datasource.read = read_yaxismachinetoolcoordinatetheoryvalue;
	//UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8461),
	//	yaxismachinetoolcoordinatetheoryvalue_datasource);
	//zaxismachinetoolcoordinatetheoryvalue_datasource.read = read_zaxismachinetoolcoordinatetheoryvalue;
	//UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8462),
	//	zaxismachinetoolcoordinatetheoryvalue_datasource);
//
//	// 剩余量
//	xaxisresidual_datasource.read = read_xaxisresidual;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8472),
//		xaxisresidual_datasource);
//	yaxisresidual_datasource.read = read_yaxisresidual;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8473),
//		yaxisresidual_datasource);
//	zaxisresidual_datasource.read = read_zaxisresidual;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8474),
//		zaxisresidual_datasource);
//
//	// 进给编程速度
//	feedprogrammingspeed_datasource.read = read_feedprogrammingspeed;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8492),
//		feedprogrammingspeed_datasource);
//	// 进给倍率
//	feedadjustmentvalue_datasource.read = read_feedrate;
//	UA_Server_setVariableNode_dataSource(server, UA_NODEID_NUMERIC(2, 8494),
//		feedadjustmentvalue_datasource);
}


int main()
{
	char IP[MAX_STRING];
	unsigned short Port; //端口5006
	signal(SIGINT, stopHandler);
	signal(SIGTERM, stopHandler);
	UA_Server *server = UA_Server_new();
	UA_ServerConfig_setDefault(UA_Server_getConfig(server));
	UA_StatusCode retval;
	
	if (machine(server) != UA_STATUSCODE_GOOD) {
		UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the example nodeset. " "Check previous output for any error.");
		retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
	}
	else {		
		//int ret = ppp.connectToNC("192.168.171.200", 5006, &iNCIndex);
		//printf("TASK_STATE iRetVal机床状态======%d\n", iNCIndex);
		//cout << ret << endl;
		memcpy(IP, "192.168.162.200", sizeof("192.168.162.200")); 
		Port = 5006;
		// ppp.setDebugLock(1); //设置终端打印输出
		int ret = ppp.connectToNC(IP, Port, &iNCIndex); //连接远程数控系统
	
		//setStaticAttribute(server);
		//setConfigAttribute(server);
		setFeedShaftProcessAttribute(server);	
		//setSpindleProcessAttribute(server);
		retval = UA_Server_run(server, &running);
		UA_Server_delete(server);
	}
	return (int)retval;
}







