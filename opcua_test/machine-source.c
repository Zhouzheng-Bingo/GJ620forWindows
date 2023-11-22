/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "machine.h"


/* CNCMachineTool - ns=1;i=10000 */

static UA_StatusCode function_machine_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CNCMachineTool");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNCMachineTool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 85),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "MachineTool0001"),
UA_NODEID_NUMERIC(ns[0], 58),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10000)
);
}

/* CNCMachineObject - ns=1;i=11000 */

static UA_StatusCode function_machine_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CNCMachineObject");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNCMachineObjectSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11000),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CNCMachineObject"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11000)
);
}

/* ProcessAttribute - ns=1;i=11200 */

static UA_StatusCode function_machine_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[1], 11000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11200)
);
}

/* RunningState - ns=1;i=256 */

static UA_StatusCode function_machine_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_256_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_256_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_256_variant_DataContents);
*variablenode_ns_1_i_256_variant_DataContents = (UA_Byte) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_256_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RunningState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the running state of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 256),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RunningState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_256_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 256)
);
}

/* CurrentActivationAxis - ns=1;i=271 */

static UA_StatusCode function_machine_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_271_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_271_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_271_variant_DataContents);
*variablenode_ns_1_i_271_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_271_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentActiveAxis");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the currently activated axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 271),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CurrentActiveAxis"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_271_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 271)
);
}

/* CuttingTime - ns=1;i=259 */

static UA_StatusCode function_machine_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_259_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_259_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_259_variant_DataContents);
*variablenode_ns_1_i_259_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_259_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the cutting time of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 259),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_259_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 259)
);
}

/* TotalCuttingTime - ns=1;i=262 */

static UA_StatusCode function_machine_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_262_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_262_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_262_variant_DataContents);
*variablenode_ns_1_i_262_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_262_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalCuttingTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the total cutting time of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 262),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TotalCuttingTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_262_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 262)
);
}

/* ProgramHopState - ns=1;i=270 */

static UA_StatusCode function_machine_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_270_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_270_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_270_variant_DataContents);
*variablenode_ns_1_i_270_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_270_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramHopState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Does the NC Program Execute Segment");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 270),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramHopState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_270_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 270)
);
}

/* HoldState - ns=1;i=265 */

static UA_StatusCode function_machine_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_265_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_265_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_265_variant_DataContents);
*variablenode_ns_1_i_265_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_265_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HoldState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes whether the current is HOLD state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 265),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "HoldState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_265_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 265)
);
}

/* PoweronTime - ns=1;i=258 */

static UA_StatusCode function_machine_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_258_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_258_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_258_variant_DataContents);
*variablenode_ns_1_i_258_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_258_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "PoweronTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the power-on time of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 258),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PoweronTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_258_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 258)
);
}

/* RunningTime - ns=1;i=260 */

static UA_StatusCode function_machine_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_260_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_260_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_260_variant_DataContents);
*variablenode_ns_1_i_260_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_260_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RunningTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the running time of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 260),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RunningTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_260_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 260)
);
}

/* TotalRunningTime - ns=1;i=263 */

static UA_StatusCode function_machine_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_263_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_263_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_263_variant_DataContents);
*variablenode_ns_1_i_263_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_263_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalRunningTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the total running time of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 263),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TotalRunningTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_263_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 263)
);
}

/* TotalPoweronTime - ns=1;i=261 */

static UA_StatusCode function_machine_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_261_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_261_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_261_variant_DataContents);
*variablenode_ns_1_i_261_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_261_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalPoweronTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the total power-on time of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 261),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TotalPoweronTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_261_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 261)
);
}

/* FeedState - ns=1;i=264 */

static UA_StatusCode function_machine_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_264_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_264_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_264_variant_DataContents);
*variablenode_ns_1_i_264_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_264_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes whether the current is feed state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 264),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_264_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 264)
);
}

/* ShaftLockingState - ns=1;i=266 */

static UA_StatusCode function_machine_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_266_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_266_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_266_variant_DataContents);
*variablenode_ns_1_i_266_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_266_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisLockState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether NC machine tool shaft is locked");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 266),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AxisLockState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_266_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 266)
);
}

/* AuxiliaryLockState - ns=1;i=267 */

static UA_StatusCode function_machine_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_267_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_267_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_267_variant_DataContents);
*variablenode_ns_1_i_267_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_267_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AuxiliaryLockState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the auxiliary function locks of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 267),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AuxiliaryLockState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_267_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 267)
);
}

/* ControlMode - ns=1;i=257 */

static UA_StatusCode function_machine_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_257_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_257_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_257_variant_DataContents);
*variablenode_ns_1_i_257_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_257_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ControlMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the Control Mode of NC Machine");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 257),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ControlMode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_257_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 257)
);
}

/* ZeroreturnDistance - ns=1;i=273 */

static UA_StatusCode function_machine_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_273_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_273_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_273_variant_DataContents);
*variablenode_ns_1_i_273_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_273_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZeroreturnDistance");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe zero-return distance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 273),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZeroreturnDistance"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_273_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 273)
);
}

/* Run - ns=1;i=20000 */

static UA_StatusCode function_machine_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = UA_ACCESSLEVELMASK_READ|UA_ACCESSLEVELMASK_WRITE;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1);
UA_Boolean *variablenode_ns_1_i_20000_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_20000_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_20000_variant_DataContents);
*variablenode_ns_1_i_20000_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20000_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Run");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Run");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20000),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Run"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_20000_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20000)
);
}

/* HandwheelMultiplier - ns=1;i=274 */

static UA_StatusCode function_machine_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_274_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_274_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_274_variant_DataContents);
*variablenode_ns_1_i_274_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_274_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "HandwheelMultiplier");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of hand-wheel multiplier for NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 274),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "HandwheelMultiplier"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_274_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 274)
);
}

/* EmptyRunningState - ns=1;i=268 */

static UA_StatusCode function_machine_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_268_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_268_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_268_variant_DataContents);
*variablenode_ns_1_i_268_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_268_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EmptyRunningState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the NC machine is currently in an empty state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 268),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "EmptyRunningState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_268_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 268)
);
}

/* ZeroreturnRelease - ns=1;i=272 */

static UA_StatusCode function_machine_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte variablenode_ns_1_i_272_variant_DataContents[1];
variablenode_ns_1_i_272_variant_DataContents[0] = (UA_Byte) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_272_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZeroreturnRelease");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the NC machine is in a zero-return release state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 272),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZeroreturnRelease"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 272)
);
}

/* SelectiveStopState - ns=1;i=269 */

static UA_StatusCode function_machine_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_269_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_269_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_269_variant_DataContents);
*variablenode_ns_1_i_269_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_269_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SelectiveStopState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the NC machine is in a selective stop state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 269),
UA_NODEID_NUMERIC(ns[1], 11200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SelectiveStopState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_269_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 269)
);
}

/* ConfigurationAttribute - ns=1;i=11300 */

static UA_StatusCode function_machine_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigurationAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The type for objects that organize other nodes.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[1], 11000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ConfigurationAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11300)
);
}

/* ControlAxisNumber - ns=1;i=514 */

static UA_StatusCode function_machine_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_514_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_514_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_514_variant_DataContents);
*variablenode_ns_1_i_514_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_514_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ControlAxisNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Control Axis Number of NC Machine Tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 514),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ControlAxisNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_514_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 514)
);
}

/* ServoPeriod - ns=1;i=515 */

static UA_StatusCode function_machine_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_515_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_515_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_515_variant_DataContents);
*variablenode_ns_1_i_515_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_515_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ServoPeriod");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing the Servo Control Period (MS) of NC Machine Tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 515),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ServoPeriod"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_515_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 515)
);
}

/* AxisType - ns=1;i=522 */

static UA_StatusCode function_machine_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_522_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_522_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_522_variant_DataContents);
*variablenode_ns_1_i_522_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_522_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AxisType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of Axis types of CNC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 522),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AxisType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_522_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 522)
);
}

/* MachineIPAddress - ns=1;i=512 */

static UA_StatusCode function_machine_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_512_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_512_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_512_variant_DataContents);
*variablenode_ns_1_i_512_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_512_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineIPAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe IP Address of NC Machine");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 512),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineIPAddress"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_512_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 512)
);
}

/* FastMovingAccelerationMode - ns=1;i=518 */

static UA_StatusCode function_machine_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_518_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_518_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_518_variant_DataContents);
*variablenode_ns_1_i_518_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_518_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FastMovingAccelerationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing the Fast Moving Acceleration and Deceleration Modes");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 518),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FastMovingAccelerationMode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_518_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 518)
);
}

/* AccelerationFilteringTime - ns=1;i=520 */

static UA_StatusCode function_machine_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_520_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_520_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_520_variant_DataContents);
*variablenode_ns_1_i_520_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_520_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AccelerationFilteringTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "describe the filtering time of S curve acceleration and deceleration mode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 520),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AccelerationFilteringTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_520_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 520)
);
}

/* CuttingFeedAccelerationMode - ns=1;i=517 */

static UA_StatusCode function_machine_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_517_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_517_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_517_variant_DataContents);
*variablenode_ns_1_i_517_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_517_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingFeedAccelerationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of cutting feed acceleration and deceleration for CNC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 517),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingFeedAccelerationMode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_517_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 517)
);
}

/* ControlAxisNameDescription - ns=1;i=513 */

static UA_StatusCode function_machine_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_513_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_513_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_513_variant_DataContents);
*variablenode_ns_1_i_513_variant_DataContents = UA_STRING_ALLOC("XXYY002");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_513_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ControlAxisNameDescription");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the name of the control shaft of a numerical control");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 513),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ControlAxisNameDescription"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_513_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 513)
);
}

/* JOGFeedAccelerationMode - ns=1;i=519 */

static UA_StatusCode function_machine_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_519_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_519_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_519_variant_DataContents);
*variablenode_ns_1_i_519_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_519_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "JOGFeedAccelerationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing JOG Feed Acceleration and Deceleration Mode of NC Machine Tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 519),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "JOGFeedAccelerationMode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_519_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 519)
);
}

/* InterpolationPeriod - ns=1;i=516 */

static UA_StatusCode function_machine_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_516_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_516_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_516_variant_DataContents);
*variablenode_ns_1_i_516_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_516_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InterpolationPeriod");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing the Interpolation Control Period (MS) of NC Machine Tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 516),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InterpolationPeriod"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_516_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 516)
);
}

/* DAOutputChannelNumber - ns=1;i=521 */

static UA_StatusCode function_machine_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_521_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_521_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_521_variant_DataContents);
*variablenode_ns_1_i_521_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_521_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DAOutputChannelNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of D/A output channel number for CNC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 521),
UA_NODEID_NUMERIC(ns[1], 11300),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DAOutputChannelNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_521_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 521)
);
}

/* StaticAttribute - ns=1;i=11100 */

static UA_StatusCode function_machine_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "StaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "StaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[1], 11000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "StaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 11100)
);
}

/* Manufacturer - ns=1;i=7 */

static UA_StatusCode function_machine_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_6_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6_variant_DataContents);
*variablenode_ns_1_i_6_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineManufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the manufacturer of NC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 7),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineManufacturer"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 7)
);
}

/* CommunicationInterface - ns=1;i=9 */

static UA_StatusCode function_machine_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_8_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_8_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_8_variant_DataContents);
*variablenode_ns_1_i_8_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CommunicationInterface");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe external communication interface of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 9),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CommunicationInterface"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_8_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 9)
);
}

/* CNCSystemName - ns=1;i=5 */

static UA_StatusCode function_machine_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4_variant_DataContents);
*variablenode_ns_1_i_4_variant_DataContents = UA_STRING_ALLOC("XXYY004");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CNCSystemName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the name of CNC system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CNCSystemName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5)
);
}

/* ProductionDate - ns=1;i=8 */

static UA_StatusCode function_machine_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_1_i_7_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_7_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_7_variant_DataContents);
*variablenode_ns_1_i_7_variant_DataContents = ( (UA_DateTime)(1546732800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_7_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineProductionDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the date of production of CNC machines");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineProductionDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_7_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8)
);
}

/* MachineNo - ns=1;i=1 */

static UA_StatusCode function_machine_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_90000_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_90000_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_90000_variant_DataContents);
*variablenode_ns_1_i_90000_variant_DataContents = UA_STRING_ALLOC("XXYY001");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_90000_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineNo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the machine number of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 1),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineNo"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_90000_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1)
);
}

/* MachineName - ns=1;i=2 */

static UA_StatusCode function_machine_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_1_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_1_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_1_variant_DataContents);
*variablenode_ns_1_i_1_variant_DataContents = UA_STRING_ALLOC("KND");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_1_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the machine name of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 2),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_1_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2)
);
}

