#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//대문자 개수 입력 : 100

//***랜덤 알파벳 출력 ***
//W Q B E K B F T X Q Y I C W D M
//W O R J E P Q N M Q M K N R C C
//F P R M L Z M F R E S Z G U O I
//F N Y Z S D E L B F R C A V V U
//J T I C E S N P K X S C Q Z A E
//T T A R I K J F G P V Y Z R I K
//K G X T

//A : 00개 B : 00개 D : 00개 F : 00개
//G : 00개........

//저장된 알파벳은 1줄에 16개씩 출력 
//0개는 출력 X
//개수 출력시 한줄에 4개씩 출력

int input() {
    int su;
    printf("대문자 개수 입력 : ");
    scanf_s("%d", &su);

    return su;
}

void setData(char* pt, int su) {

    for (int i = 0; i < su; i++) {
        pt[i] = rand() % 26 + 65;
    }
}

void disp(char* pt, int su) {
    puts("***랜덤 알파벳 출력 ***");
    for (int i = 0; i < su; i++) {
        printf("%-2c", pt[i]);
        if (i % 16 == 15 || i == su - 1) {
            puts("");
        }
    }
}

void answer(char* pt, int su) {
    int Alpa[26];
    for (int j = 26, int i = 0; j <= 90; j++) {
        Alpa[i] = j;                           
        i++;                                   
    }
    for (int i = 0, int k = 0; i < su; i++) {          // 전체 검사 
        k = pt[i];
        Alpa[k] = +1
    }
}

int main(void) {

    int su = input();

    char* pt = (char*)malloc(su);

    srand((unsigned)time(NULL));

    setData(pt, su);

    disp(pt, su);

    free(pt);

    return 0;
}