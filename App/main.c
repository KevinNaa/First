#include "includes.h"

//起始任务
const uint8_t START_TASK_PRIO = 10;
const uint32_t  START_TASK_SIZE = 512;
void StartTask(void * p_arg);
OS_STK StartTaskSTK[START_TASK_SIZE];


/**
 * @function    : main
 * @Description : 主函数
**/
int main(void)

{
    OSInit();     
    OSTaskCreate(StartTask,(void *) 0, &StartTaskSTK[START_TASK_SIZE - 1], START_TASK_PRIO);
    OSStart();
    return 0;
} 


void StartTask(void * p_arg)
{
    OS_CPU_SR cpu_sr = 0;
    (void)p_arg;
    OS_CPU_SysTickInit();
    OSStatInit();
    
    
		
		while(1)
		{
            printf("ok");
			OSTimeDly(10);
		};

}