/* CNCSystemVersionNumber - ns=1;i=6 */

static UA_StatusCode function_machine_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_5_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_5_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_5_variant_DataContents);
*variablenode_ns_1_i_5_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_5_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CNCSystemVersionNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the varname number of CNC system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CNCSystemVersionNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_5_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6)
);
}

/* MachineModel - ns=1;i=3 */

static UA_StatusCode function_machine_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_2_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_2_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_2_variant_DataContents);
*variablenode_ns_1_i_2_variant_DataContents = UA_STRING_ALLOC("XXYY0002");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineModel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the machine model number of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 3),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineModel"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_2_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 3)
);
}

/* RatedPower - ns=1;i=10 */

static UA_StatusCode function_machine_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_9_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_9_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_9_variant_DataContents);
*variablenode_ns_1_i_9_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_9_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RatedPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe rated power information of NC machine tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 10),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RatedPower"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_9_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 10)
);
}

/* MachineType - ns=1;i=4 */

static UA_StatusCode function_machine_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_3_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_3_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_3_variant_DataContents);
*variablenode_ns_1_i_3_variant_DataContents = UA_STRING_ALLOC("XXYY0003");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_3_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MachineType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the types of CNC machine tools, such as CNC lathe, CNC planer, CNC milling machine and other information");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4),
UA_NODEID_NUMERIC(ns[1], 11100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MachineType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_3_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4)
);
}

/* Component - ns=1;i=12000 */

static UA_StatusCode function_machine_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Component");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ServoComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[1], 10000),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Component"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12000)
);
}

/* CuttingToolComponent - ns=1;i=12600 */

static UA_StatusCode function_machine_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CuttingToolComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12600),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CuttingToolComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12600)
);
}

/* CuttingToolStaticAttribute - ns=1;i=12610 */

static UA_StatusCode function_machine_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolStaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CuttingToolStaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12610),
UA_NODEID_NUMERIC(ns[1], 12600),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CuttingToolStaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12610)
);
}

/* MaxCuttingToolSize - ns=1;i=24577 */

static UA_StatusCode function_machine_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24577_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24577_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24577_variant_DataContents);
*variablenode_ns_1_i_24577_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24577_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxCuttingToolSize");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the maximum size of the cutting tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24577),
UA_NODEID_NUMERIC(ns[1], 12610),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MaxCuttingToolSize"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24577_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24577)
);
}

/* MinCuttingToolSize - ns=1;i=24578 */

static UA_StatusCode function_machine_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24578_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24578_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24578_variant_DataContents);
*variablenode_ns_1_i_24578_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24578_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinCuttingToolSize");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the minimum size of the cutting tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24578),
UA_NODEID_NUMERIC(ns[1], 12610),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MinCuttingToolSize"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24578_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24578)
);
}

/* CuttingToolNumber - ns=1;i=24576 */

static UA_StatusCode function_machine_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_24576_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_24576_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_24576_variant_DataContents);
*variablenode_ns_1_i_24576_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24576_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the number of the cutting tool");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24576),
UA_NODEID_NUMERIC(ns[1], 12610),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingToolNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_24576_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24576)
);
}

/* CuttingToolProcessAttribute - ns=1;i=12620 */

static UA_StatusCode function_machine_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CuttingToolProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[1], 12600),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CuttingToolProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12620)
);
}

/* XDirectionOfToolInUse - ns=1;i=24582 */

static UA_StatusCode function_machine_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24582_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24582_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24582_variant_DataContents);
*variablenode_ns_1_i_24582_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24582_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XDirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the X direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24582),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XDirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24582_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24582)
);
}

/* ToolLengthInUse - ns=1;i=24581 */

static UA_StatusCode function_machine_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24581_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24581_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24581_variant_DataContents);
*variablenode_ns_1_i_24581_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24581_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolLengthInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the length of the cutting tool in use");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24581),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingToolLengthInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24581_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24581)
);
}

/* ToolNumberInUse - ns=1;i=24579 */

static UA_StatusCode function_machine_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_24579_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_24579_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_24579_variant_DataContents);
*variablenode_ns_1_i_24579_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24579_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolNumberInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the number of the cutting tool being used");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24579),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingToolNumberInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_24579_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24579)
);
}

/* CuttingToolTypeInUse - ns=1;i=24588 */

static UA_StatusCode function_machine_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_24588_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_24588_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_24588_variant_DataContents);
*variablenode_ns_1_i_24588_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24588_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolTypeInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the type of cutting tool in use");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24588),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingToolTypeInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_24588_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24588)
);
}

/* ZDirectionOfToolInUse - ns=1;i=24584 */

static UA_StatusCode function_machine_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24584_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24584_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24584_variant_DataContents);
*variablenode_ns_1_i_24584_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24584_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZDirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the Z direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24584),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZDirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24584_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24584)
);
}

/* YDirectionOfToolInUse - ns=1;i=24583 */

static UA_StatusCode function_machine_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24583_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24583_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24583_variant_DataContents);
*variablenode_ns_1_i_24583_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24583_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YDirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the Y direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24583),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YDirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24583_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24583)
);
}

/* ToolRadiusInUse - ns=1;i=24580 */

static UA_StatusCode function_machine_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24580_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24580_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24580_variant_DataContents);
*variablenode_ns_1_i_24580_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24580_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CuttingToolRadiusInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the tool radius in use");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24580),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CuttingToolRadiusInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24580_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24580)
);
}

/* CDirectionOfToolInUse - ns=1;i=24587 */

static UA_StatusCode function_machine_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24587_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24587_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24587_variant_DataContents);
*variablenode_ns_1_i_24587_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24587_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CDirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the C direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24587),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CDirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24587_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24587)
);
}

/* BDirectionOfToolInUse - ns=1;i=24586 */

static UA_StatusCode function_machine_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24586_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24586_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24586_variant_DataContents);
*variablenode_ns_1_i_24586_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24586_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BDirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the B direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24586),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BDirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24586_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24586)
);
}

/* ADirectionOfToolInUse - ns=1;i=24585 */

static UA_StatusCode function_machine_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_24585_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_24585_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_24585_variant_DataContents);
*variablenode_ns_1_i_24585_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_24585_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ADirectionOfCuttingToolInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the position of the cutting tool in the A direction");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 24585),
UA_NODEID_NUMERIC(ns[1], 12620),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ADirectionOfCuttingToolInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_24585_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 24585)
);
}

/* FixtureComponent - ns=1;i=12700 */

static UA_StatusCode function_machine_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FixtureComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12700),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "FixtureComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12700)
);
}

/* FixtureProcessAttribute - ns=1;i=12720 */

static UA_StatusCode function_machine_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FixtureProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12720),
UA_NODEID_NUMERIC(ns[1], 12700),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "FixtureProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12720)
);
}

/* FixtureStatus - ns=1;i=28677 */

static UA_StatusCode function_machine_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_28677_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_28677_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_28677_variant_DataContents);
*variablenode_ns_1_i_28677_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28677_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the current fixture status of CNC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28677),
UA_NODEID_NUMERIC(ns[1], 12720),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureStatus"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_28677_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28677)
);
}

/* FixtureStaticAttribute - ns=1;i=12710 */

static UA_StatusCode function_machine_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureStaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FixtureStaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[1], 12700),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "FixtureStaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12710)
);
}

/* FixtureDesignTime - ns=1;i=28675 */

static UA_StatusCode function_machine_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_1_i_28675_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_28675_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_28675_variant_DataContents);
*variablenode_ns_1_i_28675_variant_DataContents = ( (UA_DateTime)(1546732800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28675_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureDesignTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the design time of the fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28675),
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureDesignTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_28675_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28675)
);
}

/* FixtureDesigner - ns=1;i=28674 */

static UA_StatusCode function_machine_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_28674_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_28674_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_28674_variant_DataContents);
*variablenode_ns_1_i_28674_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28674_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureDesigner");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the designer of the fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28674),
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureDesigner"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_28674_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28674)
);
}

/* FixtureApplicableMachineTool - ns=1;i=28676 */

static UA_StatusCode function_machine_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_28676_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_28676_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_28676_variant_DataContents);
*variablenode_ns_1_i_28676_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28676_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureApplicableMachineTool");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the type of machine that can be applied to the fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28676),
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureApplicableMachineTool"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_28676_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28676)
);
}

/* FixtureName - ns=1;i=28672 */

static UA_StatusCode function_machine_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_28672_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_28672_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_28672_variant_DataContents);
*variablenode_ns_1_i_28672_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28672_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the name of the fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28672),
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_28672_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28672)
);
}

/* FixtureNumber - ns=1;i=28673 */

static UA_StatusCode function_machine_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_28673_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_28673_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_28673_variant_DataContents);
*variablenode_ns_1_i_28673_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_28673_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the number of the fixture");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 28673),
UA_NODEID_NUMERIC(ns[1], 12710),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_28673_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 28673)
);
}

/* PLCComponent - ns=1;i=12400 */

static UA_StatusCode function_machine_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PLCComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PLCComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12400),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PLCComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12400)
);
}

/* PLCProcessAttribute - ns=1;i=12420 */

static UA_StatusCode function_machine_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PLCProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PLCProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[1], 12400),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PLCProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12420)
);
}

/* Feedholdstatus - ns=1;i=16389 */

static UA_StatusCode function_machine_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16389_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16389_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16389_variant_DataContents);
*variablenode_ns_1_i_16389_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16389_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Feedholdstatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in the feed hold state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16389),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Feedholdstatus"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16389_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16389)
);
}

/* OperatingStatus - ns=1;i=16388 */

static UA_StatusCode function_machine_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16388_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16388_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16388_variant_DataContents);
*variablenode_ns_1_i_16388_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16388_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OperatingStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the operating status of CNC machine tools");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16388),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OperatingStatus"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16388_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16388)
);
}

/* LoopStartState - ns=1;i=16390 */

static UA_StatusCode function_machine_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16390_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16390_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16390_variant_DataContents);
*variablenode_ns_1_i_16390_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16390_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "LoopStartState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in the cycle start state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16390),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "LoopStartState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16390_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16390)
);
}

/* ForbidAxisEnable - ns=1;i=16394 */

static UA_StatusCode function_machine_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16394_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16394_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16394_variant_DataContents);
*variablenode_ns_1_i_16394_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16394_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ForbidAxisEnable");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the NC machine is currently in a forbidden axis enable state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16394),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ForbidAxisEnable"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16394_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16394)
);
}

/* ResetSignal - ns=1;i=16387 */

static UA_StatusCode function_machine_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16387_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16387_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16387_variant_DataContents);
*variablenode_ns_1_i_16387_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16387_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ResetSignal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in the reset state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16387),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ResetSignal"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16387_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16387)
);
}

/* Allaxislockstatus - ns=1;i=16391 */

static UA_StatusCode function_machine_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16391_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16391_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16391_variant_DataContents);
*variablenode_ns_1_i_16391_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16391_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Allaxislockstatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the current axis of the CNC machine is locked");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16391),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Allaxislockstatus"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16391_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16391)
);
}

/* FixtureInUse - ns=1;i=16396 */

static UA_StatusCode function_machine_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16396_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16396_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16396_variant_DataContents);
*variablenode_ns_1_i_16396_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16396_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FixtureInUse");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the number of fixtures currently in use for CNC machines");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16396),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FixtureInUse"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16396_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16396)
);
}

/* RequestLubricationSignal - ns=1;i=16395 */

static UA_StatusCode function_machine_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16395_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16395_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16395_variant_DataContents);
*variablenode_ns_1_i_16395_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16395_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RequestLubricationSignal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe Run Huan Request Signal of CN");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16395),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RequestLubricationSignal"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16395_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16395)
);
}

/* AuxiliaryFunctionLockStatus - ns=1;i=16392 */

static UA_StatusCode function_machine_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16392_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16392_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16392_variant_DataContents);
*variablenode_ns_1_i_16392_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16392_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AuxiliaryFunctionLockStatus");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in the reset state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16392),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AuxiliaryFunctionLockStatus"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16392_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16392)
);
}

/* EmergencyStopSignal - ns=1;i=16386 */

static UA_StatusCode function_machine_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16386_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16386_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16386_variant_DataContents);
*variablenode_ns_1_i_16386_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16386_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EmergencyStopSignal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in an emergency stop state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16386),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "EmergencyStopSignal"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16386_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16386)
);
}

/* DryRunningState - ns=1;i=16393 */

static UA_StatusCode function_machine_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_16393_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_16393_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_16393_variant_DataContents);
*variablenode_ns_1_i_16393_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16393_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DryRunningState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe whether the CNC machine is currently in the idle state");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16393),
UA_NODEID_NUMERIC(ns[1], 12420),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DryRunningState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_16393_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16393)
);
}

