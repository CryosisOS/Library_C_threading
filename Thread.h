#include <stdio.h>
#include <pthread.h>

#define THREAD_H
#ifndef THREAD_H

typedef void (*funcptr)(void);

struct Thread 
{
    pthread_t id;
    funcptr process;
} thread;

Thread* createThread();

#endif