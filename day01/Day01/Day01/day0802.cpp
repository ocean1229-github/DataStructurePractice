#include<stdio.h>
#include<malloc.h>

int main(void) {

    int house[5] = { NULL };

    while (1) {
        int menu_select;
        printf("���� ������ : 5\n1.�Խ� 2.��� 3.���� 4.���� : ");
        scanf_s("%d", &menu_select);

        printf("�� ���� ���α׷�\n");
    
        switch (menu_select) {
        case '1':
            int inNumber;
            printf("�Խ��Ͻ� ���� ��ȣ�� : ");
            scanf_s("%d", &inNumber);

            if (house[inNumber] == NULL) {
                printf("%dȣ�ǿ� �Խ��ϼ̽��ϴ�", inNumber+1);
            }
            else {
                printf("���� ������� ���Դϴ�.");
            }
            break;

        case '2':
            int outNumber;
            printf("����Ͻ� ���� ��ȣ�� : ");
            scanf_s("%d", &outNumber);

            if (house[outNumber] == NULL) {
                printf("����Դϴ�");
            }
            else {
                printf("%dȣ�ǿ��� ����ϼ̽��ϴ�.", outNumber);
            }
            break;

        case '3':
            for (int i = 0; i < 5; i++) {
                printf("%dȣ�� - ", i + 1);
                if (house[i] == !NULL) {
                    printf("�Խ�\n");
                }
                else {
                    printf("���\n");
                }
            }
            break;

        case '4':
            printf("���α׷��� �����մϴ�.");
            return 0;

        default:
            printf("�߸� �Է��ϼ̽��ϴ�\n");
        }
    }
}
