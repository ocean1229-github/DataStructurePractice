#include<stdio.h>
#include<malloc.h>


int input() {
    int su;
    printf("���� �Է� : ");
    scanf_s("%d", &su);

    return su;
}

void setData(int* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d���� �Է� : ", i);
        scanf_s("%d", pt + i);
    }
}

void evenDisp(int* pt, int su) {
    puts("¦�� ���");
    for (int i = 0; i < su; i++) {
        if (pt[i] % 2 == 0) {
            printf("%d���� : %d\n", i, pt[i]);
        }
    }
}

int main(void) {



    //ũ�� �Է�
    int su = input();

    //���� �Ҵ�
    int* pt = (int*)malloc(sizeof(int) * su);

    //������ �Է�
    setData(pt, su);

    //¦�� ���
    evenDisp(pt, su);

    //���� ����
    free(pt);

    return 0;
}