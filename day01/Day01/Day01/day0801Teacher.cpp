#include<stdio.h>
#include<malloc.h>

typedef struct Student {
    char name[10];
    int kor, eng, math, tot, rank;
}ST;

int input(const char* msg); //������ �Է¹޴� �Լ�  
void setData(ST* pt, int su);   
void setRank(ST* pt, int su);


int input(const char* msg) {        ///�̷������� ��� �Լ��� ���� �� �ִ�.
    int su;
    printf("%s : ", msg);
    scanf_s("%d", &su);

    return su;
}

//���⼭ �̼� �ϳ�
//���� ���� �ִ� input�� �ϼ����� �ƴ�
//���� �Է¹޴� �κп����� ��� input�Լ� ��밡���ؾ��� 
//���� ���� �������� �Է¹������� input�Լ��� ����Ҽ� �־�� �Ѵٶ�°��� ����?

void setData(ST* pt, int su) {

    char buf[128] = { NULL };
    for (int i = 0; i < su; i++) {
        printf("%d��° ��� ����\n", i + 1);
        printf("����� �̸� : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));


        pt[i].kor = input("���� ����");
        pt[i].eng = input("���� ����");
        pt[i].math = input("���� ����");

        //sprintf_s(buf, sizeof(buf), "%d��° ����� ���� ���� : ", i + 1);
        //printf("%s", buf);
        //printf("���� ���� : ");
        //scanf_s("%d", &pt[i].kor);
        //printf("���� ���� : ");
        //scanf_s("%d", &pt[i].eng);
        //printf("���� ���� : ");
        //scanf_s("%d", &pt[i].math);
        pt[i].tot = pt[i].kor + pt[i].eng + pt[i].math;
        //pt[i].rank = 1;
    }

    setRank(pt, su);
}

void setRank(ST* pt, int su) {
    //��ŷ ���ϱ�
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
    puts("�̸�\t����\t����\t����\t����\t����");
    for (int i = 0; i < su; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].tot, pt[i].rank);
    }
}

int main(void) {

    int su = input("�ο� �� �Է�");

    ST* pt = (ST*)malloc(sizeof(ST) * su);

    setData(pt, su);

    disp(pt, su);

    free(pt);

    return 0;
}