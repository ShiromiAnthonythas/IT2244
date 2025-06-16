#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

//normal C function that is executed as a thread
//when its name is specifiedin pthread_create()
void *helloworld(void*vargp)
{
	sleep(1);
	printf("hello worls \n");
	return NULL;
}

int main(){
	pthread_t thread_id;
	printf("before thread \n");
	pthread_create (&thread_id,NULL,helloWorld,NULL);
	pthread_join(thread_id,NULL);
	printf("After thread \n");
	exit(0);
}
================================================================================

//multi thread

// Thread
#include<stdio.h>
#include<pthread.h>

//Function to be executed by the thread
void * print_message(void* arg){
	char* message =(char *)arg;
	printf("%s\n",message);
	return NULL;
}

int main()
{
	pthread_t thread1,thread2;
	
	//creat first thread
	pthread_create(&thread1,NULL,print_message,"Hello World Thread1 ");
	//creat second thread
	pthread_create(&thread2,NULL,print_message,"Hello World Thread2 ");
	
	//wait for both threads to finish
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	
	printf("Both threads completed \n");
	return 0;
}
==============================================================================

#include<stdio.h>
#include<pthread.h>


void * print_message(void* arg){
	char* message =(char *)arg;
	printf("%s\n",message);
	return NULL;
}

int main()
{
	pthread_t thread[3];
	char* messages[]={
		"Thread 1 says hi!",
		"Thread 2 says hello!",
		"Thread 3 says hey!",
	};
	
	for(int i=0; i<3;i++){
		pthread_create(&thread[i],NULL,print_message,messages[i]);
	}
	
	for(int i=0; i<3;i++){
		pthread_join(thread[i],NULL);
	}
	
printf("all threads done.\n");
return 0;
}





