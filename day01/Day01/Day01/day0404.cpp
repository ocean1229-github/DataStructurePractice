#include<stdio.h>

//�����ڿ��� �Է¹޾Ƽ� 
// swap �Լ��� ����...�빮�ڴ� �ҹ��ڷ�...�ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ�./..
//main���� �Է¹ް� ��� �Ҽ� �ֵ��� �ϱ�...

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

	printf("���ڿ� �Է� : ");
	gets_s(str, sizeof(str));


	//swap�Լ� ȣ��
	swap(str);

	printf("%s\n", str);

	return 0;
}
