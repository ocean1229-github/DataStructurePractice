#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int kor, eng, math, total, rank;
}IN;

int input() {
    int su;
    printf("�ο��� �Է� : ");
    scanf_s("%d", &su);
    return su;
}

//���⼭ �̼� �ϳ�
//���� ���� �ִ� input�� �ϼ����� �ƴ�
//���� �Է¹޴� �κп����� ��� input�Լ� ��밡���ؾ��� ����???�� ���⼭ �ѹ��� input�޾ƶ�°���?����
//���� ���� �������� �Է¹������� input�Լ��� ����Ҽ� �־�� �Ѵٶ�°���
//�� �����߾�� input�Լ� �̿��ؼ� ���� �� �޾ƶ�� ����
//������ ���� ���� ��ǲ�Լ� �ȿ��� ����� �������� �Է¹����� ���� ��������? input�Լ� �ȿ��� �� �ƴ϶� 
//input�Լ��� ���ؼ� �Է¹�����°��� �ƾ� �����߾�� �׷� �غ��ÿ��ٵ� �� ���� rank ���� �Ѵ��� �𸣰ڴµ� ���ֳ��� ... ȣ�ھƴ� ���������������������ϴ� ���� �̼� ���� �ذ��϶�°���
//��ũ���� �ϴ°� ������? �� �غ��ڽ��ϴ�

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d��° ��� ����\n", i + 1);
        printf("�̸� �Է� : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("%d��° ����� �������� : ");
        scanf_s("%d", &pt[i].kor);
        printf("%d��° ����� �������� : ");
        scanf_s("%d", &pt[i].eng);
        printf("%d��° ����� �������� : ");
        scanf_s("%d", &pt[i].math);
    }
}

void bigSmall(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        pt[i].total = pt[i].kor + pt[i].eng + pt[i].math;
    }

    for (int i = -1; i < su; i++) {
        if (pt[i] < pt[i+1]) {                    
            
        }
    }
}

void gradeDisp(IN* pt, int su) {
    puts("�̸� ���� ���� ���� ���� ����");
    for (int i = 0; i < su; i++) {
        printf("%s %d %d %d %d %d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].total,  pt[i].rank);

    }   
}

int main(void) {

    int su = input();

    IN* pt = (IN*)malloc(sizeof(IN) * su);

    setData(pt, su);

    bigSmall(pt, su);

    gradeDisp(pt, su);

    free(pt);

    return 0;
}