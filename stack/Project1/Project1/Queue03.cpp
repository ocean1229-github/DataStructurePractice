#include<stdio.h>
#include<malloc.h>

//����ü ����
struct node
{
    int data;
    struct node* link;
};
typedef struct node Queue;

Queue* getNode();//��� ����
void enqueue(Queue** front, Queue** rear, int data);  //������ �Է�
void dequeue(Queue** front, Queue** rear);//������ ����
void peek(Queue** front); //���� �����ɵ�����
void Allpeek(Queue** front); //��ü ������ ���

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
    Queue* tmp = getNode();
    tmp->data = data;
    if (!*front) {
        *front = *rear = tmp;
    }
    else {
        *rear = (*rear)->link = tmp;
    }
}

void dequeue(Queue** front, Queue** rear)
{
    if (!*front) {
        printf("No Data!!!\n");
    }
    else if ((*front)->link) {
        Queue* tmp = *front;
        *front = (*front)->link;
        free(tmp);
    }
    else {
        free(*front);
        *front = *rear = NULL;
        //Queue* tmp = *front;
        //*front = (*front)->link;
        //free(tmp);
        //*rear = NULL;
    }
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
