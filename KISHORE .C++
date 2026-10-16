#include<stdio.h>
#include<stdio.h>
#include<pthread.h>

void*display(void*arg)
{
 int thread_no=*(int*)arg
 printf("Thread% is executing\n",thread_no)
 pthread_exit(NULL);
}
intmain()
{
 pthread_t t1,t2;
 int id1 =1,id2=2;
 
 pthread_create(&t1,NULL,display,&id1);
 pthread_create(&t2,NULL,display,&id2);
 
 pthread_join(t1,NULL);
 pthread_join(t2,NULL);
 
 printf("Both threads have completedexecution.\n');
 
 return0;
}

