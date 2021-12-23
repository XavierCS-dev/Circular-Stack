#include "main.h"

int main()
{
    CircularStack *my_stack = new_stack(5);
    // pop(my_stack); // will crash
    for(int i = 0; i < 10; ++i) push(i, my_stack);
    for(int i = 5; i>0; --i) printf("Top: %d\n", pop(my_stack));
    destroy_stack(my_stack);
    return 0;
}
