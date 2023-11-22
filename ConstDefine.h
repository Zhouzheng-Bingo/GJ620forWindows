//IO信号0
#define INDEX_BASE_IO 0
#define X_SIGNAL INDEX_BASE_IO+10001  //X信号
#define Y_SIGNAL INDEX_BASE_IO+10002  //Y信号
#define F_SIGNAL INDEX_BASE_IO+10003  //F信号
#define G_SIGNAL INDEX_BASE_IO+10004  //G信号

#define  CHANNEL_NUM 1  //通道总数
#define  ACTIVE_CHANNEL 2  //当前激活通道

//系统状态1000
#define INDEX_BASE_SYSTEM 1000
#define MACHINE_TYPE      INDEX_BASE_SYSTEM+1		//机床类型:车铣
#define TASK_STATE  INDEX_BASE_SYSTEM+2	        // 机床状态
#define DISP_MODE      INDEX_BASE_SYSTEM+3	    // 显示模式
#define DISP_STATE  INDEX_BASE_SYSTEM+4			//运行状态
#define SOFT_VERSION		INDEX_BASE_SYSTEM+5		//机床软件版本
#define MACHINE_MODEL	INDEX_BASE_SYSTEM+7		//数控系统型号预留
#define M01_MODE     INDEX_BASE_SYSTEM+8	        // MO1当前状态 
#define USB_MODE     INDEX_BASE_SYSTEM+9	        // 斜线使能                          
#define AXIS_LOCK    INDEX_BASE_SYSTEM+10	        // 轴锁住  
#define AUX_LOCK     INDEX_BASE_SYSTEM+11	        // 辅助锁住 
#define DRY_RUN      INDEX_BASE_SYSTEM+12	        // 空运行  
#define ACTIVE_AXIS		INDEX_BASE_SYSTEM+13	 //当前激活轴
#define ALL_HOMED	INDEX_BASE_SYSTEM+14 //是否全回零标志

//加工配置和状态2000
#define INDEX_BASE_PROCESS 2000
#define CYCLE_TIME		INDEX_BASE_PROCESS+1	//系统周期(暂未实现)
#define DISPLAY_FILE		INDEX_BASE_PROCESS+3	//加载的文件名
#define MAIN_FILE INDEX_BASE_PROCESS+4			// 主程序名  
#define SUB_FILE		INDEX_BASE_PROCESS+5             //子程序名
#define CURRENT_LINE    INDEX_BASE_PROCESS+6	    // 当前行号   
#define SUB_LEVEL		INDEX_BASE_PROCESS+7		//子程序调用层数main 0,sub1 1, ...
#define WOKE_PIECE   INDEX_BASE_PROCESS+8	        // 零件加工个数 
#define PIECE_FINISH_FLAG INDEX_BASE_PROCESS+9 //工件完成信号
#define PROGRAM_OPEN_SUCCESS_FLAG INDEX_BASE_PROCESS+10//程序加载成功标志
#define COMMAND		INDEX_BASE_PROCESS+15	//当前执行代码(暂未实现)
#define ACTIVE_G_CODES  INDEX_BASE_PROCESS+16	//当前活跃G代码
#define ACTIVE_M_CODES  INDEX_BASE_PROCESS+17	//当前活跃M代码
#define MIN_SOFTLIMIT	INDEX_BASE_PROCESS+20   //最小软限
#define MAX_SOFTLIMIT	INDEX_BASE_PROCESS+21	//最大软限
#define MIN_HARDLIMIT	INDEX_BASE_PROCESS+22    //最小硬限
#define MAX_HARDLIMIT	INDEX_BASE_PROCESS+23   //最大硬限

//数据统计3000
#define INDEX_BASE_COUNT 3000
#define ON_TIME     INDEX_BASE_COUNT+1		//上电时间
#define RUN_TIME     INDEX_BASE_COUNT+2	        // 运行时间   
#define CUT_TIME     INDEX_BASE_COUNT+3		//切削时间
#define TOTAL_ON_TIME	INDEX_BASE_COUNT+4		//累积机床上电时间
#define TOTAL_RUN_TIME	INDEX_BASE_COUNT+5		//累积机床运行时间
#define TOTAL_CUT_TIME	INDEX_BASE_COUNT+6		//累积机床切削时间

