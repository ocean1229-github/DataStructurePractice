#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int kor, eng, math, total, rank;
}IN;

int input();
void setData(IN* pt, int su);
void bigSmall(IN* pt, int su);
void ranking(IN* pt, int su);

int input() {
    int su;
    printf("인원수 입력 : ");
    scanf_s("%d", &su);
    return su;
}

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d번째 사람 정보\n", i + 1);
        printf("이름 입력 : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("%d번째 사람의 국어점수 : ", i+1);
        scanf_s("%d", &pt[i].kor);
        printf("%d번째 사람의 영어점수 : ", i+1);
        scanf_s("%d", &pt[i].eng);
        printf("%d번째 사람의 수학점수 : ", i+1);
        scanf_s("%d", &pt[i].math);
    }
}

void bigSmall(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        pt[i].total = pt[i].kor + pt[i].eng + pt[i].math;
    }

void ranking(IN* pt, int su) {
    int i, j;
    for (int i = 0; i < su; i++) {
        pt[i].rank = 1;
    }
    for (i = 0; i < su; i++) {
        for (j = 0; j < su; j++) {
            if (pt[i].total < pt[j].total) {
                ++pt[i].rank;
            }
        }
    }
}

void gradeDisp(IN* pt, int su) {
    puts("이름\t국어\t영어\t수학\t총점\t순위\t");
    for (int i = 0; i < su; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].total, pt[i].rank);
    }   
}

int main(void) {

    int su = input();

    IN* pt = (IN*)malloc(sizeof(IN) * su);  

    setData(pt, su);

    bigSmall(pt, su);

    ranking(pt, su);

    gradeDisp(pt, su);

    free(pt);

    return 0;
}