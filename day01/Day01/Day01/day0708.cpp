#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int kor, eng, math, total, rank;
}IN;

int input() {
    int su;
    printf("인원수 입력 : ");
    scanf_s("%d", &su);
    return su;
}

//여기서 미션 하나
//저기 위에 있는 input은 완성형이 아님
//정수 입력받는 부분에서는 모두 input함수 사용가능해야함 ㅇㅋ???아 저기서 한번에 input받아라는거죠?ㄴㄴ
//국어 영어 수학점수 입력받을때도 input함수를 사용할수 있어야 한다라는거임
//아 이해했어요 input함수 이용해서 저거 다 받아라는 거죠
//본인이 지금 왠지 인풋함수 안에서 국어영어 수학점수 입력받을꺼 같은 느낌이지? input함수 안에서 가 아니라 
//input함수를 통해서 입력받으라는거임 아아 이해했어요 그럼 해보시오근데 그 저기 rank 순위 한느거 모르겠는데 팁있나요 ... 호텔아님 팁없음ㅋㅋㅋㅋㅋㅋㅋ일단 위에 미션 부터 해결하라는거져
//랭크부터 하는게 빠를껄? 넹 해보겠습니당

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d번째 사람 정보\n", i + 1);
        printf("이름 입력 : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("%d번째 사람의 국어점수 : ");
        scanf_s("%d", &pt[i].kor);
        printf("%d번째 사람의 영어점수 : ");
        scanf_s("%d", &pt[i].eng);
        printf("%d번째 사람의 수학점수 : ");
        scanf_s("%d", &pt[i].math);
    }
}

void bigSmall(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        pt[i].total = pt[i].kor + pt[i].eng + pt[i].math;
    }

    for (int i = -1; i < su; i++) {
        if (pt[i] < pt[i+1]) {                    
            
        }
    }
}

void gradeDisp(IN* pt, int su) {
    puts("이름 국어 영어 수학 총점 순위");
    for (int i = 0; i < su; i++) {
        printf("%s %d %d %d %d %d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].total,  pt[i].rank);

    }   
}

int main(void) {

    int su = input();

    IN* pt = (IN*)malloc(sizeof(IN) * su);

    setData(pt, su);

    bigSmall(pt, su);

    gradeDisp(pt, su);

    free(pt);

    return 0;
}