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
    peek(&top);
    push(&top, 20);
    peek(&top);
    push(&top, 30);
    Allpeek(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top); 
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
/*    Stack* tmp = *top;                                  //tmp = top의 주소로 간다 
    *top = getNode();                                   //node받기 
    (*top)->data = data;                                // *top -> 10이 있는 data로 감(주소로감)                       
    (*top)->link = tmp;      

    printf("%d\n", (*top)->data);*/

    //임시 포인터 변수 tmp를 선언하면서 getNode함수의 반환값 저장
    Stack* tmp = getNode();
    //tmp가 가리키는 노드의 data필드에 data저장
    tmp->data = data;
    //tmp의 링크필드에 main의 탑이 가지고 있는 주솟값 저장
    tmp->link = *top;
    //main의 top에 tmp가 가지고 있는 주솟값 저장.
    *top = tmp;

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



