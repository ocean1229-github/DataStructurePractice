#include<stdio.h>
#include<malloc.h>

//����� ����
// F5 - ����
// F10 - ���پ� - �Լ�����
// F11 - ���پ� - �ڵ����ٴ���

//�극��ũ����Ʈ ������ ����
// F9 , ���콺 Ŭ��

//����� ����
// Shift + F5

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
    peek(&top);
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
    Stack* tmp = (Stack*)malloc(sizeof(Stack));
    tmp->link = NULL;
    return tmp;
}

void push(Stack** top, int data)
{
    //(*top)->data = data;
    //�ӽ� ������ ���� tmp �����ϸ鼭 getNode�Լ��� ��ȯ�� ����.
    Stack* tmp = getNode();
    //tmp�� ����Ű�� ����� data�ʵ忡 data����.
    tmp->data = data;
    //tmp�� ��ũ�ʵ忡 main�� ž�� ������ �մ� �ּҰ� ����.
    tmp->link = *top;
    //main�� top�� tmp�� ������ �ִ� �ּҰ� ����.
    *top = tmp;
}

void pop(Stack** top)
{
    if (!(*top)) {
        puts("Stack UnderFlow!!");
        return;
    }
    Stack* tmp = *top;
    *top = (*top)->link;
    free(tmp);
}

void peek(Stack** top)
{
    if (!*top) {
        puts("�����Ͱ� �����ϴ�!");
        return;
    }
    printf("%d\n", (*top)->data);
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