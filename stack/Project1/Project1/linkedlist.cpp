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
    Stack* tmp = (Stack*)malloc(sizeof(Stack));         //tmp �ּҷ� �Ҵ�
    tmp->link = NULL;                                   //tmp -> link   link�� ���������� tmp�� �Ҵ� 
    return tmp;
}

void push(Stack** top, int data)
{
/*    Stack* tmp = *top;                                  //tmp = top�� �ּҷ� ���� 
    *top = getNode();                                   //node�ޱ� 
    (*top)->data = data;                                // *top -> 10�� �ִ� data�� ��(�ּҷΰ�)                       
    (*top)->link = tmp;      

    printf("%d\n", (*top)->data);*/

    //�ӽ� ������ ���� tmp�� �����ϸ鼭 getNode�Լ��� ��ȯ�� ����
    Stack* tmp = getNode();
    //tmp�� ����Ű�� ����� data�ʵ忡 data����
    tmp->data = data;
    //tmp�� ��ũ�ʵ忡 main�� ž�� ������ �ִ� �ּڰ� ����
    tmp->link = *top;
    //main�� top�� tmp�� ������ �ִ� �ּڰ� ����.
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
        printf("DATA��¿Ϸ�\n");
        return;
    }

    printf("%d -> ", (*top)->data);
    Allpeek(&(*top)->link);
}



