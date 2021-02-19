#include<stdio.h>
#include<malloc.h>

int main(void) {

    int house[5] = { NULL };

    while (1) {
        char menu_select;
        printf("방의 갯수는 : 5\n1.입실 2.퇴실 3.보기 4.종료 : ");
        scanf_s("%c", &menu_select);

        printf("방 관리 프로그램\n");
    
        switch (menu_select) {
        case '1':
            int inNumber;
            printf("입실하실 방의 번호는 : ");
            scanf_s("%d", &inNumber);

            if (house[inNumber] == NULL) {
                printf("%d호실에 입실하셨습니다\n", inNumber);    
                return house[inNumber] = 1;
            }
            else {
                printf("현재 사용중인 방입니다.\n");
            }
            break;

        case '2':
            int outNumber;
            printf("퇴실하실 방의 번호는 : ");
            scanf_s("%d", &outNumber);

            if (house[outNumber] == NULL) {
                printf("빈방입니다\n");
            }
            else {
                printf("%d호실에서 퇴실하셨습니다.\n", outNumber);
            }
            break;

        case '3':
            for (int i = 0; i < 5; i++) {
                printf("%d호실 - ", i + 1);
                if (house[i] == !NULL) {
                    printf("입실\n");
                }
                else {
                    printf("빈방\n");
                }
            }
            break;

        case '4':
            printf("프로그램을 종료합니다.\n");
            return 0;

        default:
            printf("잘못 입력하셨습니다\n");
        }
    }
}
