#include<stdio.h>
#include<malloc.h>


typedef struct node
{
    int data;
    struct node* link;

}node, Stack;

Stack* getNode(); //노드생성함수
void push(Stack** top, int data); // 데이터 입력 함수
void pop(Stack** top); //데이터 삭제 함수
void peek(Stack** top);//데이터 출력함수 가장위에 데이터만
void Allpeek(Stack** top); //전체 데이터 출력
int main(void)
{
    Stack* top = NULL;
    push(&top, 10);
    /* peek(&top); */
    /* push(&top, 20);
    peek(&top);
    push(&top, 30);
    Allpeek(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top); */
    return 0; 
}

Stack* getNode()
{
    Stack* tmp = (Stack*)malloc(sizeof(Stack));         //tmp 주소로 할당
    tmp->link = NULL;                                   //tmp -> link   link가 비어있을경우 tmp를 할당 
    return tmp;
}

void push(Stack** top, int data)
{
    
    printf("%d\n", data);                               //data = 10
    printf("%d\n", *top);                               //top = 0
    Stack* tmp = *top;                                  //tmp = top의 주소로 간다 
    printf("%d\n", data);                               //data = 10
    printf("%d\n", *top);                               //top = 0
    printf("%d\n", tmp);                                //tmp = 0
    *top = getNode();                                   //node받기 
    (*top)->data = data;                                // *top -> 10이 있는 data로 감(주소로감)
    printf("%d\n", *top);                               // top = 주소
    printf("%d\n", data);                               // data = 10
    printf("%d\n", tmp);                                // tmp = 0
    printf("%d\n", (*top)->link);
    (*top)->link = tmp;          
    printf("%d\n", (*top)->link);
    printf("%d\n", (*top)->link);


    printf("%d\n", (*top)->data);
    return;
}

void pop(Stack** top)
{

}

void peek(Stack** top)
{

}

void Allpeek(Stack** top)
{
    if ((*top) == NULL)
    {
        printf("DATA출력완료\n");
        return;
    }

    printf("%d -> ", (*top)->data);
    Allpeek(&(*top)->link);
}



