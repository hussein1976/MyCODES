#pragma once
enum DAY {
	MONDAY = 1,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY
};
enum PERIOD {//enumeration for the 'period'
	PERIOD_1 = 1,
	PERIOD_2,
	PERIOD_3,
	PERIOD_4,
	PERIOD_5,
	PERIOD_6,
	PERIOD_7,
	PERIOD_8,
	PERIOD_9,
};
enum DURATION {//how long the class is.
	ONE_HOUR = 1,
	TWO_HOUR,
	THREE_HOUR
};
typedef struct {
	char *ClassName;
	char *ClassTeacher;
	char *Location;
	DAY Start_Day;//what day the class is in(1~5)
	PERIOD Start_Period;//when the class starts(1~9)
	DURATION duration;//how long the class is.
}One_Class;//One Class,containing 3 variables

typedef struct {
	/*
	One_Class period_1;//1st period (8:30 ~ 9:20)
	One_Class period_2;//2nd period (9:30 ~ 10:20)
	One_Class period_3;//3rd period (10:30 ~ 11:20)
	One_Class period_4;//4th period (11:30 ~ 12: 20)
	One_Class period_5;//5th period (13:20 ~ 14:10)
	One_Class period_6;//6th period (14:20 ~ 15:10)
	One_Class period_7;//7th period (15:20 ~ 16:10)
	One_Class period_8;//8th period (16:20 ~ 17:10)
	One_Class period_9;//9th period (17:20 ~ 18:10) ??
	*/
	One_Class PeriodofDay[9];
}One_Day;//One day,with 9 period each.

typedef struct {
	char* Name;
	char ClassNum;
	char Number;
	One_Day DayofWeek[5];//0~4.
}Schedule;//1 person's Total Schedule.

//0) Special Pointers!
const char* GONG_GANG_pointer = "����";
const char* SEONTAEK_1_pointer = "����1";
const char* SEONTAEK_2_pointer = "����2";
const char* SEONTAEK_3_pointer = "����3";

//1) 2�г� ���ð���
One_Class SEONTAEK_CLASSES[]{
	{"�Ϲݹ����н��襰-��","�ֿ���","��������2��",FRIDAY,PERIOD_6,TWO_HOUR},
	{ "�Ϲݹ����н��襰-��","�ֿ���","��������2��",TUESDAY,PERIOD_1,TWO_HOUR },
	{ "�Ϲݹ����н��襰-��","���Ѿ�","��������2��",WEDNESDAY,PERIOD_3,TWO_HOUR },

	{ "�Ϲ�ȭ�н��襰-��","������","ȭ�н���2��",MONDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲ�ȭ�н��襰-��","������","ȭ�н���2��",TUESDAY,PERIOD_1,TWO_HOUR },

	{ "�ڷᱸ��-��","������","��Ƽ1��",FRIDAY,PERIOD_6,TWO_HOUR },
	{ "�ڷᱸ��-��","������","��Ƽ1��",MONDAY,PERIOD_4,ONE_HOUR },
	{ "�ڷᱸ��-��","������","��Ƽ1��",TUESDAY,PERIOD_1,TWO_HOUR },
	{ "�ڷᱸ��-��","������","��Ƽ1��",THURSDAY,PERIOD_3,ONE_HOUR },

	{ "â���������ذ���-��","ȫ����,��â��","��Ƽ2��",THURSDAY,PERIOD_3,TWO_HOUR },
	{ "â���������ذ���-��","ȫ����,��â��","��Ƽ2��",FRIDAY,PERIOD_1,TWO_HOUR },

	{ "�Ϲݹ����Х�-��","�ǹ�ȣ","����2��",MONDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲݹ�����I-��","�����","����2��",FRIDAY,PERIOD_6,TWO_HOUR },
	{ "�Ϲݹ�����I-��","�ǹ�ȣ","����2��",TUESDAY,PERIOD_1,TWO_HOUR },
	{ "�Ϲݹ�����I-��","�����","����2��",THURSDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲݹ�����I-��","�ǹ�ȣ","����2��",WEDNESDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲݹ�����I-��","�����","����2��",FRIDAY,PERIOD_1,TWO_HOUR },

	{ "�Ϲݻ������I-��","������","����1��",TUESDAY,PERIOD_1,TWO_HOUR },
	{ "�Ϲݻ������I-��","������","����1��",THURSDAY,PERIOD_3,ONE_HOUR },
	{ "�Ϲݻ������I-��","������","����1��",WEDNESDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲݻ������I-��","������","����1��",FRIDAY,PERIOD_1,ONE_HOUR },

	{ "�Ϲݻ�����н���I-��","�̹���","��������1��",MONDAY,PERIOD_3,TWO_HOUR },
	{ "�Ϲݻ�����н���I-��","�̹���","��������1��",TUESDAY,PERIOD_1,TWO_HOUR },
	{ "�Ϲݻ�����н���I-��","�̹���","��������1��",WEDNESDAY,PERIOD_3,TWO_HOUR },
};

//2) 2�г� �ݺ� �⺻ ����
Schedule BigBoy[6];//all 6 classes.