/* PLCStaticAttribute - ns=1;i=12410 */

static UA_StatusCode function_machine_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PLCStaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PLCStaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12410),
UA_NODEID_NUMERIC(ns[1], 12400),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PLCStaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12410)
);
}

/* ScalableMaxIOPoints - ns=1;i=16385 */

static UA_StatusCode function_machine_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_16385_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_16385_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_16385_variant_DataContents);
*variablenode_ns_1_i_16385_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16385_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ScalableMaxIOPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of scalable maximum I/O  points for PLC");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16385),
UA_NODEID_NUMERIC(ns[1], 12410),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ScalableMaxIOPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_16385_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16385)
);
}

/* StandardIOPoints - ns=1;i=16384 */

static UA_StatusCode function_machine_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_16384_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_16384_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_16384_variant_DataContents);
*variablenode_ns_1_i_16384_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_16384_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StandardIOPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of Standard I/O points for PLC");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 16384),
UA_NODEID_NUMERIC(ns[1], 12410),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "StandardIOPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_16384_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 16384)
);
}

/* ServoComponent - ns=1;i=12200 */

static UA_StatusCode function_machine_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ServoComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ServoComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12200),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "ServoComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12200)
);
}

/* SpindleComponent - ns=1;i=12210 */

static UA_StatusCode function_machine_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpindleComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12210),
UA_NODEID_NUMERIC(ns[1], 12200),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "SpindleComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12210)
);
}

/* SpindleStaticAttribute - ns=1;i=12211 */

static UA_StatusCode function_machine_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleStaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpindleStaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12211),
UA_NODEID_NUMERIC(ns[1], 12210),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "SpindleStaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12211)
);
}

/* DriveProductionDate - ns=1;i=8194 */

static UA_StatusCode function_machine_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13);
UA_DateTime *variablenode_ns_1_i_8194_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_8194_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_8194_variant_DataContents);
*variablenode_ns_1_i_8194_variant_DataContents = ( (UA_DateTime)(1546732800000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8194_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "DriveProductionDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the production date driven");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8194),
UA_NODEID_NUMERIC(ns[1], 12211),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DriveProductionDate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_8194_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8194)
);
}

/* DriveManufacturer - ns=1;i=8192 */

static UA_StatusCode function_machine_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_8192_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_8192_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_8192_variant_DataContents);
*variablenode_ns_1_i_8192_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8192_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DriveManufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the drive manufacturer name");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8192),
UA_NODEID_NUMERIC(ns[1], 12211),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DriveManufacturer"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_8192_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8192)
);
}

/* DriverName - ns=1;i=8193 */

static UA_StatusCode function_machine_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_8193_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_8193_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_8193_variant_DataContents);
*variablenode_ns_1_i_8193_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8193_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "DriverName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the driver name");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8193),
UA_NODEID_NUMERIC(ns[1], 12211),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DriverName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_8193_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8193)
);
}

/* SpindleProcessAttribute - ns=1;i=12213 */

static UA_StatusCode function_machine_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpindleProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[1], 12210),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "SpindleProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12213)
);
}

/* SpindleName - ns=1;i=8197 */

static UA_StatusCode function_machine_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_8197_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_8197_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_8197_variant_DataContents);
*variablenode_ns_1_i_8197_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8197_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe spindle names");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8197),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_8197_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8197)
);
}

/* SpindleDirection - ns=1;i=8203 */

static UA_StatusCode function_machine_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_8203_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_8203_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_8203_variant_DataContents);
*variablenode_ns_1_i_8203_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8203_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleDirection");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the direction of principal axis ro");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8203),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleDirection"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_8203_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8203)
);
}

/* SpindleRunningState - ns=1;i=8204 */

static UA_StatusCode function_machine_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_8204_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_8204_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_8204_variant_DataContents);
*variablenode_ns_1_i_8204_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8204_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleRunningState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the operating state of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8204),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleRunningState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_8204_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8204)
);
}

/* SpindleState - ns=1;i=8198 */

static UA_StatusCode function_machine_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_8198_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_8198_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_8198_variant_DataContents);
*variablenode_ns_1_i_8198_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8198_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleEnablementState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the current state of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8198),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleEnablementState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_8198_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8198)
);
}

/* ActualSpindleSpeed - ns=1;i=8200 */

static UA_StatusCode function_machine_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8200_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8200_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8200_variant_DataContents);
*variablenode_ns_1_i_8200_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8200_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualSpindleSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual velocity of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8200),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActualSpindleSpeed"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8200_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8200)
);
}

/* SpindleProgrammingSpeed - ns=1;i=8199 */

static UA_StatusCode function_machine_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8199_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8199_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8199_variant_DataContents);
*variablenode_ns_1_i_8199_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8199_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleProgrammingSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the programming speed value of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8199),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleProgrammingSpeed"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8199_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8199)
);
}

/* SpindleTrimmingValue - ns=1;i=8201 */

static UA_StatusCode function_machine_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8201_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8201_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8201_variant_DataContents);
*variablenode_ns_1_i_8201_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8201_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the repair value of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8201),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleRate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8201_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8201)
);
}

/* SpindleLoad - ns=1;i=8202 */

static UA_StatusCode function_machine_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8202_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8202_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8202_variant_DataContents);
*variablenode_ns_1_i_8202_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8202_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing spindle load");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8202),
UA_NODEID_NUMERIC(ns[1], 12213),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8202_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8202)
);
}

/* SpindleConfigurationAttribute - ns=1;i=12212 */

static UA_StatusCode function_machine_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleConfigurationAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpindleConfigurationAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12212),
UA_NODEID_NUMERIC(ns[1], 12210),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "SpindleConfigurationAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12212)
);
}

/* MaxSpindleSpeed - ns=1;i=8195 */

static UA_StatusCode function_machine_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_8195_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_8195_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_8195_variant_DataContents);
*variablenode_ns_1_i_8195_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8195_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxSpindleSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the maximum speed of the spindle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8195),
UA_NODEID_NUMERIC(ns[1], 12212),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MaxSpindleSpeed"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_8195_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8195)
);
}

/* SpindleSpeedSeries - ns=1;i=8196 */

static UA_StatusCode function_machine_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_8196_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_8196_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_8196_variant_DataContents);
*variablenode_ns_1_i_8196_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8196_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpindleSpeedSeries");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the level of spindle speed/AttributeDescription");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8196),
UA_NODEID_NUMERIC(ns[1], 12212),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SpindleSpeedSeries"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_8196_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8196)
);
}

/* FeedShaftComponent - ns=1;i=12220 */

static UA_StatusCode function_machine_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FeedShaftComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FeedShaftComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12220),
UA_NODEID_NUMERIC(ns[1], 12200),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "FeedShaftComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12220)
);
}

/* FeedShaftProcessAttribute - ns=1;i=12221 */

static UA_StatusCode function_machine_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FeedShaftProcessAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FeedShaftProcessAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[1], 12220),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "FeedShaftProcessAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12221)
);
}

/* YaxisResidual - ns=1;i=8473 */

static UA_StatusCode function_machine_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8473_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8473_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8473_variant_DataContents);
*variablenode_ns_1_i_8473_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8473_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the Y-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8473),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8473_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8473)
);
}

/* FeedProgrammingSpeed - ns=1;i=8492 */

static UA_StatusCode function_machine_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8492_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8492_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8492_variant_DataContents);
*variablenode_ns_1_i_8492_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8492_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedProgrammingSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of the feed programming speed  value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8492),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedProgrammingSpeed"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8492_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8492)
);
}

/* CaxisResidual - ns=1;i=8477 */

static UA_StatusCode function_machine_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8477_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8477_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8477_variant_DataContents);
*variablenode_ns_1_i_8477_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8477_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the C-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8477),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8477_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8477)
);
}

/* RapidTraverseOverride - ns=1;i=8491 */

static UA_StatusCode function_machine_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8491_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8491_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8491_variant_DataContents);
*variablenode_ns_1_i_8491_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8491_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RapidTraverseOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The rapid traverse override description of the machine");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8491),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RapidTraverseOverride"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8491_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8491)
);
}

/* FeedAdjustmentValue - ns=1;i=8494 */

static UA_StatusCode function_machine_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8494_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8494_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8494_variant_DataContents);
*variablenode_ns_1_i_8494_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8494_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of the feed adjustment value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8494),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedRate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8494_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8494)
);
}

/* XaxisUserCoordinatesProgrammingValue - ns=1;i=8448 */

static UA_StatusCode function_machine_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8448_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8448_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8448_variant_DataContents);
*variablenode_ns_1_i_8448_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8448_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the X axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8448),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8448_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8448)
);
}

/* FeedActualSpeed - ns=1;i=8493 */

static UA_StatusCode function_machine_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8493_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8493_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8493_variant_DataContents);
*variablenode_ns_1_i_8493_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8493_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "FeedActualCompoundSpeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of the feed actual speed  value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8493),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FeedActualCompoundSpeed"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8493_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8493)
);
}

/* XaxisLoad - ns=1;i=8484 */

static UA_StatusCode function_machine_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8484_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8484_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8484_variant_DataContents);
*variablenode_ns_1_i_8484_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8484_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing X-axis load");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8484),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8484_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8484)
);
}

/* BaxislLoad - ns=1;i=8488 */

static UA_StatusCode function_machine_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8488_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8488_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8488_variant_DataContents);
*variablenode_ns_1_i_8488_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8488_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxislLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description axial load B");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8488),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxislLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8488_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8488)
);
}

/* BaxisUserCoordinatesProgrammingValue - ns=1;i=8452 */

static UA_StatusCode function_machine_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8452_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8452_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8452_variant_DataContents);
*variablenode_ns_1_i_8452_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8452_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the B axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8452),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8452_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8452)
);
}

/* XaxisUserCoordinatesActualValue - ns=1;i=8454 */

static UA_StatusCode function_machine_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8454_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8454_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8454_variant_DataContents);
*variablenode_ns_1_i_8454_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8454_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the X axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8454),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8454_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8454)
);
}

/* ZaxisUserCoordinatesActualValue - ns=1;i=8456 */

static UA_StatusCode function_machine_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8456_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8456_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8456_variant_DataContents);
*variablenode_ns_1_i_8456_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8456_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the Z axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8456),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8456_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8456)
);
}

/* YaxisUserCoordinatesActualValue - ns=1;i=8455 */

static UA_StatusCode function_machine_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8455_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8455_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8455_variant_DataContents);
*variablenode_ns_1_i_8455_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8455_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the Y axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8455),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8455_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8455)
);
}

/* RapidRate - ns=1;i=8490 */

static UA_StatusCode function_machine_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8490_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8490_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8490_variant_DataContents);
*variablenode_ns_1_i_8490_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8490_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RapidRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The rapid override description of the machine");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8490),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RapidRate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8490_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8490)
);
}

/* AaxisMachineToolCoordinateTheoryValue - ns=1;i=8463 */

static UA_StatusCode function_machine_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8463_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8463_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8463_variant_DataContents);
*variablenode_ns_1_i_8463_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8463_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing A-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8463),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8463_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8463)
);
}

/* ZaxisMachineToolCoordinateTheoryValue - ns=1;i=8462 */

static UA_StatusCode function_machine_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8462_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8462_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8462_variant_DataContents);
*variablenode_ns_1_i_8462_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8462_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing Z-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8462),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8462_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8462)
);
}

/* ZaxisResidual - ns=1;i=8474 */

static UA_StatusCode function_machine_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8474_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8474_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8474_variant_DataContents);
*variablenode_ns_1_i_8474_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8474_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the Z-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8474),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8474_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8474)
);
}

/* CaxisUserCoordinatesActualValue - ns=1;i=8459 */

static UA_StatusCode function_machine_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8459_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8459_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8459_variant_DataContents);
*variablenode_ns_1_i_8459_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8459_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the C axi");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8459),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8459_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8459)
);
}

/* BaxisBacklash - ns=1;i=8482 */

static UA_StatusCode function_machine_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8482_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8482_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8482_variant_DataContents);
*variablenode_ns_1_i_8482_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8482_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe B-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8482),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8482_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8482)
);
}

/* ZaxisBacklash - ns=1;i=8480 */

static UA_StatusCode function_machine_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8480_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8480_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8480_variant_DataContents);
*variablenode_ns_1_i_8480_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8480_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe Z-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8480),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8480_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8480)
);
}

/* XaxisResidual - ns=1;i=8472 */

static UA_StatusCode function_machine_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8472_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8472_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8472_variant_DataContents);
*variablenode_ns_1_i_8472_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8472_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the X-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8472),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8472_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8472)
);
}

