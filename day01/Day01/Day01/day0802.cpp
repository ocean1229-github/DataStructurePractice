#include<stdio.h>

typedef struct WelcomeHotel {
    int roomSu, roomNumber, hotel[5];
}WH;

void made_room(void) {
    for (int i = 0; i < 5; i++)
    {

    }
}

void in_room() {

}

void out_room() {
    
}

void see_room() {

}

int input(const char* msg) {
    int roomSu;
    printf("%s : ", msg);
    scanf_s("%d", &roomSu);

    return roomSu; 
}

void select(){
    int menu_select;
    menu_select = input("1.입실 2.퇴실 3.보기 4.종료 : ");
    scanf_s("%d", &menu_select);

    return menu_select;
}

int main(void) {

    printf("방 관리 프로그램\n");

    while (1) {
        printf("\n방의 갯수는 : %d\n",roomSu);

        select();

        switch (menu_select) {
        case '1':
            in_room();
            break;

        case '2':
            out_room();
            break;

        case '3':
            see_room(); 
            break;

        case '4':
            return 0;

        default:
            printf("잘못 입력하셨습니다\n");
        }
    }
}