//刀具配置4000
#define INDEX_BASE_TOOL 4000
#define TOOL_NUM     INDEX_BASE_TOOL+1	        // 当前刀具号   
#define TOOL_LONGTH_X  INDEX_BASE_TOOL+2	        // 刀具长度X   
#define TOOL_DIAM    INDEX_BASE_TOOL+3	        // 刀具半径   
#define TOOL_OFFSET_VALUE1	INDEX_BASE_TOOL+4        //刀具偏移值
#define TOOL_LONGTH_Y  INDEX_BASE_TOOL+5	        // 刀具长度Y   
#define TOOL_LONGTH_Z  INDEX_BASE_TOOL+6	        // 刀具长度Z   

//速度和修调5000
#define INDEX_BASE_VEL 5000
#define FEED_SPEED   INDEX_BASE_VEL+1	        // 额定进给速度 
#define AFEED_SPEED  INDEX_BASE_VEL+2	    // 实际进给速度 
#define TRAVERS_SPEED    INDEX_BASE_VEL+3	    // 额定快移速度 
#define ATRAVERS_SPEED   INDEX_BASE_VEL+4	    // 实际快移速度 
#define JOG_SPEED     INDEX_BASE_VEL+5	    // 额定JOG速度  
#define AJOG_SPEED    INDEX_BASE_VEL+6	    // 实际JOG速度  
#define JOG_TRAVERS_SPEED   INDEX_BASE_VEL+7	    // 额定JOG快移  (尚未实现)
#define AJOG_TRAVERS_SPEED  INDEX_BASE_VEL+8	    // 实际JOG快移 (尚未实现)
#define FEED_SCALE	INDEX_BASE_VEL+9                //进给倍率
#define TRAVERS_SCALE	INDEX_BASE_VEL+10         //快移倍率
#define JOG_SCALE    INDEX_BASE_VEL+11	    	    // JOG倍率   
#define JOG_TRAVERS_SCALE	INDEX_BASE_VEL+12  //手动快移倍率
#define JOGICRE_SCALE   INDEX_BASE_VEL+13	    // JOG增量倍率 
#define JOG_INCREMENT    INDEX_BASE_VEL+14	    // JOG增量    


//几何轴参数6000
#define INDEX_BASE_GEOAXIS 6000

//通道轴参数7000
#define INDEX_BASE_CHANAXIS 7000
#define AXIS_NUM		INDEX_BASE_PROCESS+1              //配置轴数
#define AXIS_NAME	INDEX_BASE_CHANAXIS+2//轴名
#define AXIS_ENABLED	INDEX_BASE_CHANAXIS+3//轴使能
#define MAX_VELOCITY	INDEX_BASE_CHANAXIS+4//最大速度
#define HOST_POS    INDEX_BASE_CHANAXIS+5	//用户坐标编程值
#define AHOST_POS   INDEX_BASE_CHANAXIS+6	 //用户坐标实际值
#define MACHINE_POS INDEX_BASE_CHANAXIS+7	  //机床坐标编程值
#define AMACHINE_POS INDEX_BASE_CHANAXIS+8	//机床坐标实际值 
#define ERROR_VALUE    INDEX_BASE_CHANAXIS+9 //伴随误差
#define DISTANCE_TOGO    INDEX_BASE_CHANAXIS+10// 剩余量
#define BACKLASH 		INDEX_BASE_CHANAXIS+11		//各轴反向间隙补偿量
#define ORIGIN_VALUE    INDEX_BASE_CHANAXIS+12	//机床当前坐标系原点值 
#define G92_VALUE INDEX_BASE_CHANAXIS+13	//
#define TORQ	INDEX_BASE_CHANAXIS+14		//实际扭矩百分比分子

//主轴参数8000
#define INDEX_BASE_SPINDLE 8000
#define SPINDLE_NAME    INDEX_BASE_SPINDLE+1//主轴名
#define SPINDLE_SHIFT    INDEX_BASE_SPINDLE+2//主轴档位
#define SPINDLE_SPEED    INDEX_BASE_SPINDLE+3	    // 主轴额定转速 
#define ASPINDLE_SPEED   INDEX_BASE_SPINDLE+4	    // 主轴实际转速 
#define SPINDLE_SCALE   INDEX_BASE_SPINDLE+5	    // 主轴倍率   
#define SPINDLE_POS		INDEX_BASE_SPINDLE+6	//主轴位置编程值 
#define ASPINDLE_POS	INDEX_BASE_SPINDLE+7	//主轴位置实际值 
#define SPIN_TORQ	INDEX_BASE_SPINDLE+8		//实际主轴扭矩千分比(原变量为分子)


//系统变量9000
#define INDEX_BASE_VAR 9000
#define LOCAL_ARGUMENT INDEX_BASE_VAR+1
#define USER_VAR_DOUBLE INDEX_BASE_VAR+2

#define TEMP_TEST_AXIS_NUM 3