/* ZaxislLoad - ns=1;i=8486 */

static UA_StatusCode function_machine_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8486_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8486_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8486_variant_DataContents);
*variablenode_ns_1_i_8486_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8486_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxislLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description axial load Z");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8486),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxislLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8486_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8486)
);
}

/* YaxisBacklash - ns=1;i=8479 */

static UA_StatusCode function_machine_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8479_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8479_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8479_variant_DataContents);
*variablenode_ns_1_i_8479_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8479_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe Y-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8479),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8479_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8479)
);
}

/* AaxisMachineToolActualCoordinateValue - ns=1;i=8469 */

static UA_StatusCode function_machine_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8469_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8469_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8469_variant_DataContents);
*variablenode_ns_1_i_8469_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8469_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of A-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8469),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8469_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8469)
);
}

/* CaxisMachineToolActualCoordinateValue - ns=1;i=8471 */

static UA_StatusCode function_machine_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8471_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8471_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8471_variant_DataContents);
*variablenode_ns_1_i_8471_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8471_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of C-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8471),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8471_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8471)
);
}

/* XaxisMachineToolCoordinateTheoryValue - ns=1;i=8460 */

static UA_StatusCode function_machine_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8460_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8460_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8460_variant_DataContents);
*variablenode_ns_1_i_8460_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8460_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing X-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8460),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8460_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8460)
);
}

/* AaxislLoad - ns=1;i=8487 */

static UA_StatusCode function_machine_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8487_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8487_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8487_variant_DataContents);
*variablenode_ns_1_i_8487_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8487_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxislLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description axial load A");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8487),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxislLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8487_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8487)
);
}

/* BaxisMachineToolActualCoordinateValue - ns=1;i=8470 */

static UA_StatusCode function_machine_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8470_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8470_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8470_variant_DataContents);
*variablenode_ns_1_i_8470_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8470_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of B-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8470),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8470_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8470)
);
}

/* AaxisResidual - ns=1;i=8475 */

static UA_StatusCode function_machine_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8475_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8475_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8475_variant_DataContents);
*variablenode_ns_1_i_8475_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8475_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the A-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8475),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8475_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8475)
);
}

/* CaxisUserCoordinatesProgrammingValue - ns=1;i=8453 */

static UA_StatusCode function_machine_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8453_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8453_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8453_variant_DataContents);
*variablenode_ns_1_i_8453_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8453_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the C axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8453),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8453_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8453)
);
}

/* AaxisUserCoordinatesProgrammingValue - ns=1;i=8451 */

static UA_StatusCode function_machine_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8451_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8451_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8451_variant_DataContents);
*variablenode_ns_1_i_8451_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8451_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the A axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8451),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8451_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8451)
);
}

/* ZaxisUserCoordinatesProgrammingValue - ns=1;i=8450 */

static UA_StatusCode function_machine_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8450_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8450_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8450_variant_DataContents);
*variablenode_ns_1_i_8450_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8450_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the Z axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8450),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8450_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8450)
);
}

/* CaxislLoad - ns=1;i=8489 */

static UA_StatusCode function_machine_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8489_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8489_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8489_variant_DataContents);
*variablenode_ns_1_i_8489_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8489_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxislLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description axial load C");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8489),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxislLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8489_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8489)
);
}

/* CaxisBacklash - ns=1;i=8483 */

static UA_StatusCode function_machine_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8483_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8483_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8483_variant_DataContents);
*variablenode_ns_1_i_8483_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8483_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe C-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8483),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8483_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8483)
);
}

/* AaxisUserCoordinatesActualValue - ns=1;i=8457 */

static UA_StatusCode function_machine_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8457_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8457_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8457_variant_DataContents);
*variablenode_ns_1_i_8457_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8457_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the A axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8457),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8457_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8457)
);
}

/* CaxisMachineToolCoordinateTheoryValue - ns=1;i=8465 */

static UA_StatusCode function_machine_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8465_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8465_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8465_variant_DataContents);
*variablenode_ns_1_i_8465_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8465_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing C-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8465),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8465_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8465)
);
}

/* BaxisResidual - ns=1;i=8476 */

static UA_StatusCode function_machine_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8476_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8476_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8476_variant_DataContents);
*variablenode_ns_1_i_8476_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8476_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisResidual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the remainder of the B-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8476),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisResidual"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8476_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8476)
);
}

/* YaxisLoad - ns=1;i=8485 */

static UA_StatusCode function_machine_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8485_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8485_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8485_variant_DataContents);
*variablenode_ns_1_i_8485_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8485_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisLoad");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing Y-axis load");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8485),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisLoad"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8485_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8485)
);
}

/* XaxisBacklash - ns=1;i=8478 */

static UA_StatusCode function_machine_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8478_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8478_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8478_variant_DataContents);
*variablenode_ns_1_i_8478_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8478_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe X-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8478),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8478_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8478)
);
}

/* BaxisUserCoordinatesActualValue - ns=1;i=8458 */

static UA_StatusCode function_machine_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8458_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8458_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8458_variant_DataContents);
*variablenode_ns_1_i_8458_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8458_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisUserCoordinatesActualValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of the user coordinates on the B axi");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8458),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisUserCoordinatesActualValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8458_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8458)
);
}

/* CouplingAxisIdentifier - ns=1;i=8495 */

static UA_StatusCode function_machine_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_8495_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_8495_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_8495_variant_DataContents);
*variablenode_ns_1_i_8495_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8495_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "CouplingAxisIdentifier");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of coupling axis identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8495),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CouplingAxisIdentifier"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_8495_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8495)
);
}

/* YaxisMachineToolActualCoordinateValue - ns=1;i=8467 */

static UA_StatusCode function_machine_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8467_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8467_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8467_variant_DataContents);
*variablenode_ns_1_i_8467_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8467_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of Y-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8467),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8467_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8467)
);
}

/* YaxisMachineToolCoordinateTheoryValue - ns=1;i=8461 */

static UA_StatusCode function_machine_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8461_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8461_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8461_variant_DataContents);
*variablenode_ns_1_i_8461_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8461_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing Y-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8461),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8461_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8461)
);
}

/* AaxisBacklash - ns=1;i=8481 */

static UA_StatusCode function_machine_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8481_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8481_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8481_variant_DataContents);
*variablenode_ns_1_i_8481_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8481_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "AaxisBacklash");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe A-axis backlash");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8481),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AaxisBacklash"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8481_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8481)
);
}

/* BaxisMachineToolCoordinateTheoryValue - ns=1;i=8464 */

static UA_StatusCode function_machine_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8464_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8464_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8464_variant_DataContents);
*variablenode_ns_1_i_8464_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8464_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "BaxisMachineToolCoordinateTheoryValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Theoretical value of machine tool coordinates describing B-axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8464),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "BaxisMachineToolCoordinateTheoryValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8464_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8464)
);
}

/* XaxisMachineToolActualCoordinateValue - ns=1;i=8466 */

static UA_StatusCode function_machine_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8466_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8466_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8466_variant_DataContents);
*variablenode_ns_1_i_8466_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8466_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "XaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of X-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8466),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "XaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8466_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8466)
);
}

/* ZaxisMachineToolActualCoordinateValue - ns=1;i=8468 */

static UA_StatusCode function_machine_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8468_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8468_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8468_variant_DataContents);
*variablenode_ns_1_i_8468_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8468_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ZaxisMachineToolActualCoordinateValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual value of Z-axis machine tool coordinates");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8468),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ZaxisMachineToolActualCoordinateValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8468_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8468)
);
}

/* YaxisUserCoordinatesProgrammingValue - ns=1;i=8449 */

static UA_StatusCode function_machine_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_8449_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_8449_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_8449_variant_DataContents);
*variablenode_ns_1_i_8449_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_8449_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "YaxisUserCoordinatesProgrammingValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the user coordinates programming values for the Y axis");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 8449),
UA_NODEID_NUMERIC(ns[1], 12221),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "YaxisUserCoordinatesProgrammingValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_8449_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 8449)
);
}

/* IODeviceComponent - ns=1;i=123000 */

static UA_StatusCode function_machine_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "I/ODeviceComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 123000),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "IODeviceComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 123000)
);
}

/* IODeviceStaticAttribute - ns=1;i=123100 */

static UA_StatusCode function_machine_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceStaticAttribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "I/ODeviceStaticAttributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[1], 123000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "IODeviceStaticAttribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 123100)
);
}

/* OutputANumericAddress - ns=1;i=12298 */

static UA_StatusCode function_machine_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12298_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12298_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12298_variant_DataContents);
*variablenode_ns_1_i_12298_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12298_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputNumericAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output numeric address");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12298),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputNumericAddress"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12298_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12298)
);
}

/* InputAnalogAddress - ns=1;i=12299 */

static UA_StatusCode function_machine_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12299_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12299_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12299_variant_DataContents);
*variablenode_ns_1_i_12299_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12299_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputAnalogAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input analog address");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12299),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputAnalogAddress"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12299_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12299)
);
}

/* IODeviceManufacturerName - ns=1;i=12290 */

static UA_StatusCode function_machine_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12290_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12290_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12290_variant_DataContents);
*variablenode_ns_1_i_12290_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12290_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceManufacturerName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of I/O device manufacturer name");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12290),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IODeviceManufacturerName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12290_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12290)
);
}

/* InputNumericAddress - ns=1;i=12297 */

static UA_StatusCode function_machine_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12297_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12297_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12297_variant_DataContents);
*variablenode_ns_1_i_12297_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12297_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputNumericAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input numeric address");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12297),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputNumericAddress"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12297_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12297)
);
}

/* OutputAnalogAddress - ns=1;i=12300 */

static UA_StatusCode function_machine_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12300_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12300_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12300_variant_DataContents);
*variablenode_ns_1_i_12300_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12300_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputAnalogAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output analog address");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12300),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputAnalogAddress"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12300_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12300)
);
}

/* OutputDigitalPoints - ns=1;i=12294 */

static UA_StatusCode function_machine_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12294_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12294_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12294_variant_DataContents);
*variablenode_ns_1_i_12294_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12294_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputDigitalPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output digital points");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12294),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputDigitalPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12294_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12294)
);
}

/* OutputAnalogPoints - ns=1;i=12296 */

static UA_StatusCode function_machine_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12296_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12296_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12296_variant_DataContents);
*variablenode_ns_1_i_12296_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12296_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputAnalogPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output analog points");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12296),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputAnalogPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12296_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12296)
);
}

/* IODeviceID - ns=1;i=12289 */

static UA_StatusCode function_machine_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12289_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12289_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12289_variant_DataContents);
*variablenode_ns_1_i_12289_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12289_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceID");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of I/O device identification");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12289),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IODeviceID"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12289_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12289)
);
}

/* CommunicationMethod - ns=1;i=12292 */

static UA_StatusCode function_machine_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_12292_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_12292_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_12292_variant_DataContents);
*variablenode_ns_1_i_12292_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12292_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CommunicationMethod");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of Method of communication");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12292),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CommunicationMethod"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_12292_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12292)
);
}

/* InputAnalogPoints - ns=1;i=12295 */

static UA_StatusCode function_machine_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12295_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12295_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12295_variant_DataContents);
*variablenode_ns_1_i_12295_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12295_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputAnalogPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input analog points");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12295),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputAnalogPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12295_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12295)
);
}

/* IODeviceManufacturerId - ns=1;i=12291 */

static UA_StatusCode function_machine_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_12291_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_12291_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_12291_variant_DataContents);
*variablenode_ns_1_i_12291_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12291_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceManufacturerId");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of I/O device manufacturer id");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12291),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IODeviceManufacturerId"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_12291_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12291)
);
}

/* InputDgitalPoints - ns=1;i=12293 */

static UA_StatusCode function_machine_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12293_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12293_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12293_variant_DataContents);
*variablenode_ns_1_i_12293_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12293_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputDgitalPoints");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input digital points");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12293),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputDgitalPoints"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12293_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12293)
);
}

/* IODeviceType - ns=1;i=12288 */

static UA_StatusCode function_machine_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_12288_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_12288_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_12288_variant_DataContents);
*variablenode_ns_1_i_12288_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12288_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "IODeviceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of equipment type");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12288),
UA_NODEID_NUMERIC(ns[1], 123100),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "IODeviceType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_12288_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12288)
);
}

/* IODataInfo - ns=1;i=123200 */

static UA_StatusCode function_machine_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IODataInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "I/ODataInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[1], 123000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "IODataInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 123200)
);
}

/* InputDigitalPointValue - ns=1;i=12301 */

