#include<stdio.h>
#include<malloc.h>
#include<string.h>//���ڿ� ���� �Լ����� ���ǵ� �������...

int main(void) {

	//�����Ҵ� �̿��ؼ�....

	// 5 �����ϰ� ���
	int* pt = (int*)malloc(sizeof(int));

	if (pt != NULL) {
		*pt = 5;

		printf("%d\n", *pt);

		free(pt);
	}

	// 3.14 �����ϰ� ���

	double* p1 = (double*)malloc(sizeof(double));

	*p1 = 3.14;

	printf("%f\n", *p1);

	free(p1);

	// 'A'�����ϰ� ���

	char* p2 = (char*)malloc(sizeof(char));

	*p2 = 'A';

	printf("%c\n", *p2);

	free(p2);

	// "�ȳ��ϼ���" �����ϰ� ���

	//strcpy_s(�����Ұ����� �ּ�, �����ҹ��ڿ��� ũ�� , �����ҹ��ڿ��� �ּ�); - ���ڿ� ����

	//strlen(���ڿ��ּ�) - ���ڿ��� ���̸� ���ϴ� �Լ� NUL���� ����

	char* p3 = (char*)malloc(strlen("�ȳ��ϼ���") + 1);

	strcpy_s(p3, strlen("�ȳ��ϼ���") + 1, "�ȳ��ϼ���");

	puts(p3);

	free(p3);


	//{ "ȫ�浿" , 20 } �����ϰ� ���

	struct Info {
		char name[10];
		int age;
	};

	struct Info* in = (struct Info*)malloc(sizeof(struct Info));

	strcpy_s(in->name, strlen("ȫ�浿") + 1, "ȫ�浿");

	in->age = 20;

	printf("�̸� : %s\n", in->name);
	printf("���� : %d\n", in->age);

	free(in);


	return 0;
} //���� ���ڿ� ���� �սô�...����..