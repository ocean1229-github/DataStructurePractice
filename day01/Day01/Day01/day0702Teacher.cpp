#include<stdio.h>
#include<time.h>

typedef struct Info {
    char name[10];
    int age;
    double height;
}IN, * PIN;

//typedef struct Info IN;
//typedef struct Info* PIN;

//struct Info in;
IN in;

//typedef 자료형 별칭,별칭,별칭...;
// - 자료형에 별칭을 붙이는 키워드..
// - 같은 형태와 같은 성격의 데이터들을 보다 쉽게 구분하고 관리하기 위해서 사용한다...

typedef int AGE, NUM;
typedef int SEL;
typedef char GRA;

AGE age;
NUM num;
SEL select;
NUM no;
GRA grade;

//int age;
//int num;
//int select;
//int no;
//int grade;

int main(void) {

    int a, arr[10], * pt;


    return 0;
}