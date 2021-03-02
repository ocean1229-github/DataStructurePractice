#include<stdio.h>
#include<malloc.h>

//구조체 형성
struct node
{
    int data, tmp;
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
//**front : 큐의 맨 앞쪽, rear : 큐의 맨 뒤쪽, data : 숫자데이터
{
    Queue* tmp;                 // 구조 저장할 임시변수 선언
    tmp = getNode();            
    tmp->data = data;           // 입력받은 숫자 데이터를 tmp가 가르키는 data영역에 저장한다 
    printf("data : %d\n", tmp);
    //처음        노드 한개 보냈잖아 node끼리 연결시키고 rear를 바꾼다
    if ((*front) == 0) {    
        *front = *rear = tmp;
    }
    else {
        *rear = (*rear)->link = tmp;
    }
    //두번째..
}

void dequeue(Queue** front, Queue** rear)
{
    if ((*front) == NULL) {
        printf("No Data");
        return;
    }
    else if((*front)->link == 0){
        Queue* tmp = *front;
        *front = *rear = NULL;
        free(tmp);
        return;
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
