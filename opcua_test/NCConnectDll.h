#ifndef NCCONNECTDLL_H
#define NCCONNECTDLL_H
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the NCCONNECTDLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// NCCONNECTDLL_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef NCCONNECTDLL_EXPORTS
#define NCCONNECTDLL_API __declspec(dllexport)
#else
#define NCCONNECTDLL_API __declspec(dllimport)
#endif

//class NCCONNECTDLL_API CNCCONNECTDLL {
//public:
	//CNCCONNECTDLL(void);
	//TODO: //在此处添加方法。
	/*connectToNC(void);
		disconnectToNC	@2
		getStatusPeek	@3
		sendCmdToNC	@4
		getStatusIntVal	@5
		getStatusIntArrayVal	@6
		getStatusDoubleVal	@7
		getStatusDoubleArrayVal	@8
		getStatusStrVal	@9
		getStatusAxisVal	@10
		getErrorVal		@12
		getAutoMotionErrorVal	@13
		getAutoPlcErrorVal	@14
		setDebugLock @15
		getToolLifeTable @16
		getIOVal @17
		initCmd @18
		addCmdData1 = ? addCmdData@@YG_NHD@Z @19
		addCmdData2 = ? addCmdData@@YG_NHH@Z @20
		addCmdData3 = ? addCmdData@@YG_NHN@Z @21
		addCmdArrayData1 = ? addCmdArrayData@@YG_NHPBDI@Z @22
		addCmdArrayData2 = ? addCmdArrayData@@YG_NHPBHI@Z @23
		addCmdArrayData3 = ? addCmdArrayData@@YG_NHPBNI@Z @24
		sendCmd @25
		addCmdCharData @26
		addCmdIntData @27
		addCmdDoubleData @28
		addCmdCharArrayData @29
		addCmdIntArrayData @30
		addCmdDoubleArrayData @31
		getMacroVarTable @32
		getOriginTable @33
		getToolOffsetTable @34*/
//};

#include <iostream>
#include <string>
using namespace std;

#define MAX_STR_NUM 256		//API读取字符数组的最大长度
#define MAX_ARRAY_NUM 21	//API读取整型浮点型数组的最大长度
#define NUMS_LOCAL_VAL 33
#define NUMS_USERVAR_DOUBLE 100
#define NUMS_CHAN_HOLD_VAR 500
#define NUMS_TOTAL_HOLD_VAR 500
#define NUM_G_MACRO_VAR 24 
#define NUM_M_MACRO_VAR 24 
#define NUM_T_MACRO_VAR 1 
#define NUMS_USER_COORD  9
#define NUMS_ADDITION_COORD  48
#define NUMS_TOOL_OFFSET 299
#define EMC_CHAN_AXIS_MAX 16

/*****API返回值*****/
#define RETURN_OK 0						//正常
#define RETURN_CMD_WRITE_ERROR -1		//写命令失败
#define RETURN_IP_OR_PORT_WRONG -2	//输入IP或端口非法
#define RETURN_NCINDEX_WRONG -3		//数控系统对应的NCindex不存在
#define RETURN_NET_CONNECT_ERROR -4	//网络连接失败
#define RETURN_NET_RECONNECTING -5		//正在尝试重连
#define RETURN_VALUE_INDEX_WRONG -6	//读取的变量序号不存在或写命令的序号不存在
#define RETURN_MALLOC_ERROR -7			//链接库内存申请失败-7
#define RETURN_NULL_MEMORY1 -21		//访问空内存1
#define RETURN_NULL_MEMORY2 -22		//访问空内存2

