#include<stdio.h>

typedef struct Info {
    char name[10];
    int age;
}IN;

int main(void) {


    IN arr[2] = { {"김민준",20},{"홍길동",20} };

    IN* pt = arr;

    for (int i = 0; i < 2; i++) {
        printf("이름 : %s\n", pt[i].name);
        printf("이름 : %s\n", (*(pt + i)).name);
        printf("이름 : %s\n", (pt + i)->name);
        printf("나이 : %d\n", pt[i].age);
    }

    return 0;
}