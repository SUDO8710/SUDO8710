// C program for push and pop operation of stack using array
//#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// Structure representing a stack
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

//  Creating stack of given capacity
//  Initialising size of stack as 0
struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack=full when top=the last index
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

// Stack=empty when top=-1
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

// Adding item to stack
// Top increased by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Removing item from stack
// Top decreased by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return 0;
    return stack->array[stack->top--];
}

// Test Case
int main()
{
    struct Stack *stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    return 0;
}