#include<stdio.h>

typedef struct Info {
    char name[10];
    int age;
}IN;

int main(void) {

    //구조체 배열
    // - 구조체 가지고 만든 배열....

    IN arr[2] /*= { {"김민준",20},{"홍길동",20} }*/;

    for (int i = 0; i < 2; i++) {
        printf("이름 입력 : ");
        scanf_s("%s", arr[i].name, sizeof(arr[i].name));
        printf("나이 입력 : ");
        scanf_s("%d", &arr[i].age);
    }


    for (int i = 0; i < 2; i++) {
        printf("이름 : %s\n", arr[i].name);
        printf("나이 : %d\n", arr[i].age);
    }

    return 0;
}