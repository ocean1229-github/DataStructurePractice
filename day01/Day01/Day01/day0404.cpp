#include<stdio.h>

//영문자열을 입력받아서 
// swap 함수를 만들어서...대문자는 소문자로...소문자를 대문자로 변환하는 함수./..
//main에서 입력받고 출력 할수 있도록 하기...

void swap(char* str) {

	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		i++;
	}

}

int main(void) {

	char str[100] = { NULL };

	printf("문자열 입력 : ");
	gets_s(str, sizeof(str));


	//swap함수 호출
	swap(str);

	printf("%s\n", str);

	return 0;
}
