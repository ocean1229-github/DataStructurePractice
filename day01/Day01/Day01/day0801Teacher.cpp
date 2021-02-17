#include<stdio.h>
#include<malloc.h>

typedef struct Student {
    char name[10];
    int kor, eng, math, tot, rank;
}ST;

int input(const char* msg); //정수를 입력받는 함수  
void setData(ST* pt, int su);   
void setRank(ST* pt, int su);


int input(const char* msg) {        ///이런식으로 모든 함수를 받을 수 있다.
    int su;
    printf("%s : ", msg);
    scanf_s("%d", &su);

    return su;
}

//여기서 미션 하나
//저기 위에 있는 input은 완성형이 아님
//정수 입력받는 부분에서는 모두 input함수 사용가능해야함 
//국어 영어 수학점수 입력받을때도 input함수를 사용할수 있어야 한다라는거임 ㅇㅋ?

void setData(ST* pt, int su) {

    char buf[128] = { NULL };
    for (int i = 0; i < su; i++) {
        printf("%d번째 사람 정보\n", i + 1);
        printf("사람의 이름 : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));


        pt[i].kor = input("국어 점수");
        pt[i].eng = input("영어 점수");
        pt[i].math = input("수학 점수");

        //sprintf_s(buf, sizeof(buf), "%d번째 사람의 국어 점수 : ", i + 1);
        //printf("%s", buf);
        //printf("국어 점수 : ");
        //scanf_s("%d", &pt[i].kor);
        //printf("영어 점수 : ");
        //scanf_s("%d", &pt[i].eng);
        //printf("수학 점수 : ");
        //scanf_s("%d", &pt[i].math);
        pt[i].tot = pt[i].kor + pt[i].eng + pt[i].math;
        //pt[i].rank = 1;
    }

    setRank(pt, su);
}

void setRank(ST* pt, int su) {
    //랭킹 구하기
    for (int i = 0; i < su; i++) {
        pt[i].rank = 1;
        for (int j = 0; j < su; j++) {
            if (pt[i].tot < pt[j].tot) {
                pt[i].rank++;
            }
        }
    }
}

void disp(ST* pt, int su) {
    puts("이름\t국어\t영어\t수학\t총점\t순위");
    for (int i = 0; i < su; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].tot, pt[i].rank);
    }
}

int main(void) {

    int su = input("인원 수 입력");

    ST* pt = (ST*)malloc(sizeof(ST) * su);

    setData(pt, su);

    disp(pt, su);

    free(pt);

    return 0;
}