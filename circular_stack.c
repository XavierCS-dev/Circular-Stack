#include "circular_stack.h"



CircularStack* new_stack(int size)
{
    CircularStack *circular_stack = malloc(sizeof(CircularStack));
    circular_stack->MAX_SIZE = size;
    circular_stack->stack_array = (int *)malloc(sizeof(int) * size);
    circular_stack->top_pointer = NULL;
    circular_stack->curr_size = 0;
    return circular_stack;
}

void push(int item, CircularStack *stack)
{
    ++stack->top_pointer;
    stack->stack_array[(stack->top_pointer) % stack->MAX_SIZE] = item;
    if (stack->curr_size < stack->MAX_SIZE) ++stack->curr_size;
}

int pop(CircularStack *stack)
{
    if (stack->curr_size == 0)
    {
        fflush(stdout);
        fprintf(stderr, "pop on empty stack: %p\n", stack);
        abort();
    }
    int item = stack->stack_array[(stack->top_pointer) % stack->MAX_SIZE];
    --stack->top_pointer;
    --stack->curr_size;
    return item;
}


void destroy_stack(CircularStack *stack)
{
    free(stack->stack_array);
    free(stack);
}
