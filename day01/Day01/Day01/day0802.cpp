#include<stdio.h>
#include<malloc.h>

typedef struct Room {
    int in, out;
}Rm;

int input(const char* msg); //정수를 입력받는 함수

int madeRoom(const char* msg) {
    int nullRoom;
    printf("%s : ", msg);
    scanf("%d", &nullRoom);

    return nullRoom;
}

int main(void) {

}