#include<stdio.h>
#include<malloc.h>

int main(void) {

    int house[5] = { NULL };

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

            if (house[inNumber] == NULL) {
                printf("%dȣ�ǿ� �Խ��ϼ̽��ϴ�\n", inNumber);    
                return house[inNumber] = 1;
            }
            else {
                printf("���� ������� ���Դϴ�.\n");
            }
            break;

        case '2':
            int outNumber;
            printf("����Ͻ� ���� ��ȣ�� : ");
            scanf_s("%d", &outNumber);

            if (house[outNumber] == NULL) {
                printf("����Դϴ�\n");
            }
            else {
                printf("%dȣ�ǿ��� ����ϼ̽��ϴ�.\n", outNumber);
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
            printf("���α׷��� �����մϴ�.\n");
            return 0;

        default:
            printf("�߸� �Է��ϼ̽��ϴ�\n");
        }
    }
}
