#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�빮�� ���� �Է� : 100

//***���� ���ĺ� ��� ***
//W Q B E K B F T X Q Y I C W D M
//W O R J E P Q N M Q M K N R C C
//F P R M L Z M F R E S Z G U O I
//F N Y Z S D E L B F R C A V V U
//J T I C E S N P K X S C Q Z A E
//T T A R I K J F G P V Y Z R I K
//K G X T

//A : 00�� B : 00�� D : 00�� F : 00��
//G : 00��........

//����� ���ĺ��� 1�ٿ� 16���� ��� 


//0���� ��� X
//���� ��½� ���ٿ� 4���� ���
//26��¥�� �迭 X

int input() {
    int su;
    printf("�빮�� ���� �Է� : ");
    scanf_s("%d", &su);

    return su;
}

void setData(char* pt, int su) {

    for (int i = 0; i < su; i++) {
        pt[i] = rand() % 26 + 65;
    }
}

void disp(char* pt, int su) {
    puts("***���� ���ĺ� ��� ***");
    for (int i = 0; i < su; i++) {
        printf("%-2c", pt[i]);
        if (i % 16 == 15 || i == su - 1) {
            puts("");
        }
    }
}

void eaDisp(char* pt, int su) {
    puts("***���ĺ� ���� ��� ***");
    int line = 0;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        int cnt = 0;
        for (int i = 0; i < su; i++) {
            if (ch == pt[i]) {
                cnt++;
            }
        }

        if (cnt != 0) {
            printf("%-2c:%2d�� ", ch, cnt);
            line++;
            if (line % 4 == 0 || ch == 'Z') {
                puts("");
            }
        }
        else if (ch == 'Z' && line % 4 != 0) {
            puts("");
        }
    }

}

int main(void) {
         
    int su = input();

    char* pt = (char*)malloc(su);

    srand((unsigned)time(NULL));

    setData(pt, su);

    disp(pt, su);

    eaDisp(pt, su);

    free(pt);

    return 0;
}