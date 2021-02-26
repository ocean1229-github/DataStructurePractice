#include<stdio.h>
#include<malloc.h>

//����ü ����
struct node
{
    int data, tmp;
    struct node* link;
};
typedef struct node Queue;

Queue* getNode();//��� ����
void enqueue(Queue** front, Queue** rear, int data);  //������ �Է�
void dequeue(Queue** front, Queue** rear);//������ ����
void peek(Queue** front); //���� �����ɵ�����
void Allpeek(Queue** front); //��ü ������ ���
Stack* 

int main(void)
{
    Queue* front = NULL, * rear = NULL;

    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 20);
    enqueue(&front, &rear, 30);
    enqueue(&front, &rear, 40);
    Allpeek(&front);
    peek(&front);
    dequeue(&front, &rear);
    peek(&front);
    dequeue(&front, &rear);
    peek(&front);
    dequeue(&front, &rear);
    peek(&front);
    dequeue(&front, &rear);
    peek(&front);
    dequeue(&front, &rear);
    peek(&front);
    return 0;
}

Queue* getNode()
{
    Queue* node = (Queue*)malloc(sizeof(Queue));
    node->link = NULL;
    return node;
}

void enqueue(Queue** front, Queue** rear, int data)
{
    front* tmp;
    tmp = getNode();
    tmp->data = data;
}

void dequeue(Queue** front, Queue** rear)
{
  
}

void peek(Queue** front)
{
    if (*front == NULL)
    {
        printf("No Data!!!\n");
        return;
    }
    printf("������ ������ : %d\n", (*front)->data);
}

void Allpeek(Queue** front)
{
    if (*front == NULL)
    {
        printf("DATA ��¿Ϸ� \n");
        return;
    }
    else
    {
        printf("%d -> ", (*front)->data);
        Allpeek(&(*front)->link);
    }
}
