#include<stdio.h>
#include<string.h>

int main(void) {

	//strcmp(���ڿ��ּ�1,���ڿ��ּ�2)
	// - ���ڿ� ���Լ�
	// - ������ 0�� ��ȯ �ٸ��� 0�� �ƴѼ��� ��ȯ
	// - �������� �Ǵ��Ҷ��� !�� �ٿ��� ���´�..


	char str1[5] = "abcd";

	//str1 = "abc";

	char str2[5] = "abcd";

	int a;

	if (/*a = */!strcmp(str1, str2)) {
		printf("����\n");
	}
	else {
		puts("�ٸ���");
	}

	//printf("%d\n", a);

	return 0;
}