#include<stdio.h>

typedef struct Info {
    char name[10];
    int age;
}IN;


int main(void) {

    IN in = { "김민준",20 };

    //구조체 포인터
    // - 구조체 공간의 주소값을 저장하는 포인터 ...

    IN* pt = &in;


    //(*pt).name

    //연산자 우선순위로 인하여 괄호를 쳐주어야 한다...
    //(*pt).age = 20;
    //복잡해지면 괄호 처리가 불편하다....
    // -> == (* ).
    // - 애로우연산자 , 간접멤버 참조 연산자
    // - 주소값에 해당하는 구조체 또는 공용체 공간의 멤버를 참조하는 연산자...

    printf("이름 : %s\n", pt->name);
    printf("나이 : %d\n", (*pt).age);


    return 0;
}
