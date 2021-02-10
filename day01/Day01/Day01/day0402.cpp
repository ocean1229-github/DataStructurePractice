#include<stdio.h>

int main(void) {

	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);


	getchar();
	// - 문자 하나를 입력받는 표준 입력 함수
	//getchar();

	//fflush(stdin);//버퍼를 비워주는 함수 - 2010 이하

	//char ch;

	//printf("문자 입력 : ");
	//scanf_s("%c", &ch, sizeof(ch));


	//문자열 입력
	char name[10];

	printf("이름 입력 : ");
	//scanf_s("%s", name, sizeof(name));
	//gets_s(입력받을공간의 주소 , 입력받을 공간의 크기);
	// - 문자열을 입력받는 표준 입력 함수
	// - 데이터를 구분할때 오직 \n 을 기준으로 데이터를 구분한다....

	gets_s(name, sizeof(name));

	//printf("%s\n", name);
	puts(name);//문자열을 출력하는 표준 출력함수...\n포함

	//buffer
	// - 데이터의 처리 속도 , 단위 , 시간 등이 서로 다른 두 장치나
	//   프로그램 사이에서 데이터를 주고받기 위한 목적으로 사용되는 
	//   임시 기억 장소...

	//키보드 입력시의 버퍼
	// - 버퍼안에 누른 키들을 아스키코드값으로 저장하고 있다가...공백문자가 생기면
	//  공백문자까지의 데이터를 입력받아 처리한다...




	return 0;
}