/*****命令序号*****/
#define DNC_ACTIVE_CHANNEL_TYPE 29
#define DNC_AXIS_ABORT_TYPE 120
#define DNC_AXIS_HOME_TYPE 123
#define DNC_AXIS_INCR_OVERRIDE_TYPE 136
#define DNC_AXIS_JOG_TYPE 124
#define DNC_SCALE_MODIFY_TYPE 554//543
#define DNC_RAPID_MODIFY_TYPE 556//545
#define DNC_TASK_PLAN_RESET_TYPE 555//544
#define DNC_TASK_ORIGIN_RELIEVE_TYPE 570//274
#define DNC_SET_AXISMODE_TYPE 518  
#define DNC_STAT_PARAM_CHANGE_TYPE 560//546
#define DNC_TASK_SET_START_LINE_TYPE 529 
#define DNC_TASK_PLAN_CLOSE_TYPE 514
#define DNC_TASK_PLAN_EXECUTE_TYPE 509
#define DNC_TASK_PLAN_OPEN_TYPE 506
#define DNC_TASK_PLAN_PAUSE_TYPE 510
#define DNC_TASK_PLAN_RUN_TYPE 507
#define DNC_TASK_SET_MODE_TYPE 504
#define DNC_TOOL_SET_OFFSET_TYPE 1108
#define DNC_REMOTE_PARAMTERS_UPDATE_TYPE 573//555
#define DNC_TASK_SET_ORIGIN_TYPE 521
#define DNC_TASK_SOFT_IO_TYPE 525
#define DNC_TASK_HEARTBEAT_TYPE 500
#define DNC_MODIFY_TOOL_LIFE_TABLE_TYPE 1021 //修改刀具寿命
#define DNC_FOCUS_AXIS_TYPE 1012//设置激活轴
#define DNC_MODIFY_TOOL_SETTING_PARAM_TYPE 1022
#define DNC_DISPLAY_TOOL_SETTING_TYPE 1023
#define DNC_NUMS_TOOL_LIFE 64
#define DNC_MAX_AXIS_NUM 16 
#define DNC_NUMS_ALTERNATE 10//替补刀具数
#define NUMS_ALTERNATE 10

struct DNC_TOOL_LIFE_TABLE //刀具寿命管理
{
	 int id;	//刀具号
	 int tool_magazine;//刀库号
	 int tool_status;//刀具状态
	 int life_type;//寿命类型
	 double  used_num;//当前使用寿命(次数或时间)
	 double  life_num;//最大寿命	 
	 double  alarm_num;//寿命预警
	 int mange_status;//管理状态
	 int alternate[NUMS_ALTERNATE];//备选刀号	 
} ;

struct DNC_CHAN_MACRO_STRUCT
{
	double  LocalArgument[NUMS_LOCAL_VAL];   		//对应系统#0001~#0033  
	double  UsrVarDouble[NUMS_USERVAR_DOUBLE];      //MIN_USERVAR_DOUBLE 0100--0199	
	double  chanHoldVar[NUMS_CHAN_HOLD_VAR];  //MIN_CHAN_HOLD_VAR 0500~0999   //.VAR
	int GMT_MacroVar[(NUM_G_MACRO_VAR+NUM_M_MACRO_VAR+NUM_T_MACRO_VAR)];  //MIN_GMT_VAR 1500-1549  GMT 宏调用
};
struct DNC_ORIGIN_STRUCT
{
	int DefOrigin; // DEFAULT_ORIGIN_VAR  2000
	double  Origin[NUMS_USER_COORD][EMC_CHAN_AXIS_MAX];  // MIN_ORIGIN_VAR 2001
	double  vice_Origin[NUMS_USER_COORD][EMC_CHAN_AXIS_MAX];  // MIN_VICE_ORIGIN_VAR 2201	
	double  RefG92[EMC_CHAN_AXIS_MAX];	//MIN_G92_VAR 2400
	double  AdditionOrigin[NUMS_ADDITION_COORD][EMC_CHAN_AXIS_MAX]; //MIN_ADDITION_COORD_VAR 3001
};

struct DNC_CANON_TOOL_TABLE
{
   int type;  //0:车刀   1:铣刀  2: 磨刀  3:其他//MIN_CUTTER_OFFSET_VAR 5001-5099
   float  toolOffset[3]; //MIN_CUTTER_OFFSET_VAR+300   5101-5199   5201 -5299  5301-5399
   float  radiusOffset; //半径   //MIN_CUTTER_OFFSET_VAR+400   5401-5499   
   int orientation; //方向码//MIN_CUTTER_OFFSET_VAR+500   5501-5599     
   float  toolWear[3];  //MIN_CUTTER_OFFSET_VAR+800   5601-5699   5701 -5799  5801-5899
   float  radiusWear; //半径磨耗//MIN_CUTTER_OFFSET_VAR+900   5901-5999
};

struct DNC_TOOLOFFSET_STRUCT
{
	DNC_CANON_TOOL_TABLE chanToolTable[NUMS_TOOL_OFFSET]; // BASE_CUTTER_OFFSET  5001-6000	
};



class PmCartesia
{
public:
  double x, y, z;                  
} ;
 
