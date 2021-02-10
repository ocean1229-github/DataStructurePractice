#include<stdio.h>
#include<Windows.h>	//윈도우 제어 함수들이 정의된 헤더파일

// # 은 전처리기라고 한다
// 컴파일 되기전에 먼저 처리되어야할 명령

// #include
// -컴파일 하기 이전에 먼저 포함시켜야 할 헤더파일을 적는 명령

//#define 매크로 대체 문자열
// -컴파일 하기 이전에 매크로가 적힌 부분을 대체불가열로 치환하는 명령어
// - 프로그램에서 의미를 가지고 있는 데이터로써 데이터가 변경이 되지 않는 데이터를
// 보다 쉽게 구분하기 위해서 사용된다

#define MAXINWON 29
#define MIN 0 

#define P printf()

int main(void) {
	int a = 10;

	int* pt = &a;

	// 리터널 상수

	// 심볼릭 상수

	//exit() 
	// - 프로그램 종료 함수
	// - 0 - 정상종료, 0이 아닌 수 - 비정상 종료(errno)

	return 0;
}