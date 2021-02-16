#include<stdio.h>


//구조체 - 사용자 정의 자료형
// - 같은 성격의 데이터들을 보다 쉽게 저장하고 관리하기위해서 사용한다..
// - 구조체 안에 저장되는 데이터를 멤버 , 필드 , 멤버필드 , 멤버변수.....
// - 전역과 지역에 대한 개념을 가지고 있다...

//구조체 정의
//        struct 구조체명 {
//                멤버 정의...
//                일반 데이터 공간 선언하듯이 정의하면 된다....
//      자기 자신과 같은 형태의 변수 또는 배열은 정의할수 없다...
//                단, 자기 자신을 가리키는 포인터형은 가능하다...자기참조 구조체..
//        };

//사람의 정보
// - 이름 , 나이
struct Info {
    char name[10];
    int age;
};

void Func();

int main(void) {

    //struct Info in;
    //struct Info arr[5];
    //struct Info* pt;

    //sizeof(struct Info);



    return 0;
}

void Func() {
    struct Info in;
}