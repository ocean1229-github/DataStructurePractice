#include<stdio.h>

typedef struct Info {
    char name[10];
    int age;
}IN;

int main(void) {

    //����ü �迭
    // - ����ü ������ ���� �迭....

    IN arr[2] /*= { {"�����",20},{"ȫ�浿",20} }*/;

    for (int i = 0; i < 2; i++) {
        printf("�̸� �Է� : ");
        scanf_s("%s", arr[i].name, sizeof(arr[i].name));
        printf("���� �Է� : ");
        scanf_s("%d", &arr[i].age);
    }


    for (int i = 0; i < 2; i++) {
        printf("�̸� : %s\n", arr[i].name);
        printf("���� : %d\n", arr[i].age);
    }

    return 0;
}