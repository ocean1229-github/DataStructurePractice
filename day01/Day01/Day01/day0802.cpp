#include<stdio.h>
#include<malloc.h>

typedef struct Room {
    int in, out;
}Rm;

int input(const char* msg); //������ �Է¹޴� �Լ�

int madeRoom(const char* msg) {
    int nullRoom;
    printf("%s : ", msg);
    scanf("%d", &nullRoom);

    return nullRoom;
}

int main(void) {

}