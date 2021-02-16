#include<stdio.h>

struct Info {
    char name[10];
    int age;
    double height;
};

int main(void) {

    //구조체 변수
    // - 구조체(사용자 정의 자료형)를 이용하여 만든 변수...
    // - 할당받은 공간은 멤버필드 선언한 그 순서대로 차례로 자리를 잡는다...
    //선언 형식
    //        자료형 변수명;

    struct Info in = { "김민준",20,177.4 };

    //호출
    // - 구조체 공간은 각각의 공간을 구분하기위해서
    //   멤버필드명을 붙인다...
    // - 형식
    //        변수명.멤버필드명

    // . (멤버참조연산자)
    //  - 구조체 또는 공용체 공간의 멤버를 참조하는 연산자..

    //in.age = 20;

    printf("이름 : %s\n", in.name);
    printf("나이 : %d\n", in.age);
    printf("키 : %f\n", in.height);



    return 0;
}