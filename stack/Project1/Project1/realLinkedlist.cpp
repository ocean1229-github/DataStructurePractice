#include<stdio.h>
#include<malloc.h>

//디버깅 시작
// F5 - 실행
// F10 - 한줄씩 - 함수단위
// F11 - 한줄씩 - 코드한줄단위

//브레이크포인트 설정과 해제
// F9 , 마우스 클릭

//디버깅 종료
// Shift + F5

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
    //임시 포인터 변수 tmp 선언하면서 getNode함수의 반환값 저장.
    Stack* tmp = getNode();
    //tmp가 가리키는 노드의 data필드에 data저장.
    tmp->data = data;
    //tmp의 링크필드에 main의 탑이 가지고 잇는 주소값 저장.
    tmp->link = *top;
    //main의 top에 tmp가 가지고 있는 주소값 저장.
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
        puts("데이터가 없습니다!");
        return;
    }
    printf("%d\n", (*top)->data);
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