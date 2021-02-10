#include<stdio.h>
#include<string.h>

int main(void) {

	//strcmp(문자열주소1,문자열주소2)
	// - 문자열 비교함수
	// - 같으면 0을 반환 다르면 0이 아닌수를 반환
	// - 같은지를 판단할때는 !를 붙여서 적는다..


	char str1[5] = "abcd";

	//str1 = "abc";

	char str2[5] = "abcd";

	int a;

	if (/*a = */!strcmp(str1, str2)) {
		printf("같다\n");
	}
	else {
		puts("다르다");
	}

	//printf("%d\n", a);

	return 0;
}