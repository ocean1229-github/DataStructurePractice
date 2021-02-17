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
    printf("�ο��� �Է� : ");
    scanf_s("%d", &su);
    return su;
}

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d��° ��� ����\n", i + 1);
        printf("�̸� �Է� : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("%d��° ����� �������� : ", i+1);
        scanf_s("%d", &pt[i].kor);
        printf("%d��° ����� �������� : ", i+1);
        scanf_s("%d", &pt[i].eng);
        printf("%d��° ����� �������� : ", i+1);
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
    puts("�̸�\t����\t����\t����\t����\t����\t");
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