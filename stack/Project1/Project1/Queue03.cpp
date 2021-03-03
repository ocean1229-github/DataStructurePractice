#include<stdio.h>
#include<malloc.h>

//구조체 형성
struct node
{
    int data;
    struct node* link;
};
typedef struct node Queue;

Queue* getNode();//노드 생성
void enqueue(Queue** front, Queue** rear, int data);  //데이터 입력
void dequeue(Queue** front, Queue** rear);//데이터 삭제
void peek(Queue** front); //먼저 삭제될데이터
void Allpeek(Queue** front); //전체 데이터 출력

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
    printf("삭제될 데이터 : %d\n", (*front)->data);
}

void Allpeek(Queue** front)
{
    if (*front == NULL)
    {
        printf("DATA 출력완료 \n");
        return;
    }
    else
    {
        printf("%d -> ", (*front)->data);
        Allpeek(&(*front)->link);
    }
}
