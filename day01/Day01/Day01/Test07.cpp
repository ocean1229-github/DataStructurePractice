#include <stdio.h>


void Even(int* ptr) {

    printf("\n¦��\n");


    for (int i = 0; i < sizeof(ptr); i++) {

        if (ptr[i] % 2 == 0) {
            printf("%d���� = %d\n", i, ptr[i]);
        }
    }

}


int main(void) {

    int num, a;

    printf("ũ�� �Է� : ");
    scanf_s("%d", &num);
    int* arr = new int[num];

    for (int i = 0; i < num; i++) {
        printf("���� �Է� : ");
        scanf_s("%d", &a);
        arr[i] = a;
    }

    Even(arr);
    printf("\n");


    return 0;

}