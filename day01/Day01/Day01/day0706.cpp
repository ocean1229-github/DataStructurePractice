#include<stdio.h>

typedef struct Info {
    char name[10];
    int age;
}IN;

int main(void) {


    IN arr[2] = { {"�����",20},{"ȫ�浿",20} };

    IN* pt = arr;

    for (int i = 0; i < 2; i++) {
        printf("�̸� : %s\n", pt[i].name);
        printf("�̸� : %s\n", (*(pt + i)).name);
        printf("�̸� : %s\n", (pt + i)->name);
        printf("���� : %d\n", pt[i].age);
    }

    return 0;
}