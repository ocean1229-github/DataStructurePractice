#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int age;
}IN;

int input() {
    int su;
    printf("사람수 입력 : ");
    scanf_s("%d", &su);
    return su;
}

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d번째 사람 정보\n", i + 1);
        printf("이름 입력 : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("나이 입력 : ");
        scanf_s("%d", &pt[i].age);
    }
}

void ageUp30Disp(IN* pt, int su) {
    puts("나이 30세 이상 회원");
    for (int i = 0; i < su; i++) {
        if (pt[i].age >= 30) {
            printf("%d번 : %s,%d세\n", i + 1, pt[i].name, pt[i].age);
        }
    }
}

int main(void) {

    int su = input();

    IN* pt = (IN*)malloc(sizeof(IN) * su);

    setData(pt, su);

    ageUp30Disp(pt, su);

    free(pt);

    return 0;
}