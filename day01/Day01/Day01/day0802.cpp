#include<stdio.h>
#include<malloc.h>

int main(void) {

    int house[5] = {0, };

    while (1) {
        char menu_select;
        printf("���� ������ : 5\n1.�Խ� 2.��� 3.���� 4.���� : ");
        scanf_s("%c", &menu_select); 

        printf("�� ���� ���α׷�\n");
    
        switch (menu_select) {
        case '1':
            int inNumber;
            printf("�Խ��Ͻ� ���� ��ȣ�� : ");
            scanf_s("%d", &inNumber);

            if (house[inNumber] == 0) {
                printf("%dȣ�ǿ� �Խ��ϼ̽��ϴ�\n", inNumber);    
                house[inNumber - 1] = 1;
            }
            else {
                printf("���� ������� ���Դϴ�.\n");
            }
            break;

        case '2':
            int outNumber;
            printf("����Ͻ� ���� ��ȣ�� : ");
            scanf_s("%d", &outNumber);

            if (house[outNumber] == 1) {
                printf("%dȣ�ǿ��� ����ϼ̽��ϴ�.\n", outNumber);
                house[outNumber - 1] = 0;
            }
            else {
                printf("����Դϴ�\n");
            }
            break;

        case '3':
            for (int i = 0; i < 5; i++) {
                printf("%dȣ�� - ", i + 1);
                if (house[i] == 1) {
                    printf("�Խ�\n");
                }
                else {
                    printf("���\n");
                }
            }
            break;

        case '4':
            printf("���α׷��� �����մϴ�.\n");
            return 0;

        default:
            printf("�߸� �Է��ϼ̽��ϴ�\n");
            break;
        }
    }
}
