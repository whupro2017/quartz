//
// Created by iclab on 1/23/20.
//

#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <cpuid.h>
#include <sys/time.h>
#include <stdlib.h>
#include "pmalloc.h"

int main(int argc, char **argv) {
    struct timeval begin;
    gettimeofday(&begin, NULL);
    int family, model;
    void *ptr = pmalloc(1024);
    pfree(ptr, 1024);
    return 0;
}