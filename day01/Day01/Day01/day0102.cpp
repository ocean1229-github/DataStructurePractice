#include<stdio.h>

#define MAXINWON 29
#define MIN 0

#define P printf(

#define PI 3.141592

//char ch = '\0';



int main(void) {

	int arr[5] = { NULL };

	if (arr[0]) {
		printf("있다.");
	}
	else {
		printf("없다");
	}

	//NULL - NULL포인터
	// - 0번째 주소값은 절대 공간을 할당받을수 없다...
	// - 디폴트값
	// - 0

	//NULL

	//프로그래밍코드는 가독성....

	//#define 매크로 대체문자열
	// - 컴파일 하기 이전에 매크로가 적힌 부분을 대체문자열로 치환하는 명령...
	// - 프로그램에서 의미를 가지고 있는 데이터로써 데이터가 변경이 되지 않는 데이터를
	//   보다 쉽게 구분하기위해서 사용된다...

	//const 상수

	P"최대 인원 :  %d\n", MAXINWON);
	//printf("최대 인원 :  %d\n", 29);
	printf("최대 인원 :  %d\n", 29);

	return 0;
}