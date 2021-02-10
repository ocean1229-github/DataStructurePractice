#include<stdio.h>
#include<malloc.h>


int input() {
    int su;
    printf("정수 입력 : ");
    scanf_s("%d", &su);

    return su;
}

void setData(int* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d번방 입력 : ", i);
        scanf_s("%d", pt + i);
    }
}

void evenDisp(int* pt, int su) {
    puts("짝수 출력");
    for (int i = 0; i < su; i++) {
        if (pt[i] % 2 == 0) {
            printf("%d번방 : %d\n", i, pt[i]);
        }
    }
}

int main(void) {



    //크기 입력
    int su = input();

    //공간 할당
    int* pt = (int*)malloc(sizeof(int) * su);

    //데이터 입력
    setData(pt, su);

    //짝수 출력
    evenDisp(pt, su);

    //공간 해제
    free(pt);

    return 0;
}