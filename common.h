#ifndef CIRCULARSTACK_COMMON_H
#define CIRCULARSTACK_COMMON_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

typedef struct
{
    int top_pointer;
    int MAX_SIZE;
    int *stack_array;
    int curr_size;
} CircularStack;


CircularStack* new_stack(int size);
void push(int item, CircularStack *stack);
int pop(CircularStack *stack);
void destroy_stack(CircularStack *stack);

#endif //CIRCULARSTACK_COMMON_H