static UA_StatusCode function_machine_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 2);
UA_SByte *variablenode_ns_1_i_12301_variant_DataContents =  UA_SByte_new();
if (!variablenode_ns_1_i_12301_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_SByte_init(variablenode_ns_1_i_12301_variant_DataContents);
*variablenode_ns_1_i_12301_variant_DataContents = (UA_SByte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12301_variant_DataContents, &UA_TYPES[UA_TYPES_SBYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputDigitalPointValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input digital point value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12301),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputDigitalPointValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_SByte_delete(variablenode_ns_1_i_12301_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12301)
);
}

/* OutputAnalogRange - ns=1;i=12306 */

static UA_StatusCode function_machine_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12306_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12306_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12306_variant_DataContents);
*variablenode_ns_1_i_12306_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12306_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputAnalogRange");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output analog value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12306),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputAnalogRange"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12306_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12306)
);
}

/* OutputDigitalPointValue - ns=1;i=12302 */

static UA_StatusCode function_machine_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 2);
UA_SByte *variablenode_ns_1_i_12302_variant_DataContents =  UA_SByte_new();
if (!variablenode_ns_1_i_12302_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_SByte_init(variablenode_ns_1_i_12302_variant_DataContents);
*variablenode_ns_1_i_12302_variant_DataContents = (UA_SByte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12302_variant_DataContents, &UA_TYPES[UA_TYPES_SBYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputDigitalPointValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output digital point value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12302),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputDigitalPointValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_SByte_delete(variablenode_ns_1_i_12302_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12302)
);
}

/* RefreshCycle - ns=1;i=12307 */

static UA_StatusCode function_machine_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_12307_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_12307_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_12307_variant_DataContents);
*variablenode_ns_1_i_12307_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12307_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "RefreshCycle");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of refresh cycle");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12307),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RefreshCycle"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_12307_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12307)
);
}

/* InputAnalogValue - ns=1;i=12303 */

static UA_StatusCode function_machine_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 2);
UA_SByte *variablenode_ns_1_i_12303_variant_DataContents =  UA_SByte_new();
if (!variablenode_ns_1_i_12303_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_SByte_init(variablenode_ns_1_i_12303_variant_DataContents);
*variablenode_ns_1_i_12303_variant_DataContents = (UA_SByte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12303_variant_DataContents, &UA_TYPES[UA_TYPES_SBYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputAnalogValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input analog value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12303),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputAnalogValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_SByte_delete(variablenode_ns_1_i_12303_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12303)
);
}

/* OutputAnalogValue - ns=1;i=12304 */

static UA_StatusCode function_machine_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 2);
UA_SByte *variablenode_ns_1_i_12304_variant_DataContents =  UA_SByte_new();
if (!variablenode_ns_1_i_12304_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_SByte_init(variablenode_ns_1_i_12304_variant_DataContents);
*variablenode_ns_1_i_12304_variant_DataContents = (UA_SByte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12304_variant_DataContents, &UA_TYPES[UA_TYPES_SBYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputAnalogValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of output analog value");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12304),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OutputAnalogValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_SByte_delete(variablenode_ns_1_i_12304_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12304)
);
}

/* InputAnalogRange - ns=1;i=12305 */

static UA_StatusCode function_machine_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6);
UA_Int32 *variablenode_ns_1_i_12305_variant_DataContents =  UA_Int32_new();
if (!variablenode_ns_1_i_12305_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Int32_init(variablenode_ns_1_i_12305_variant_DataContents);
*variablenode_ns_1_i_12305_variant_DataContents = (UA_Int32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_12305_variant_DataContents, &UA_TYPES[UA_TYPES_INT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputAnalogRange");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of input analog range");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 12305),
UA_NODEID_NUMERIC(ns[1], 123200),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "InputAnalogRange"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Int32_delete(variablenode_ns_1_i_12305_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12305)
);
}

/* CNCDeviceComponect - ns=1;i=12100 */

static UA_StatusCode function_machine_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CNCDeviceComponect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNCDeviceComponectSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12100),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CNCDeviceComponect"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12100)
);
}

/* CNCProgramComponect - ns=1;i=12110 */

static UA_StatusCode function_machine_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CNCProgramComponect");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNCProgramComponectSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12110),
UA_NODEID_NUMERIC(ns[1], 12100),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CNCProgramComponect"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12110)
);
}

/* CNCPogramProcessAtrribute - ns=1;i=12111 */

static UA_StatusCode function_machine_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CNCPogramProcessAtrribute");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CNCPogramProcessAtrributeSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[1], 12110),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CNCPogramProcessAtrribute"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12111)
);
}

/* MainProgramName - ns=1;i=4096 */

static UA_StatusCode function_machine_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4096_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4096_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4096_variant_DataContents);
*variablenode_ns_1_i_4096_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4096_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MainProgramName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the main program name currently running");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4096),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MainProgramName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4096_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4096)
);
}

/* DiameterProgrammingIdentifier - ns=1;i=4106 */

static UA_StatusCode function_machine_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4106_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4106_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4106_variant_DataContents);
*variablenode_ns_1_i_4106_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4106_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "DiameterProgrammingIdentifier");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the diameter programming identification of NC program");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4106),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DiameterProgrammingIdentifier"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4106_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4106)
);
}

/* ProgramRunningTime - ns=1;i=4101 */

static UA_StatusCode function_machine_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4101_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4101_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4101_variant_DataContents);
*variablenode_ns_1_i_4101_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4101_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramRunningTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the running time of the current program");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4101),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramRunningTime"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4101)
);
}

/* ProgramSublevelNumber - ns=1;i=4099 */

static UA_StatusCode function_machine_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_4099_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_4099_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_4099_variant_DataContents);
*variablenode_ns_1_i_4099_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4099_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramSublevelNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the number of sub layers of the current program");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4099),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramSublevelNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_4099_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4099)
);
}

/* RestartLineNumbe - ns=1;i=4107 */

static UA_StatusCode function_machine_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4107_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4107_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4107_variant_DataContents);
*variablenode_ns_1_i_4107_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4107_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "RestartLineNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the restart line number of a NC program");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4107),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RestartLineNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4107_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4107)
);
}

/* SubroutineName - ns=1;i=4097 */

static UA_StatusCode function_machine_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4097_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4097_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4097_variant_DataContents);
*variablenode_ns_1_i_4097_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4097_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "SubroutineName");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the subroutine name currently running");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4097),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SubroutineName"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4097_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4097)
);
}

/* ExecutiveProgramCurrentLineNumber - ns=1;i=4100 */

static UA_StatusCode function_machine_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4100_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4100_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4100_variant_DataContents);
*variablenode_ns_1_i_4100_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4100_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutiveProgramCurrentLineNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the line number of the current execution program");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4100),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ExecutiveProgramCurrentLineNumber"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4100_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4100)
);
}

/* ExecutionBlock - ns=1;i=4102 */

static UA_StatusCode function_machine_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4102_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4102_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4102_variant_DataContents);
*variablenode_ns_1_i_4102_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4102_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramExecutionBlock");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the blocks currently executed");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4102),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramExecutionBlock"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4102)
);
}

/* NumberOfCompletedWorkpieces - ns=1;i=4103 */

static UA_StatusCode function_machine_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_4103_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_4103_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_4103_variant_DataContents);
*variablenode_ns_1_i_4103_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4103_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "NumberOfCompletedWorkpieces");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing the number of finished jobs");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4103),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "NumberOfCompletedWorkpieces"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_4103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4103)
);
}

/* GCode - ns=1;i=4104 */

static UA_StatusCode function_machine_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4104_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4104_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4104_variant_DataContents);
*variablenode_ns_1_i_4104_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4104_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "GCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the G code currently executed");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4104),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "GCode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4104_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4104)
);
}

/* ProgramNameDisplay - ns=1;i=4098 */

static UA_StatusCode function_machine_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4098_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4098_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4098_variant_DataContents);
*variablenode_ns_1_i_4098_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4098_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ProgramNameDisplay");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the name of the program currently displayed");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4098),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ProgramNameDisplay"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4098_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4098)
);
}

/* MCode - ns=1;i=4105 */

static UA_StatusCode function_machine_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_4105_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_4105_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_4105_variant_DataContents);
*variablenode_ns_1_i_4105_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_4105_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describes the M code currently executed");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 4105),
UA_NODEID_NUMERIC(ns[1], 12111),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MCode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_4105_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4105)
);
}

/* AssistantSystemComponent - ns=1;i=12500 */

static UA_StatusCode function_machine_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AssistantSystemComponent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AssistantSystemComponentSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[1], 12000),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "AssistantSystemComponent"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12500)
);
}

/* LubricationSystemDataInfo - ns=1;i=12540 */

static UA_StatusCode function_machine_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LubricationSystemDataInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "LubricationSystemDataInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "LubricationSystemDataInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12540)
);
}

/* MaxLubricationPointDistance - ns=1;i=20507 */

static UA_StatusCode function_machine_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20507_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20507_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20507_variant_DataContents);
*variablenode_ns_1_i_20507_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20507_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxLubricationPointDistance");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the farthest lubrication point distance of hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20507),
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MaxLubricationPointDistance"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20507_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20507)
);
}

/* ActualOperatingCycle - ns=1;i=20504 */

static UA_StatusCode function_machine_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_20504_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_20504_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_20504_variant_DataContents);
*variablenode_ns_1_i_20504_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20504_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualOperatingCycle");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual operating period of the lubrication system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20504),
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActualOperatingCycle"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_20504_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20504)
);
}

/* MinLubricationPeriod - ns=1;i=20505 */

static UA_StatusCode function_machine_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_20505_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_20505_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_20505_variant_DataContents);
*variablenode_ns_1_i_20505_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20505_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinLubricationPeriod");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describing the Minimum Lubricating Period");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20505),
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MinLubricationPeriod"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_20505_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20505)
);
}

/* TankCapacity - ns=1;i=20506 */

static UA_StatusCode function_machine_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_20506_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_20506_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_20506_variant_DataContents);
*variablenode_ns_1_i_20506_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20506_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TankCapacity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the tank volume of the lubricating system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20506),
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TankCapacity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_20506_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20506)
);
}

/* ActualFuelSupply - ns=1;i=20503 */

static UA_StatusCode function_machine_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20503_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20503_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20503_variant_DataContents);
*variablenode_ns_1_i_20503_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20503_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualFuelSupply");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the actual fuel supply of the lubricating system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20503),
UA_NODEID_NUMERIC(ns[1], 12540),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ActualFuelSupply"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20503_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20503)
);
}

/* CoolingSystemDataInfo - ns=1;i=12510 */

static UA_StatusCode function_machine_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CoolingSystemDataInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CoolingSystemDataInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "CoolingSystemDataInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12510)
);
}

/* CoolingMode - ns=1;i=20486 */

static UA_StatusCode function_machine_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20486_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20486_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20486_variant_DataContents);
*variablenode_ns_1_i_20486_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20486_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CoolingMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the cooling mode of the cooling system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20486),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CoolingMode"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20486_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20486)
);
}

/* CoolantFlowRate - ns=1;i=20485 */

static UA_StatusCode function_machine_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20485_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20485_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20485_variant_DataContents);
*variablenode_ns_1_i_20485_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20485_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "CoolantFlowRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the flow of coolant");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20485),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "CoolantFlowRate"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20485_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20485)
);
}

/* FlowResistance - ns=1;i=20483 */

static UA_StatusCode function_machine_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20483_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20483_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20483_variant_DataContents);
*variablenode_ns_1_i_20483_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20483_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "FlowResistance");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the flow resistance of the cooling system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20483),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "FlowResistance"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20483_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20483)
);
}

/* MotorPowerOfCoolingPump - ns=1;i=20484 */

static UA_StatusCode function_machine_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20484_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20484_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20484_variant_DataContents);
*variablenode_ns_1_i_20484_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20484_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorPowerOfCoolingPump");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe motor power of cooling pump");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20484),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MotorPowerOfCoolingPump"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20484_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20484)
);
}

/* DisplacementValue - ns=1;i=20482 */

static UA_StatusCode function_machine_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20482_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20482_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20482_variant_DataContents);
*variablenode_ns_1_i_20482_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20482_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "DisplacementValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The state of the fixture that describes the position of the cooling system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20482),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "DisplacementValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20482_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20482)
);
}

/* TemperatureValue - ns=1;i=20480 */

static UA_StatusCode function_machine_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20480_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20480_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20480_variant_DataContents);
*variablenode_ns_1_i_20480_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20480_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "TemperatureValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the temperature of the cooling system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20480),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TemperatureValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20480_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20480)
);
}

/* PressureValue - ns=1;i=20481 */

