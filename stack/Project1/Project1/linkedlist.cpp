#include<stdio.h>
#include<malloc.h>


typedef struct node
{
    int data;
    struct node* link;

}node, Stack;

Stack* getNode(); //�������Լ�
void push(Stack** top, int data); // ������ �Է� �Լ�
void pop(Stack** top); //������ ���� �Լ�
void peek(Stack** top);//������ ����Լ� �������� �����͸�
void Allpeek(Stack** top); //��ü ������ ���
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
    Stack* tmp = (Stack*)malloc(sizeof(Stack));         //tmp �ּҷ� �Ҵ�
    tmp->link = NULL;                                   //tmp -> link   link�� ���������� tmp�� �Ҵ� 
    return tmp;
}

void push(Stack** top, int data)
{
    
    printf("%d\n", data);                               //data = 10
    printf("%d\n", *top);                               //top = 0
    Stack* tmp = *top;                                  //tmp = top�� �ּҷ� ���� 
    printf("%d\n", data);                               //data = 10
    printf("%d\n", *top);                               //top = 0
    printf("%d\n", tmp);                                //tmp = 0
    *top = getNode();                                   //node�ޱ� 
    (*top)->data = data;                                // *top -> 10�� �ִ� data�� ��(�ּҷΰ�)
    printf("%d\n", *top);                               // top = �ּ�
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
        printf("DATA��¿Ϸ�\n");
        return;
    }

    printf("%d -> ", (*top)->data);
    Allpeek(&(*top)->link);
}



