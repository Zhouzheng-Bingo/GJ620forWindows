/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "machine.h"


/* GJ620 - ns=1;i=1 */

static UA_StatusCode function_machine_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GJ620");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "GJ620"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1LU)
);
}

/* Static Attribute - ns=1;i=5 */

static UA_StatusCode function_machine_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Static Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Static Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Static Attribute"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5LU)
);
}

/* Process Attribute - ns=1;i=4 */

static UA_StatusCode function_machine_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Process Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Process Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Process Attribute"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4LU)
);
}

/* Configuration Attribute - ns=1;i=3 */

static UA_StatusCode function_machine_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Configuration Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 3LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Configuration Attribute"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3LU)
);
}

/* Component - ns=1;i=2 */

static UA_StatusCode function_machine_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Component");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Component");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Component"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2LU)
);
}

/* Fixture - ns=1;i=9 */

static UA_StatusCode function_machine_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Fixture");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 9LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Fixture"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 9LU)
);
}

/* Cutting Tool - ns=1;i=8 */

static UA_StatusCode function_machine_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Cutting Tool");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Cutting Tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 8LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Cutting Tool"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8LU)
);
}

/* Controller - ns=1;i=7 */

static UA_StatusCode function_machine_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Controller");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 7LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Controller"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7LU)
);
}

/* Users - ns=1;i=24 */

static UA_StatusCode function_machine_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Users");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Users");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[1], 7LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Users"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24LU)
);
}

/* controlmode - ns=1;i=30 */

static UA_StatusCode function_machine_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "controlmode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "controlmode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 30LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "controlmode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 30LU)
);
}

/* runningstate - ns=1;i=29 */

static UA_StatusCode function_machine_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "runningstate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "runningstate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 29LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "runningstate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 29LU)
);
}

/* mainprogramname - ns=1;i=28 */

static UA_StatusCode function_machine_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "mainprogramname");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mainprogramname");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mainprogramname"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28LU)
);
}

/* zaxismachinetoolactualcoordinate - ns=1;i=27 */

static UA_StatusCode function_machine_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "zaxismachinetoolactualcoordinate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "zaxismachinetoolactualcoordinate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 27LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "zaxismachinetoolactualcoordinate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 27LU)
);
}

/* yaxismachinetoolactualcoordinate - ns=1;i=26 */

static UA_StatusCode function_machine_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "yaxismachinetoolactualcoordinate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "yaxismachinetoolactualcoordinate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 26LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "yaxismachinetoolactualcoordinate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 26LU)
);
}

/* xaxismachinetoolactualcoordinate - ns=1;i=25 */

static UA_StatusCode function_machine_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "xaxismachinetoolactualcoordinate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "xaxismachinetoolactualcoordinate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 25LU),
UA_NODEID_NUMERIC(ns[1], 24LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "xaxismachinetoolactualcoordinate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 25LU)
);
}

/* Auxiliary - ns=1;i=6 */

static UA_StatusCode function_machine_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Auxiliary");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Auxiliary");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Auxiliary"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6LU)
);
}

/* Servo Drive System - ns=1;i=12 */

static UA_StatusCode function_machine_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Servo Drive System");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Servo Drive System");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Servo Drive System"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12LU)
);
}

/* Servo Drive Static Attribute - ns=1;i=15 */

static UA_StatusCode function_machine_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Servo Drive Static Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Servo Drive Static Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15LU),
UA_NODEID_NUMERIC(ns[1], 12LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Servo Drive Static Attribute"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15LU)
);
}

/* Servo Drive Process Attribute - ns=1;i=13 */

static UA_StatusCode function_machine_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Servo Drive Process Attribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Servo Drive Process Attribute");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[1], 12LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "Servo Drive Process Attribute"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 13LU)
);
}

/* Z Vibration - ns=1;i=41 */

static UA_StatusCode function_machine_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Z Vibration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Z Vibration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 41LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Z Vibration"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 41LU)
);
}

/* Y Vibration - ns=1;i=40 */

static UA_StatusCode function_machine_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Y Vibration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Y Vibration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 40LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Y Vibration"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 40LU)
);
}

/* X Vibration - ns=1;i=39 */

static UA_StatusCode function_machine_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "X Vibration");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "X Vibration");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 39LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "X Vibration"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 39LU)
);
}

/* Z Vibration-800Hz - ns=1;i=38 */

static UA_StatusCode function_machine_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Z Vibration-800Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Z Vibration-800Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 38LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Z Vibration-800Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 38LU)
);
}

/* Z Vibration-400Hz - ns=1;i=37 */

static UA_StatusCode function_machine_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Z Vibration-400Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Z Vibration-400Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 37LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Z Vibration-400Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 37LU)
);
}

/* Y Vibration-800Hz - ns=1;i=36 */

static UA_StatusCode function_machine_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Y Vibration-800Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Y Vibration-800Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 36LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Y Vibration-800Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 36LU)
);
}

/* Y Vibration-400Hz - ns=1;i=34 */

static UA_StatusCode function_machine_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Y Vibration-400Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Y Vibration-400Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 34LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Y Vibration-400Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 34LU)
);
}

/* X Vibration-800Hz - ns=1;i=33 */

static UA_StatusCode function_machine_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "X Vibration-800Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "X Vibration-800Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 33LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "X Vibration-800Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 33LU)
);
}

/* X Vibratoin-400Hz - ns=1;i=32 */

static UA_StatusCode function_machine_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "X Vibratoin-400Hz");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "X Vibratoin-400Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 32LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "X Vibratoin-400Hz"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 32LU)
);
}

/* SrvFedPos - ns=1;i=22 */

static UA_StatusCode function_machine_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SrvFedPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SrvFedPos");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 22LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SrvFedPos"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 22LU)
);
}

/* SrvCmdPos - ns=1;i=21 */

static UA_StatusCode function_machine_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SrvCmdPos");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SrvCmdPos");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 21LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SrvCmdPos"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 21LU)
);
}

/* Temperature - ns=1;i=20 */

static UA_StatusCode function_machine_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.historizing = true;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 3;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Temperature");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20LU),
UA_NODEID_NUMERIC(ns[1], 13LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20LU)
);
}

/* PLC - ns=1;i=11 */

static UA_StatusCode function_machine_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PLC");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PLC");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "PLC"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11LU)
);
}

/* I/O - ns=1;i=10 */

static UA_StatusCode function_machine_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "I/O");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "I/O");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 10LU),
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "I/O"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
if (retVal != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}

static UA_StatusCode function_machine_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10LU)
);
}

UA_StatusCode machine(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://casnc.com.cn/opcua");

/* Load custom datatype definitions into the server */
if((retVal = function_machine_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_machine_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
