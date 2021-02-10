#include <stdio.h>


void Even(int* ptr) {

    printf("\n짝수\n");


    for (int i = 0; i < sizeof(ptr); i++) {

        if (ptr[i] % 2 == 0) {
            printf("%d번방 = %d\n", i, ptr[i]);
        }
    }

}


int main(void) {

    int num, a;

    printf("크기 입력 : ");
    scanf_s("%d", &num);
    int* arr = new int[num];

    for (int i = 0; i < num; i++) {
        printf("숫자 입력 : ");
        scanf_s("%d", &a);
        arr[i] = a;
    }

    Even(arr);
    printf("\n");


    return 0;

}