static UA_StatusCode function_machine_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20481_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20481_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20481_variant_DataContents);
*variablenode_ns_1_i_20481_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20481_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressureValue");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the pressure of the cooling system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20481),
UA_NODEID_NUMERIC(ns[1], 12510),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PressureValue"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20481_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20481)
);
}

/* HydraulicSystemDataInfo - ns=1;i=12520 */

static UA_StatusCode function_machine_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "HydraulicSystemDataInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HydraulicSystemDataInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "HydraulicSystemDataInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12520)
);
}

/* RatedOperatingPressure - ns=1;i=20491 */

static UA_StatusCode function_machine_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20491_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20491_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20491_variant_DataContents);
*variablenode_ns_1_i_20491_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20491_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RatedOperatingPressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the rated working pressure of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20491),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RatedOperatingPressure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20491_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20491)
);
}

/* MinSteadyFlow - ns=1;i=20494 */

static UA_StatusCode function_machine_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20494_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20494_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20494_variant_DataContents);
*variablenode_ns_1_i_20494_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20494_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MinSteadyFlow");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the minimum steady flow of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20494),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MinSteadyFlow"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20494_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20494)
);
}

/* RatedFlow - ns=1;i=20493 */

static UA_StatusCode function_machine_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20493_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20493_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20493_variant_DataContents);
*variablenode_ns_1_i_20493_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20493_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "RatedFlow");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the rated flow rate of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20493),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "RatedFlow"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20493_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20493)
);
}

/* HydraulicPumpCondition - ns=1;i=20487 */

static UA_StatusCode function_machine_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20487_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20487_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20487_variant_DataContents);
*variablenode_ns_1_i_20487_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20487_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HydraulicPumpCondition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the current state of the hydraulic pump");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20487),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "HydraulicPumpCondition"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20487_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20487)
);
}

/* HydraulicSolenoidValve - ns=1;i=20489 */

static UA_StatusCode function_machine_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20489_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20489_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20489_variant_DataContents);
*variablenode_ns_1_i_20489_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20489_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HydraulicSolenoidValve");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the state of hydraulic solenoid valve");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20489),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "HydraulicSolenoidValve"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20489_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20489)
);
}

/* MaxWorkingPressure - ns=1;i=20490 */

static UA_StatusCode function_machine_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20490_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20490_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20490_variant_DataContents);
*variablenode_ns_1_i_20490_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20490_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxWorkingPressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the maximum working pressure of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20490),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MaxWorkingPressure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20490_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20490)
);
}

/* HydraulicMotorCondition - ns=1;i=20488 */

static UA_StatusCode function_machine_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20488_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20488_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20488_variant_DataContents);
*variablenode_ns_1_i_20488_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20488_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HydraulicMotorCondition");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the state of a hydraulic motor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20488),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "HydraulicMotorCondition"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20488_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20488)
);
}

/* SystemLeakage - ns=1;i=20496 */

static UA_StatusCode function_machine_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20496_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20496_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20496_variant_DataContents);
*variablenode_ns_1_i_20496_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20496_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "SystemLeakage");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the leakage of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20496),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "SystemLeakage"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20496_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20496)
);
}

/* MaximumFlow - ns=1;i=20492 */

static UA_StatusCode function_machine_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20492_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20492_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20492_variant_DataContents);
*variablenode_ns_1_i_20492_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20492_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MaximumFlow");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the maximum flow rate of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20492),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MaximumFlow"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20492_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20492)
);
}

/* OperatingTemperature - ns=1;i=20495 */

static UA_StatusCode function_machine_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20495_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20495_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20495_variant_DataContents);
*variablenode_ns_1_i_20495_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20495_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OperatingTemperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the operating temperature of the hydraulic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20495),
UA_NODEID_NUMERIC(ns[1], 12520),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "OperatingTemperature"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20495_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20495)
);
}

/* ChipRemovalSystemDataInfo - ns=1;i=12550 */

static UA_StatusCode function_machine_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ChipRemovalSystemDataInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ChipRemovalSystemDataInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "ChipRemovalSystemDataInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12550)
);
}

/* TransmissionSystemType - ns=1;i=20509 */

static UA_StatusCode function_machine_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20509_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20509_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20509_variant_DataContents);
*variablenode_ns_1_i_20509_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20509_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransmissionSystemType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the types of drives for chip removal devices");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20509),
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "TransmissionSystemType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20509_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20509)
);
}

/* MotorTransmissionRatio - ns=1;i=20512 */

static UA_StatusCode function_machine_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20512_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20512_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20512_variant_DataContents);
*variablenode_ns_1_i_20512_variant_DataContents = (UA_Float) 9.99;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20512_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorTransmissionRatio");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the ratio of the instantaneous input speed to the output speed of a chip-removing motor");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20512),
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MotorTransmissionRatio"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20512_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20512)
);
}

/* MotorPower - ns=1;i=20511 */

static UA_StatusCode function_machine_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7);
UA_UInt32 *variablenode_ns_1_i_20511_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_20511_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_20511_variant_DataContents);
*variablenode_ns_1_i_20511_variant_DataContents = (UA_UInt32) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20511_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the maximum power that can operate normally over a long period of time at the rated voltage of the motor for the chip removal device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20511),
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MotorPower"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_20511_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20511)
);
}

/* MotorModel - ns=1;i=20510 */

static UA_StatusCode function_machine_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12);
UA_String *variablenode_ns_1_i_20510_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_20510_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_20510_variant_DataContents);
*variablenode_ns_1_i_20510_variant_DataContents = UA_STRING_ALLOC("XXYY");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20510_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "MotorModel");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Description of motor models for chip removal devices");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20510),
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "MotorModel"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_20510_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20510)
);
}

/* ChipRemovalDeviceType - ns=1;i=20508 */

static UA_StatusCode function_machine_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20508_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20508_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20508_variant_DataContents);
*variablenode_ns_1_i_20508_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20508_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ChipRemovalDeviceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the type of row cutter");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20508),
UA_NODEID_NUMERIC(ns[1], 12550),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ChipRemovalDeviceType"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20508_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20508)
);
}

/* PneumaticSystemInfo - ns=1;i=12530 */

static UA_StatusCode function_machine_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PneumaticSystemInfo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PneumaticSystemInfoSet");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[1], 12500),
UA_NODEID_NUMERIC(ns[0], 35),
UA_QUALIFIEDNAME(ns[1], "PneumaticSystemInfo"),
UA_NODEID_NUMERIC(ns[0], 61),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_machine_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 12530)
);
}

/* Velocity - ns=1;i=20500 */

static UA_StatusCode function_machine_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20500_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20500_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20500_variant_DataContents);
*variablenode_ns_1_i_20500_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20500_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "Velocity");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the speed of a pneumatic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20500),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "Velocity"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20500_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20500)
);
}

/* ElectromagneticValve - ns=1;i=20502 */

static UA_StatusCode function_machine_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20502_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20502_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20502_variant_DataContents);
*variablenode_ns_1_i_20502_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20502_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ElectromagneticValve");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the working state of solenoid valve");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20502),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "ElectromagneticValve"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20502_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20502)
);
}

/* GasSupplyPressure - ns=1;i=20498 */

static UA_StatusCode function_machine_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20498_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20498_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20498_variant_DataContents);
*variablenode_ns_1_i_20498_variant_DataContents = (UA_Float) 20498.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20498_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "GasSupplyPressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the supply pressure of a pneumatic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20498),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "GasSupplyPressure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20498_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20498)
);
}

/* PressureReducingValve - ns=1;i=20501 */

static UA_StatusCode function_machine_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20501_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20501_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20501_variant_DataContents);
*variablenode_ns_1_i_20501_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20501_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressureReducingValve");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the working state of the pressure relief valve");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20501),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "PressureReducingValve"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20501_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20501)
);
}

/* WorkingPressure - ns=1;i=20499 */

static UA_StatusCode function_machine_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10);
UA_Float *variablenode_ns_1_i_20499_variant_DataContents =  UA_Float_new();
if (!variablenode_ns_1_i_20499_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Float_init(variablenode_ns_1_i_20499_variant_DataContents);
*variablenode_ns_1_i_20499_variant_DataContents = (UA_Float) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20499_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
attr.displayName = UA_LOCALIZEDTEXT("", "WorkingPressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe working pressure of pneumatic system");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20499),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "WorkingPressure"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Float_delete(variablenode_ns_1_i_20499_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20499)
);
}

/* AerodynamicActiveState - ns=1;i=20497 */

static UA_StatusCode function_machine_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3);
UA_Byte *variablenode_ns_1_i_20497_variant_DataContents =  UA_Byte_new();
if (!variablenode_ns_1_i_20497_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Byte_init(variablenode_ns_1_i_20497_variant_DataContents);
*variablenode_ns_1_i_20497_variant_DataContents = (UA_Byte) 0;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_20497_variant_DataContents, &UA_TYPES[UA_TYPES_BYTE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AerodynamicActiveState");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Describe the active state of pneumatic systems");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 20497),
UA_NODEID_NUMERIC(ns[1], 12530),
UA_NODEID_NUMERIC(ns[0], 47),
UA_QUALIFIEDNAME(ns[1], "AerodynamicActiveState"),
UA_NODEID_NUMERIC(ns[0], 63),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Byte_delete(variablenode_ns_1_i_20497_variant_DataContents);
return retVal;
}

static UA_StatusCode function_machine_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20497)
);
}