class CncPose {
public:
  PmCartesia tran;  
  double a, b, c;    
  double u, v, w;   
} ;

class CncCmd {
	public:
		  int mode;//模式
		  int type;//类型
		  int enable;//使能
		  int axis;//轴号
		  int rate;//倍率
		  int index;//序号
		  int line;//行号
		  int int_value;
		  unsigned long long_value;//长整值
		  double d_value;
		  double vel;//速度
		  unsigned char byte;
		  char keywords[50];
		  char filename[256];
		  char command[256];
		  int int_array[10];
		  CncPose origin;
		  int tool;
		  double length;
		  double wear;
		  double length2;
		  double wear2;
		  double diameter;
		  double dia_wear;
		  int orientation;
		  double tool_coord_x;
		  double tool_coord_y;
		  double tool_coord_z;
} ;

#ifdef  __cplusplus
extern "C" {
}
#endif

/*****API声明*****/
class NCCONNECTDLL_API CNCCONNECTDLL {
public:
	void __stdcall setDebugLock(int lock);//调试窗口信息输出开关(默认1关闭,0则开启输出)
	int __stdcall connectToNC(char* IPAddr = NULL, unsigned short Port = 0, int* iNCIndex = 0);
	int __stdcall disconnectToNC(int iNCIndex);
	int  __stdcall getStatusPeek(int iNCIndex, int chanNo);
	int __stdcall sendCmdToNC(int iNCIndex, int chanNo, int iCmdType, CncCmd iCmd);//已经废弃，301之前的接口
	int  __stdcall getStatusIntVal(int iNCIndex, int chanNo, int index, int* retValue);
	int __stdcall getStatusIntArrayVal(int iNCIndex, int chanNo, int index, int* retValue);
	int __stdcall getStatusDoubleVal(int iNCIndex, int chanNo, int index, double* retValue);
	int __stdcall getStatusDoubleArrayVal(int iNCIndex, int chanNo, int index, double* retValue);
	int __stdcall getStatusStrVal(int iNCIndex, int chanNo, int index, char* retValue);
	int __stdcall getIOVal(int iNCIndex, int index, int signal_index, unsigned char* retValue);
	int __stdcall getStatusAxisVal(int iNCIndex, int chanNo, int index, double* retValue);
	int __stdcall getErrorVal(int iNCIndex, int chanNo, char* retValue);
	int __stdcall getAutoMotionErrorVal(int iNCIndex, int chanNo, char* retValue);
	int __stdcall getAutoPlcErrorVal(int iNCIndex, int chanNo, char* retValue);
	int __stdcall getToolLifeTable(int iNCIndex, int chanNo, int index, DNC_TOOL_LIFE_TABLE* toolLifeTable);
	int __stdcall getMacroVarTable(int iNCIndex, int chanNo, int index, DNC_CHAN_MACRO_STRUCT* chanMacroVar);
	int __stdcall getToolOffsetTable(int iNCIndex, int chanNo, int index, DNC_TOOLOFFSET_STRUCT* chantooloffset);
	int __stdcall getOriginTable(int iNCIndex, int chanNo, int index, DNC_ORIGIN_STRUCT* originValue);
	void __stdcall initCmd(int chanNo, int iCmdType);


    int __stdcall sendCmd(int iNCIndex, int chanNo);
};
//extern NCCONNECTDLL_API int connectToNC;
//
NCCONNECTDLL_API int connectToNC();

	bool __stdcall addCmdData(int chanNo, char data);
	bool __stdcall addCmdData(int chanNo, int data);
	bool __stdcall addCmdData(int chanNo, double data);
	bool __stdcall addCmdArrayData(int chanNo, const char* data, unsigned int len);
	bool __stdcall addCmdArrayData(int chanNo, const int* data, unsigned int len);
	bool __stdcall addCmdArrayData(int chanNo, const double* data, unsigned int len);
	bool __stdcall addCmdCharData(int chanNo, char data);
	bool __stdcall addCmdIntData(int chanNo, int data);
	bool __stdcall addCmdDoubleData(int chanNo, double data);
	bool __stdcall addCmdCharArrayData(int chanNo, const char* data, unsigned int len);
	bool __stdcall addCmdIntArrayData(int chanNo, const int* data, unsigned int len);
	bool __stdcall addCmdDoubleArrayData(int chanNo, const double* data, unsigned int len);
	

#endif
 