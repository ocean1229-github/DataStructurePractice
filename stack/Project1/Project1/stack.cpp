#include<stdio.h>
#include<malloc.h>
#define SIZE 5

void push(int* stack, int* top, int data);
void pop(int* stack, int* top);
void peek(int* stack, int* top);    //가장 나중에 들어온 데이터를 출력하는 함수

int main(void)
{   
    int* stack = (int*)malloc(sizeof(int) * SIZE);
    int top = 0;
    push(stack, &top, 10);
    push(stack, &top, 20);
    push(stack, &top, 30);
    push(stack, &top, 40);
    push(stack, &top, 50);
    push(stack, &top, 60);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);
    pop(stack, &top);
    peek(stack, &top);

    return 0;
}

void push(int* stack, int* top, int data)
{
    if (*top == SIZE)
    {
        printf("stack overflow!!!\n");
        return;
    }
    stack[*top] = data;
    (*top)++;
}

void pop(int* stack, int* top)
{
    if (*top == 0)
    {
        printf("stack underflow!!!\n");
        return;
    }
    (*top)--;
    printf("%d 삭제\n", stack[*top]);
}

void peek(int* stack, int* top)
{
    if (*top == 0)
    {
        printf("no data!!!\n");
        return;
    }
    printf("top의 data : %d\n", stack[*top - 1]);
}