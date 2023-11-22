//IO�ź�0
#define INDEX_BASE_IO 0
#define X_SIGNAL INDEX_BASE_IO+10001  //X�ź�
#define Y_SIGNAL INDEX_BASE_IO+10002  //Y�ź�
#define F_SIGNAL INDEX_BASE_IO+10003  //F�ź�
#define G_SIGNAL INDEX_BASE_IO+10004  //G�ź�

#define  CHANNEL_NUM 1  //ͨ������
#define  ACTIVE_CHANNEL 2  //��ǰ����ͨ��

//ϵͳ״̬1000
#define INDEX_BASE_SYSTEM 1000
#define MACHINE_TYPE      INDEX_BASE_SYSTEM+1		//��������:��ϳ
#define TASK_STATE  INDEX_BASE_SYSTEM+2	        // ����״̬
#define DISP_MODE      INDEX_BASE_SYSTEM+3	    // ��ʾģʽ
#define DISP_STATE  INDEX_BASE_SYSTEM+4			//����״̬
#define SOFT_VERSION		INDEX_BASE_SYSTEM+5		//��������汾
#define MACHINE_MODEL	INDEX_BASE_SYSTEM+7		//����ϵͳ�ͺ�Ԥ��
#define M01_MODE     INDEX_BASE_SYSTEM+8	        // MO1��ǰ״̬ 
#define USB_MODE     INDEX_BASE_SYSTEM+9	        // б��ʹ��                          
#define AXIS_LOCK    INDEX_BASE_SYSTEM+10	        // ����ס  
#define AUX_LOCK     INDEX_BASE_SYSTEM+11	        // ������ס 
#define DRY_RUN      INDEX_BASE_SYSTEM+12	        // ������  
#define ACTIVE_AXIS		INDEX_BASE_SYSTEM+13	 //��ǰ������
#define ALL_HOMED	INDEX_BASE_SYSTEM+14 //�Ƿ�ȫ�����־

//�ӹ����ú�״̬2000
#define INDEX_BASE_PROCESS 2000
#define CYCLE_TIME		INDEX_BASE_PROCESS+1	//ϵͳ����(��δʵ��)
#define DISPLAY_FILE		INDEX_BASE_PROCESS+3	//���ص��ļ���
#define MAIN_FILE INDEX_BASE_PROCESS+4			// ��������  
#define SUB_FILE		INDEX_BASE_PROCESS+5             //�ӳ�����
#define CURRENT_LINE    INDEX_BASE_PROCESS+6	    // ��ǰ�к�   
#define SUB_LEVEL		INDEX_BASE_PROCESS+7		//�ӳ�����ò���main 0,sub1 1, ...
#define WOKE_PIECE   INDEX_BASE_PROCESS+8	        // ����ӹ����� 
#define PIECE_FINISH_FLAG INDEX_BASE_PROCESS+9 //��������ź�
#define PROGRAM_OPEN_SUCCESS_FLAG INDEX_BASE_PROCESS+10//������سɹ���־
#define COMMAND		INDEX_BASE_PROCESS+15	//��ǰִ�д���(��δʵ��)
#define ACTIVE_G_CODES  INDEX_BASE_PROCESS+16	//��ǰ��ԾG����
#define ACTIVE_M_CODES  INDEX_BASE_PROCESS+17	//��ǰ��ԾM����
#define MIN_SOFTLIMIT	INDEX_BASE_PROCESS+20   //��С����
#define MAX_SOFTLIMIT	INDEX_BASE_PROCESS+21	//�������
#define MIN_HARDLIMIT	INDEX_BASE_PROCESS+22    //��СӲ��
#define MAX_HARDLIMIT	INDEX_BASE_PROCESS+23   //���Ӳ��

//����ͳ��3000
#define INDEX_BASE_COUNT 3000
#define ON_TIME     INDEX_BASE_COUNT+1		//�ϵ�ʱ��
#define RUN_TIME     INDEX_BASE_COUNT+2	        // ����ʱ��   
#define CUT_TIME     INDEX_BASE_COUNT+3		//����ʱ��
#define TOTAL_ON_TIME	INDEX_BASE_COUNT+4		//�ۻ������ϵ�ʱ��
#define TOTAL_RUN_TIME	INDEX_BASE_COUNT+5		//�ۻ���������ʱ��
#define TOTAL_CUT_TIME	INDEX_BASE_COUNT+6		//�ۻ���������ʱ��

//��������4000
#define INDEX_BASE_TOOL 4000
#define TOOL_NUM     INDEX_BASE_TOOL+1	        // ��ǰ���ߺ�   
#define TOOL_LONGTH_X  INDEX_BASE_TOOL+2	        // ���߳���X   
#define TOOL_DIAM    INDEX_BASE_TOOL+3	        // ���߰뾶   
#define TOOL_OFFSET_VALUE1	INDEX_BASE_TOOL+4        //����ƫ��ֵ
#define TOOL_LONGTH_Y  INDEX_BASE_TOOL+5	        // ���߳���Y   
#define TOOL_LONGTH_Z  INDEX_BASE_TOOL+6	        // ���߳���Z   

//�ٶȺ��޵�5000
#define INDEX_BASE_VEL 5000
#define FEED_SPEED   INDEX_BASE_VEL+1	        // ������ٶ� 
#define AFEED_SPEED  INDEX_BASE_VEL+2	    // ʵ�ʽ����ٶ� 
#define TRAVERS_SPEED    INDEX_BASE_VEL+3	    // ������ٶ� 
#define ATRAVERS_SPEED   INDEX_BASE_VEL+4	    // ʵ�ʿ����ٶ� 
#define JOG_SPEED     INDEX_BASE_VEL+5	    // �JOG�ٶ�  
#define AJOG_SPEED    INDEX_BASE_VEL+6	    // ʵ��JOG�ٶ�  
#define JOG_TRAVERS_SPEED   INDEX_BASE_VEL+7	    // �JOG����  (��δʵ��)
#define AJOG_TRAVERS_SPEED  INDEX_BASE_VEL+8	    // ʵ��JOG���� (��δʵ��)
#define FEED_SCALE	INDEX_BASE_VEL+9                //��������
#define TRAVERS_SCALE	INDEX_BASE_VEL+10         //���Ʊ���
#define JOG_SCALE    INDEX_BASE_VEL+11	    	    // JOG����   
#define JOG_TRAVERS_SCALE	INDEX_BASE_VEL+12  //�ֶ����Ʊ���
#define JOGICRE_SCALE   INDEX_BASE_VEL+13	    // JOG�������� 
#define JOG_INCREMENT    INDEX_BASE_VEL+14	    // JOG����    


//���������6000
#define INDEX_BASE_GEOAXIS 6000

//ͨ�������7000
#define INDEX_BASE_CHANAXIS 7000
#define AXIS_NUM		INDEX_BASE_PROCESS+1              //��������
#define AXIS_NAME	INDEX_BASE_CHANAXIS+2//����
#define AXIS_ENABLED	INDEX_BASE_CHANAXIS+3//��ʹ��
#define MAX_VELOCITY	INDEX_BASE_CHANAXIS+4//����ٶ�
#define HOST_POS    INDEX_BASE_CHANAXIS+5	//�û�������ֵ
#define AHOST_POS   INDEX_BASE_CHANAXIS+6	 //�û�����ʵ��ֵ
#define MACHINE_POS INDEX_BASE_CHANAXIS+7	  //����������ֵ
#define AMACHINE_POS INDEX_BASE_CHANAXIS+8	//��������ʵ��ֵ 
#define ERROR_VALUE    INDEX_BASE_CHANAXIS+9 //�������
#define DISTANCE_TOGO    INDEX_BASE_CHANAXIS+10// ʣ����
#define BACKLASH 		INDEX_BASE_CHANAXIS+11		//���ᷴ���϶������
#define ORIGIN_VALUE    INDEX_BASE_CHANAXIS+12	//������ǰ����ϵԭ��ֵ 
#define G92_VALUE INDEX_BASE_CHANAXIS+13	//
#define TORQ	INDEX_BASE_CHANAXIS+14		//ʵ��Ť�ذٷֱȷ���

//�������8000
#define INDEX_BASE_SPINDLE 8000
#define SPINDLE_NAME    INDEX_BASE_SPINDLE+1//������
#define SPINDLE_SHIFT    INDEX_BASE_SPINDLE+2//���ᵵλ
#define SPINDLE_SPEED    INDEX_BASE_SPINDLE+3	    // ����ת�� 
#define ASPINDLE_SPEED   INDEX_BASE_SPINDLE+4	    // ����ʵ��ת�� 
#define SPINDLE_SCALE   INDEX_BASE_SPINDLE+5	    // ���ᱶ��   
#define SPINDLE_POS		INDEX_BASE_SPINDLE+6	//����λ�ñ��ֵ 
#define ASPINDLE_POS	INDEX_BASE_SPINDLE+7	//����λ��ʵ��ֵ 
#define SPIN_TORQ	INDEX_BASE_SPINDLE+8		//ʵ������Ť��ǧ�ֱ�(ԭ����Ϊ����)


//ϵͳ����9000
#define INDEX_BASE_VAR 9000
#define LOCAL_ARGUMENT INDEX_BASE_VAR+1
#define USER_VAR_DOUBLE INDEX_BASE_VAR+2

#define TEMP_TEST_AXIS_NUM 3

