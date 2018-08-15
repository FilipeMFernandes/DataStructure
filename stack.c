#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* newStack(unsigned capacity){
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));   
    return stack;
}

void push(struct Stack* stack, int item){
    if(stack->top != stack->capacity-1){
        stack->top += 1;
        stack->array[stack->top] = item;
        printf("pushed the item %d \n", item);
    }else{
        printf("overflow: cannot add the item %d \n", item);
    }
}

void pop(struct Stack* stack){
    if(stack->top != -1){
        printf("popped the item %d \n", stack->array[stack->top]);
        stack->top -= 1;
    }else{
        printf("underflow: there is no item to be popped \n");
    }
}

int main(){
    struct Stack* stack = newStack(5);
    push(stack, 10);
    push(stack, 50);
    push(stack, 30);
    push(stack, 80);
    push(stack, 70);
    push(stack, 60);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    push(stack, 60);
    pop(stack);
    pop(stack);
}