UA_StatusCode machine(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "KNDServer");
bool dummy = (
!(retVal = function_machine_0_begin(server, ns)) &&
!(retVal = function_machine_1_begin(server, ns)) &&
!(retVal = function_machine_2_begin(server, ns)) &&
!(retVal = function_machine_3_begin(server, ns)) &&
!(retVal = function_machine_4_begin(server, ns)) &&
!(retVal = function_machine_5_begin(server, ns)) &&
!(retVal = function_machine_6_begin(server, ns)) &&
!(retVal = function_machine_7_begin(server, ns)) &&
!(retVal = function_machine_8_begin(server, ns)) &&
!(retVal = function_machine_9_begin(server, ns)) &&
!(retVal = function_machine_10_begin(server, ns)) &&
!(retVal = function_machine_11_begin(server, ns)) &&
!(retVal = function_machine_12_begin(server, ns)) &&
!(retVal = function_machine_13_begin(server, ns)) &&
!(retVal = function_machine_14_begin(server, ns)) &&
!(retVal = function_machine_15_begin(server, ns)) &&
!(retVal = function_machine_16_begin(server, ns)) &&
!(retVal = function_machine_17_begin(server, ns)) &&
!(retVal = function_machine_18_begin(server, ns)) &&
!(retVal = function_machine_19_begin(server, ns)) &&
!(retVal = function_machine_20_begin(server, ns)) &&
!(retVal = function_machine_21_begin(server, ns)) &&
!(retVal = function_machine_22_begin(server, ns)) &&
!(retVal = function_machine_23_begin(server, ns)) &&
!(retVal = function_machine_24_begin(server, ns)) &&
!(retVal = function_machine_25_begin(server, ns)) &&
!(retVal = function_machine_26_begin(server, ns)) &&
!(retVal = function_machine_27_begin(server, ns)) &&
!(retVal = function_machine_28_begin(server, ns)) &&
!(retVal = function_machine_29_begin(server, ns)) &&
!(retVal = function_machine_30_begin(server, ns)) &&
!(retVal = function_machine_31_begin(server, ns)) &&
!(retVal = function_machine_32_begin(server, ns)) &&
!(retVal = function_machine_33_begin(server, ns)) &&
!(retVal = function_machine_34_begin(server, ns)) &&
!(retVal = function_machine_35_begin(server, ns)) &&
!(retVal = function_machine_36_begin(server, ns)) &&
!(retVal = function_machine_37_begin(server, ns)) &&
!(retVal = function_machine_38_begin(server, ns)) &&
!(retVal = function_machine_39_begin(server, ns)) &&
!(retVal = function_machine_40_begin(server, ns)) &&
!(retVal = function_machine_41_begin(server, ns)) &&
!(retVal = function_machine_42_begin(server, ns)) &&
!(retVal = function_machine_43_begin(server, ns)) &&
!(retVal = function_machine_44_begin(server, ns)) &&
!(retVal = function_machine_45_begin(server, ns)) &&
!(retVal = function_machine_46_begin(server, ns)) &&
!(retVal = function_machine_47_begin(server, ns)) &&
!(retVal = function_machine_48_begin(server, ns)) &&
!(retVal = function_machine_49_begin(server, ns)) &&
!(retVal = function_machine_50_begin(server, ns)) &&
!(retVal = function_machine_51_begin(server, ns)) &&
!(retVal = function_machine_52_begin(server, ns)) &&
!(retVal = function_machine_53_begin(server, ns)) &&
!(retVal = function_machine_54_begin(server, ns)) &&
!(retVal = function_machine_55_begin(server, ns)) &&
!(retVal = function_machine_56_begin(server, ns)) &&
!(retVal = function_machine_57_begin(server, ns)) &&
!(retVal = function_machine_58_begin(server, ns)) &&
!(retVal = function_machine_59_begin(server, ns)) &&
!(retVal = function_machine_60_begin(server, ns)) &&
!(retVal = function_machine_61_begin(server, ns)) &&
!(retVal = function_machine_62_begin(server, ns)) &&
!(retVal = function_machine_63_begin(server, ns)) &&
!(retVal = function_machine_64_begin(server, ns)) &&
!(retVal = function_machine_65_begin(server, ns)) &&
!(retVal = function_machine_66_begin(server, ns)) &&
!(retVal = function_machine_67_begin(server, ns)) &&
!(retVal = function_machine_68_begin(server, ns)) &&
!(retVal = function_machine_69_begin(server, ns)) &&
!(retVal = function_machine_70_begin(server, ns)) &&
!(retVal = function_machine_71_begin(server, ns)) &&
!(retVal = function_machine_72_begin(server, ns)) &&
!(retVal = function_machine_73_begin(server, ns)) &&
!(retVal = function_machine_74_begin(server, ns)) &&
!(retVal = function_machine_75_begin(server, ns)) &&
!(retVal = function_machine_76_begin(server, ns)) &&
!(retVal = function_machine_77_begin(server, ns)) &&
!(retVal = function_machine_78_begin(server, ns)) &&
!(retVal = function_machine_79_begin(server, ns)) &&
!(retVal = function_machine_80_begin(server, ns)) &&
!(retVal = function_machine_81_begin(server, ns)) &&
!(retVal = function_machine_82_begin(server, ns)) &&
!(retVal = function_machine_83_begin(server, ns)) &&
!(retVal = function_machine_84_begin(server, ns)) &&
!(retVal = function_machine_85_begin(server, ns)) &&
!(retVal = function_machine_86_begin(server, ns)) &&
!(retVal = function_machine_87_begin(server, ns)) &&
!(retVal = function_machine_88_begin(server, ns)) &&
!(retVal = function_machine_89_begin(server, ns)) &&
!(retVal = function_machine_90_begin(server, ns)) &&
!(retVal = function_machine_91_begin(server, ns)) &&
!(retVal = function_machine_92_begin(server, ns)) &&
!(retVal = function_machine_93_begin(server, ns)) &&
!(retVal = function_machine_94_begin(server, ns)) &&
!(retVal = function_machine_95_begin(server, ns)) &&
!(retVal = function_machine_96_begin(server, ns)) &&
!(retVal = function_machine_97_begin(server, ns)) &&
!(retVal = function_machine_98_begin(server, ns)) &&
!(retVal = function_machine_99_begin(server, ns)) &&
!(retVal = function_machine_100_begin(server, ns)) &&
!(retVal = function_machine_101_begin(server, ns)) &&
!(retVal = function_machine_102_begin(server, ns)) &&
!(retVal = function_machine_103_begin(server, ns)) &&
!(retVal = function_machine_104_begin(server, ns)) &&
!(retVal = function_machine_105_begin(server, ns)) &&
!(retVal = function_machine_106_begin(server, ns)) &&
!(retVal = function_machine_107_begin(server, ns)) &&
!(retVal = function_machine_108_begin(server, ns)) &&
!(retVal = function_machine_109_begin(server, ns)) &&
!(retVal = function_machine_110_begin(server, ns)) &&
!(retVal = function_machine_111_begin(server, ns)) &&
!(retVal = function_machine_112_begin(server, ns)) &&
!(retVal = function_machine_113_begin(server, ns)) &&
!(retVal = function_machine_114_begin(server, ns)) &&
!(retVal = function_machine_115_begin(server, ns)) &&
!(retVal = function_machine_116_begin(server, ns)) &&
!(retVal = function_machine_117_begin(server, ns)) &&
!(retVal = function_machine_118_begin(server, ns)) &&
!(retVal = function_machine_119_begin(server, ns)) &&
!(retVal = function_machine_120_begin(server, ns)) &&
!(retVal = function_machine_121_begin(server, ns)) &&
!(retVal = function_machine_122_begin(server, ns)) &&
!(retVal = function_machine_123_begin(server, ns)) &&
!(retVal = function_machine_124_begin(server, ns)) &&
!(retVal = function_machine_125_begin(server, ns)) &&
!(retVal = function_machine_126_begin(server, ns)) &&
!(retVal = function_machine_127_begin(server, ns)) &&
!(retVal = function_machine_128_begin(server, ns)) &&
!(retVal = function_machine_129_begin(server, ns)) &&
!(retVal = function_machine_130_begin(server, ns)) &&
!(retVal = function_machine_131_begin(server, ns)) &&
!(retVal = function_machine_132_begin(server, ns)) &&
!(retVal = function_machine_133_begin(server, ns)) &&
!(retVal = function_machine_134_begin(server, ns)) &&
!(retVal = function_machine_135_begin(server, ns)) &&
!(retVal = function_machine_136_begin(server, ns)) &&
!(retVal = function_machine_137_begin(server, ns)) &&
!(retVal = function_machine_138_begin(server, ns)) &&
!(retVal = function_machine_139_begin(server, ns)) &&
!(retVal = function_machine_140_begin(server, ns)) &&
!(retVal = function_machine_141_begin(server, ns)) &&
!(retVal = function_machine_142_begin(server, ns)) &&
!(retVal = function_machine_143_begin(server, ns)) &&
!(retVal = function_machine_144_begin(server, ns)) &&
!(retVal = function_machine_145_begin(server, ns)) &&
!(retVal = function_machine_146_begin(server, ns)) &&
!(retVal = function_machine_147_begin(server, ns)) &&
!(retVal = function_machine_148_begin(server, ns)) &&
!(retVal = function_machine_149_begin(server, ns)) &&
!(retVal = function_machine_150_begin(server, ns)) &&
!(retVal = function_machine_151_begin(server, ns)) &&
!(retVal = function_machine_152_begin(server, ns)) &&
!(retVal = function_machine_153_begin(server, ns)) &&
!(retVal = function_machine_154_begin(server, ns)) &&
!(retVal = function_machine_155_begin(server, ns)) &&
!(retVal = function_machine_156_begin(server, ns)) &&
!(retVal = function_machine_157_begin(server, ns)) &&
!(retVal = function_machine_158_begin(server, ns)) &&
!(retVal = function_machine_159_begin(server, ns)) &&
!(retVal = function_machine_160_begin(server, ns)) &&
!(retVal = function_machine_161_begin(server, ns)) &&
!(retVal = function_machine_162_begin(server, ns)) &&
!(retVal = function_machine_163_begin(server, ns)) &&
!(retVal = function_machine_164_begin(server, ns)) &&
!(retVal = function_machine_165_begin(server, ns)) &&
!(retVal = function_machine_166_begin(server, ns)) &&
!(retVal = function_machine_167_begin(server, ns)) &&
!(retVal = function_machine_168_begin(server, ns)) &&
!(retVal = function_machine_169_begin(server, ns)) &&
!(retVal = function_machine_170_begin(server, ns)) &&
!(retVal = function_machine_171_begin(server, ns)) &&
!(retVal = function_machine_172_begin(server, ns)) &&
!(retVal = function_machine_173_begin(server, ns)) &&
!(retVal = function_machine_174_begin(server, ns)) &&
!(retVal = function_machine_175_begin(server, ns)) &&
!(retVal = function_machine_176_begin(server, ns)) &&
!(retVal = function_machine_177_begin(server, ns)) &&
!(retVal = function_machine_178_begin(server, ns)) &&
!(retVal = function_machine_179_begin(server, ns)) &&
!(retVal = function_machine_180_begin(server, ns)) &&
!(retVal = function_machine_181_begin(server, ns)) &&
!(retVal = function_machine_182_begin(server, ns)) &&
!(retVal = function_machine_183_begin(server, ns)) &&
!(retVal = function_machine_184_begin(server, ns)) &&
!(retVal = function_machine_185_begin(server, ns)) &&
!(retVal = function_machine_186_begin(server, ns)) &&
!(retVal = function_machine_187_begin(server, ns)) &&
!(retVal = function_machine_188_begin(server, ns)) &&
!(retVal = function_machine_189_begin(server, ns)) &&
!(retVal = function_machine_190_begin(server, ns)) &&
!(retVal = function_machine_191_begin(server, ns)) &&
!(retVal = function_machine_192_begin(server, ns)) &&
!(retVal = function_machine_193_begin(server, ns)) &&
!(retVal = function_machine_194_begin(server, ns)) &&
!(retVal = function_machine_195_begin(server, ns)) &&
!(retVal = function_machine_196_begin(server, ns)) &&
!(retVal = function_machine_197_begin(server, ns)) &&
!(retVal = function_machine_198_begin(server, ns)) &&
!(retVal = function_machine_199_begin(server, ns)) &&
!(retVal = function_machine_200_begin(server, ns)) &&
!(retVal = function_machine_201_begin(server, ns)) &&
!(retVal = function_machine_202_begin(server, ns)) &&
!(retVal = function_machine_203_begin(server, ns)) &&
!(retVal = function_machine_204_begin(server, ns)) &&
!(retVal = function_machine_205_begin(server, ns)) &&
!(retVal = function_machine_206_begin(server, ns)) &&
!(retVal = function_machine_207_begin(server, ns)) &&
!(retVal = function_machine_208_begin(server, ns)) &&
!(retVal = function_machine_209_begin(server, ns)) &&
!(retVal = function_machine_210_begin(server, ns)) &&
!(retVal = function_machine_211_begin(server, ns)) &&
!(retVal = function_machine_212_begin(server, ns)) &&
!(retVal = function_machine_213_begin(server, ns)) &&
!(retVal = function_machine_214_begin(server, ns)) &&
!(retVal = function_machine_215_begin(server, ns)) &&
!(retVal = function_machine_216_begin(server, ns)) &&
!(retVal = function_machine_217_begin(server, ns)) &&
!(retVal = function_machine_218_begin(server, ns)) &&
!(retVal = function_machine_219_begin(server, ns)) &&
!(retVal = function_machine_220_begin(server, ns)) &&
!(retVal = function_machine_221_begin(server, ns)) &&
!(retVal = function_machine_222_begin(server, ns)) &&
!(retVal = function_machine_223_begin(server, ns)) &&
!(retVal = function_machine_224_begin(server, ns)) &&
!(retVal = function_machine_225_begin(server, ns)) &&
!(retVal = function_machine_226_begin(server, ns)) &&
!(retVal = function_machine_227_begin(server, ns)) &&
!(retVal = function_machine_228_begin(server, ns)) &&
!(retVal = function_machine_229_begin(server, ns)) &&
!(retVal = function_machine_230_begin(server, ns)) &&
!(retVal = function_machine_231_begin(server, ns)) &&
!(retVal = function_machine_232_begin(server, ns)) &&
!(retVal = function_machine_232_finish(server, ns)) &&
!(retVal = function_machine_231_finish(server, ns)) &&
!(retVal = function_machine_230_finish(server, ns)) &&
!(retVal = function_machine_229_finish(server, ns)) &&
!(retVal = function_machine_228_finish(server, ns)) &&
!(retVal = function_machine_227_finish(server, ns)) &&
!(retVal = function_machine_226_finish(server, ns)) &&
!(retVal = function_machine_225_finish(server, ns)) &&
!(retVal = function_machine_224_finish(server, ns)) &&
!(retVal = function_machine_223_finish(server, ns)) &&
!(retVal = function_machine_222_finish(server, ns)) &&
!(retVal = function_machine_221_finish(server, ns)) &&
!(retVal = function_machine_220_finish(server, ns)) &&
!(retVal = function_machine_219_finish(server, ns)) &&
!(retVal = function_machine_218_finish(server, ns)) &&
!(retVal = function_machine_217_finish(server, ns)) &&
!(retVal = function_machine_216_finish(server, ns)) &&
!(retVal = function_machine_215_finish(server, ns)) &&
!(retVal = function_machine_214_finish(server, ns)) &&
!(retVal = function_machine_213_finish(server, ns)) &&
!(retVal = function_machine_212_finish(server, ns)) &&
!(retVal = function_machine_211_finish(server, ns)) &&
!(retVal = function_machine_210_finish(server, ns)) &&
!(retVal = function_machine_209_finish(server, ns)) &&
!(retVal = function_machine_208_finish(server, ns)) &&
!(retVal = function_machine_207_finish(server, ns)) &&
!(retVal = function_machine_206_finish(server, ns)) &&
!(retVal = function_machine_205_finish(server, ns)) &&
!(retVal = function_machine_204_finish(server, ns)) &&
!(retVal = function_machine_203_finish(server, ns)) &&
!(retVal = function_machine_202_finish(server, ns)) &&
!(retVal = function_machine_201_finish(server, ns)) &&
!(retVal = function_machine_200_finish(server, ns)) &&
!(retVal = function_machine_199_finish(server, ns)) &&
!(retVal = function_machine_198_finish(server, ns)) &&
!(retVal = function_machine_197_finish(server, ns)) &&
!(retVal = function_machine_196_finish(server, ns)) &&
!(retVal = function_machine_195_finish(server, ns)) &&
!(retVal = function_machine_194_finish(server, ns)) &&
!(retVal = function_machine_193_finish(server, ns)) &&
!(retVal = function_machine_192_finish(server, ns)) &&
!(retVal = function_machine_191_finish(server, ns)) &&
!(retVal = function_machine_190_finish(server, ns)) &&
!(retVal = function_machine_189_finish(server, ns)) &&
!(retVal = function_machine_188_finish(server, ns)) &&
!(retVal = function_machine_187_finish(server, ns)) &&
!(retVal = function_machine_186_finish(server, ns)) &&
!(retVal = function_machine_185_finish(server, ns)) &&
!(retVal = function_machine_184_finish(server, ns)) &&
!(retVal = function_machine_183_finish(server, ns)) &&
!(retVal = function_machine_182_finish(server, ns)) &&
!(retVal = function_machine_181_finish(server, ns)) &&
!(retVal = function_machine_180_finish(server, ns)) &&
!(retVal = function_machine_179_finish(server, ns)) &&
!(retVal = function_machine_178_finish(server, ns)) &&
!(retVal = function_machine_177_finish(server, ns)) &&
!(retVal = function_machine_176_finish(server, ns)) &&
!(retVal = function_machine_175_finish(server, ns)) &&
!(retVal = function_machine_174_finish(server, ns)) &&
!(retVal = function_machine_173_finish(server, ns)) &&
!(retVal = function_machine_172_finish(server, ns)) &&
!(retVal = function_machine_171_finish(server, ns)) &&
!(retVal = function_machine_170_finish(server, ns)) &&
!(retVal = function_machine_169_finish(server, ns)) &&
!(retVal = function_machine_168_finish(server, ns)) &&
!(retVal = function_machine_167_finish(server, ns)) &&
!(retVal = function_machine_166_finish(server, ns)) &&
!(retVal = function_machine_165_finish(server, ns)) &&
!(retVal = function_machine_164_finish(server, ns)) &&
!(retVal = function_machine_163_finish(server, ns)) &&
!(retVal = function_machine_162_finish(server, ns)) &&
!(retVal = function_machine_161_finish(server, ns)) &&
!(retVal = function_machine_160_finish(server, ns)) &&
!(retVal = function_machine_159_finish(server, ns)) &&
!(retVal = function_machine_158_finish(server, ns)) &&
!(retVal = function_machine_157_finish(server, ns)) &&
!(retVal = function_machine_156_finish(server, ns)) &&
!(retVal = function_machine_155_finish(server, ns)) &&
!(retVal = function_machine_154_finish(server, ns)) &&
!(retVal = function_machine_153_finish(server, ns)) &&
!(retVal = function_machine_152_finish(server, ns)) &&
!(retVal = function_machine_151_finish(server, ns)) &&
!(retVal = function_machine_150_finish(server, ns)) &&
!(retVal = function_machine_149_finish(server, ns)) &&
!(retVal = function_machine_148_finish(server, ns)) &&
!(retVal = function_machine_147_finish(server, ns)) &&
!(retVal = function_machine_146_finish(server, ns)) &&
!(retVal = function_machine_145_finish(server, ns)) &&
!(retVal = function_machine_144_finish(server, ns)) &&
!(retVal = function_machine_143_finish(server, ns)) &&
!(retVal = function_machine_142_finish(server, ns)) &&
!(retVal = function_machine_141_finish(server, ns)) &&
!(retVal = function_machine_140_finish(server, ns)) &&
!(retVal = function_machine_139_finish(server, ns)) &&
!(retVal = function_machine_138_finish(server, ns)) &&
!(retVal = function_machine_137_finish(server, ns)) &&
!(retVal = function_machine_136_finish(server, ns)) &&
!(retVal = function_machine_135_finish(server, ns)) &&
!(retVal = function_machine_134_finish(server, ns)) &&
!(retVal = function_machine_133_finish(server, ns)) &&
!(retVal = function_machine_132_finish(server, ns)) &&
!(retVal = function_machine_131_finish(server, ns)) &&
!(retVal = function_machine_130_finish(server, ns)) &&
!(retVal = function_machine_129_finish(server, ns)) &&
!(retVal = function_machine_128_finish(server, ns)) &&
!(retVal = function_machine_127_finish(server, ns)) &&
!(retVal = function_machine_126_finish(server, ns)) &&
!(retVal = function_machine_125_finish(server, ns)) &&
!(retVal = function_machine_124_finish(server, ns)) &&
!(retVal = function_machine_123_finish(server, ns)) &&
!(retVal = function_machine_122_finish(server, ns)) &&
!(retVal = function_machine_121_finish(server, ns)) &&
!(retVal = function_machine_120_finish(server, ns)) &&
!(retVal = function_machine_119_finish(server, ns)) &&
!(retVal = function_machine_118_finish(server, ns)) &&
!(retVal = function_machine_117_finish(server, ns)) &&
!(retVal = function_machine_116_finish(server, ns)) &&
!(retVal = function_machine_115_finish(server, ns)) &&
!(retVal = function_machine_114_finish(server, ns)) &&
!(retVal = function_machine_113_finish(server, ns)) &&
!(retVal = function_machine_112_finish(server, ns)) &&
!(retVal = function_machine_111_finish(server, ns)) &&
!(retVal = function_machine_110_finish(server, ns)) &&
!(retVal = function_machine_109_finish(server, ns)) &&
!(retVal = function_machine_108_finish(server, ns)) &&
!(retVal = function_machine_107_finish(server, ns)) &&
!(retVal = function_machine_106_finish(server, ns)) &&
!(retVal = function_machine_105_finish(server, ns)) &&
!(retVal = function_machine_104_finish(server, ns)) &&
!(retVal = function_machine_103_finish(server, ns)) &&
!(retVal = function_machine_102_finish(server, ns)) &&
!(retVal = function_machine_101_finish(server, ns)) &&
!(retVal = function_machine_100_finish(server, ns)) &&
!(retVal = function_machine_99_finish(server, ns)) &&
!(retVal = function_machine_98_finish(server, ns)) &&
!(retVal = function_machine_97_finish(server, ns)) &&
!(retVal = function_machine_96_finish(server, ns)) &&
!(retVal = function_machine_95_finish(server, ns)) &&
!(retVal = function_machine_94_finish(server, ns)) &&
!(retVal = function_machine_93_finish(server, ns)) &&
!(retVal = function_machine_92_finish(server, ns)) &&
!(retVal = function_machine_91_finish(server, ns)) &&
!(retVal = function_machine_90_finish(server, ns)) &&
!(retVal = function_machine_89_finish(server, ns)) &&
!(retVal = function_machine_88_finish(server, ns)) &&
!(retVal = function_machine_87_finish(server, ns)) &&
!(retVal = function_machine_86_finish(server, ns)) &&
!(retVal = function_machine_85_finish(server, ns)) &&
!(retVal = function_machine_84_finish(server, ns)) &&
!(retVal = function_machine_83_finish(server, ns)) &&
!(retVal = function_machine_82_finish(server, ns)) &&
!(retVal = function_machine_81_finish(server, ns)) &&
!(retVal = function_machine_80_finish(server, ns)) &&
!(retVal = function_machine_79_finish(server, ns)) &&
!(retVal = function_machine_78_finish(server, ns)) &&
!(retVal = function_machine_77_finish(server, ns)) &&
!(retVal = function_machine_76_finish(server, ns)) &&
!(retVal = function_machine_75_finish(server, ns)) &&
!(retVal = function_machine_74_finish(server, ns)) &&
!(retVal = function_machine_73_finish(server, ns)) &&
!(retVal = function_machine_72_finish(server, ns)) &&
!(retVal = function_machine_71_finish(server, ns)) &&
!(retVal = function_machine_70_finish(server, ns)) &&
!(retVal = function_machine_69_finish(server, ns)) &&
!(retVal = function_machine_68_finish(server, ns)) &&
!(retVal = function_machine_67_finish(server, ns)) &&
!(retVal = function_machine_66_finish(server, ns)) &&
!(retVal = function_machine_65_finish(server, ns)) &&
!(retVal = function_machine_64_finish(server, ns)) &&
!(retVal = function_machine_63_finish(server, ns)) &&
!(retVal = function_machine_62_finish(server, ns)) &&
!(retVal = function_machine_61_finish(server, ns)) &&
!(retVal = function_machine_60_finish(server, ns)) &&
!(retVal = function_machine_59_finish(server, ns)) &&
!(retVal = function_machine_58_finish(server, ns)) &&
!(retVal = function_machine_57_finish(server, ns)) &&
!(retVal = function_machine_56_finish(server, ns)) &&
!(retVal = function_machine_55_finish(server, ns)) &&
!(retVal = function_machine_54_finish(server, ns)) &&
!(retVal = function_machine_53_finish(server, ns)) &&
!(retVal = function_machine_52_finish(server, ns)) &&
!(retVal = function_machine_51_finish(server, ns)) &&
!(retVal = function_machine_50_finish(server, ns)) &&
!(retVal = function_machine_49_finish(server, ns)) &&
!(retVal = function_machine_48_finish(server, ns)) &&
!(retVal = function_machine_47_finish(server, ns)) &&
!(retVal = function_machine_46_finish(server, ns)) &&
!(retVal = function_machine_45_finish(server, ns)) &&
!(retVal = function_machine_44_finish(server, ns)) &&
!(retVal = function_machine_43_finish(server, ns)) &&
!(retVal = function_machine_42_finish(server, ns)) &&
!(retVal = function_machine_41_finish(server, ns)) &&
!(retVal = function_machine_40_finish(server, ns)) &&
!(retVal = function_machine_39_finish(server, ns)) &&
!(retVal = function_machine_38_finish(server, ns)) &&
!(retVal = function_machine_37_finish(server, ns)) &&
!(retVal = function_machine_36_finish(server, ns)) &&
!(retVal = function_machine_35_finish(server, ns)) &&
!(retVal = function_machine_34_finish(server, ns)) &&
!(retVal = function_machine_33_finish(server, ns)) &&
!(retVal = function_machine_32_finish(server, ns)) &&
!(retVal = function_machine_31_finish(server, ns)) &&
!(retVal = function_machine_30_finish(server, ns)) &&
!(retVal = function_machine_29_finish(server, ns)) &&
!(retVal = function_machine_28_finish(server, ns)) &&
!(retVal = function_machine_27_finish(server, ns)) &&
!(retVal = function_machine_26_finish(server, ns)) &&
!(retVal = function_machine_25_finish(server, ns)) &&
!(retVal = function_machine_24_finish(server, ns)) &&
!(retVal = function_machine_23_finish(server, ns)) &&
!(retVal = function_machine_22_finish(server, ns)) &&
!(retVal = function_machine_21_finish(server, ns)) &&
!(retVal = function_machine_20_finish(server, ns)) &&
!(retVal = function_machine_19_finish(server, ns)) &&
!(retVal = function_machine_18_finish(server, ns)) &&
!(retVal = function_machine_17_finish(server, ns)) &&
!(retVal = function_machine_16_finish(server, ns)) &&
!(retVal = function_machine_15_finish(server, ns)) &&
!(retVal = function_machine_14_finish(server, ns)) &&
!(retVal = function_machine_13_finish(server, ns)) &&
!(retVal = function_machine_12_finish(server, ns)) &&
!(retVal = function_machine_11_finish(server, ns)) &&
!(retVal = function_machine_10_finish(server, ns)) &&
!(retVal = function_machine_9_finish(server, ns)) &&
!(retVal = function_machine_8_finish(server, ns)) &&
!(retVal = function_machine_7_finish(server, ns)) &&
!(retVal = function_machine_6_finish(server, ns)) &&
!(retVal = function_machine_5_finish(server, ns)) &&
!(retVal = function_machine_4_finish(server, ns)) &&
!(retVal = function_machine_3_finish(server, ns)) &&
!(retVal = function_machine_2_finish(server, ns)) &&
!(retVal = function_machine_1_finish(server, ns)) &&
!(retVal = function_machine_0_finish(server, ns)) 
); (void)(dummy);
return retVal;
}
