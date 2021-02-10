#include<stdio.h>
#include<malloc.h>
#include<string.h>//문자열 관리 함수들이 정의된 헤더파일...

int main(void) {

	//동적할당 이용해서....

	// 5 저장하고 출력
	int* pt = (int*)malloc(sizeof(int));

	if (pt != NULL) {
		*pt = 5;

		printf("%d\n", *pt);

		free(pt);
	}

	// 3.14 저장하고 출력

	double* p1 = (double*)malloc(sizeof(double));

	*p1 = 3.14;

	printf("%f\n", *p1);

	free(p1);

	// 'A'저장하고 출력

	char* p2 = (char*)malloc(sizeof(char));

	*p2 = 'A';

	printf("%c\n", *p2);

	free(p2);

	// "안녕하세요" 저장하고 출력

	//strcpy_s(저장할공간의 주소, 복사할문자열의 크기 , 복사할문자열의 주소); - 문자열 복사

	//strlen(문자열주소) - 문자열의 길이를 구하는 함수 NUL문자 제외

	char* p3 = (char*)malloc(strlen("안녕하세요") + 1);

	strcpy_s(p3, strlen("안녕하세요") + 1, "안녕하세요");

	puts(p3);

	free(p3);


	//{ "홍길동" , 20 } 저장하고 출력

	struct Info {
		char name[10];
		int age;
	};

	struct Info* in = (struct Info*)malloc(sizeof(struct Info));

	strcpy_s(in->name, strlen("홍길동") + 1, "홍길동");

	in->age = 20;

	printf("이름 : %s\n", in->name);
	printf("나이 : %d\n", in->age);

	free(in);


	return 0;
} //내일 문자열 설명 합시다...내일..