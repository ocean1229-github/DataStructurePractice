#include<stdio.h>
#include<malloc.h>
#include<Windows.h>

#define IN 1
#define OUT 0

int input(const char* msg);
char* setRooms(int su);
void menu(char* pt, int su);
void esc(char* pt);
void disp(char* pt, int su);
void checkIn(char* pt, int su);
void checkOut(char* pt, int su);
int roomInput(const char* msg, int su);

int main(void) {

    int su = input("�� ���� �Է�");

    char* pt = setRooms(su);

    menu(pt, su);

    return 0;
}

int input(const char* msg) {
    int su;
    printf("%s : ", msg);
    scanf_s("%d", &su);
    return su;
}

char* setRooms(int su) {
    char* pt = (char*)malloc(su);

    for (int i = 0; i < su; i++) {
        pt[i] = OUT;
    }

    return pt;
}

void menu(char* pt, int su) {

    system("pause");
    system("cls");

    while (1) {
        int select = input("1.�Խ� 2.��� 3.���� 4.����");

        switch (select) {
        case 1:
            checkIn(pt, su);
            break;
        case 2:
            checkOut(pt, su);
            break;
        case 3:
            disp(pt, su);
            break;
        case 4:
            esc(pt);
        default:
            printf("�߸��� �޴� �Է�!!\n");
        }

        system("pause");
        system("cls");
    }
}

void esc(char* pt) {
    puts("���α׷��� ����˴ϴ�.");
    free(pt);
    exit(0);//���α׷� ���� �Լ�
}

void disp(char* pt, int su) {
    puts("### �� ��Ȳ ###");
    for (int i = 0; i < su; i++) {
        if (pt[i] == IN) {
            printf("%dȣ�� - �Խ���\n", i + 1);
        }
        else {
            printf("%dȣ�� - ��  ��\n", i + 1);
        }
    }
    puts("");
}

void checkIn(char* pt, int su) {
    disp(pt, su);
    int room = roomInput("�Խ��� ���ȣ �Է�", su);

    if (pt[room - 1] == IN) {
        printf("%dȣ���� �Խ����Դϴ�.\n", room);
    }
    else {
        pt[room - 1] = IN;
        printf("%dȣ�ǿ� �Խ��ϼ̽��ϴ�.\n", room);
    }
}
void checkOut(char* pt, int su) {
    disp(pt, su);
    int room = roomInput("����� ���ȣ �Է�", su);

    if (pt[room - 1] == OUT) {
        printf("%dȣ���� ����Դϴ�.\n", room);
    }
    else {
        pt[room - 1] = OUT;
        printf("%dȣ�ǿ� ����ϼ̽��ϴ�.\n", room);
    }
}

int roomInput(const char* msg, int su) {
    int room;
    do {
        room = input(msg);
    } while (room < 1 || room > su);

    return room;
}
