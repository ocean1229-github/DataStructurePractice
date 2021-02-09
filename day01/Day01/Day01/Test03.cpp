#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int main(void) {
	//동적 할당 이용해서
	int *num;
	double *pi;
	char *a;
	char *str = NULL;

	struct Profile {
		char name[20];
		int age;
	};


	num = (int*)malloc(sizeof(int));

	pi = (double*)malloc(sizeof(double));

	a = (char*)malloc(sizeof(char));

	str = (char*)malloc(20);
	strcpy(str, "안녕하세요");

	struct Profile* S;
	S = (struct Profile*)malloc(sizeof(struct Profile));
	strcpy(S->name, "홍길동");
	S->age = 20;

	*num = 5;
	*pi = 3.14;
	*a = 'A';

	printf("%d\n", *num);
	printf("%lf\n", *pi);
	printf("%c\n", *a);
	printf("%s\n", str);
	printf("%s %d\n", S->name, S->age);


	free(num);
	free(pi);
	free(a);
	free(S);

	return 0;
}