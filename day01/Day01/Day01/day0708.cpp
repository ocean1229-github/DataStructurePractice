#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int kor, eng, math, total, rank;
}IN;

int input();
void setData(IN* pt, int su);
void bigSmall(IN* pt, int su);
void ranking(IN* pt, int su);

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
        printf("%d번째 사람의 국어점수 : ", i+1);
        scanf_s("%d", &pt[i].kor);
        printf("%d번째 사람의 영어점수 : ", i+1);
        scanf_s("%d", &pt[i].eng);
        printf("%d번째 사람의 수학점수 : ", i+1);
        scanf_s("%d", &pt[i].math);
    }
}

void bigSmall(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        pt[i].total = pt[i].kor + pt[i].eng + pt[i].math;
    }//이거 차라리 데이터 입력받을때 가는게 안나음?
    //저는 음.. 머리속에 이게 먼저 딱 떠올라서 이걸로한거라
    //이럴꺼면 랭크랑 총점 만드는 함수를 분리하는게 맞음

    //함수는 한가지의 기능을 실행하는놈임
    //안그래도 처음에 분리했는데 잘안되서 total부터 해보자해서 일단 지운거에요
    //응 일단 마저 해보시오 어제 이야기한거 거의 그대로인데
    // ㅋㅋㅋㅋㅋㅋㅋㅋ썜이 일단 밑에 꺼부터 하라고해서 밑에꺼했는데 한 2~3번다 오류나서... c문법에 익숙하다보니까 c++문법을 잘몰라서
    // 지금 우리 C하는거임.... cPP문법들어간적 없음 썜 그러면 하나만 물어봐도되여?
    //ㅇㅇ
        //아직 못했는데..ㅠㅠ 
        //다 했다고 생각해서 들어오는거 아님ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ넹
       // if(pt[t]<pt[t+1])//이런식으로 하니까 < 이 부호에 오류가 뜨던데 왜그런거에요? 저거 구조체라서 그럼 구조체안에 멤버를 불러다 계산해야지 ㅇㅋ?어케 불...............렀져..?그럼 위에 코드는 어케 적은거지.. ....썜 어제 
            //사람수 코드 보면서 그거 배운거 써먹어서 아직 활용이 미숙합니다..ㅎㅎㅅㅎ..저 코드에 본인은 이미 불러다 쓰고 있음 일단 한번 도전해볼게요!
        //화이팅 ㅂㅇ   
}

        //이렇게하면안되나요?안될꺼 같음...cnt가 필요없음 일단. 그러면 pt[i].rank를 만들면 원래 기존에는 무슨 값이 들어있어요? 쓰레기값아니에요본?인이 설정을 해줘야 겠지? 근데 방금전까지 분명 오류가 떳는데 쌤오시고 오류가 사라졌어요내가 방금 지웠으니까 잘못적은거. 아 감사합니다 근데 일단 이게 틀렸다는 거죠?ㅇㅇ넵... 다시해볼게요..수고

void ranking(IN* pt, int su) {
    int i, j;
    for (int i = 0; i < su; i++) {
        pt[i].rank = 1;
    }
    for (i = 0; i < su; i++) {
        for (j = 0; j < su; j++) {
            if (pt[i].total < pt[j].total) {
                ++pt[i].rank;
            }
        }
    }
}

void gradeDisp(IN* pt, int su) {
    puts("이름\t국어\t영어\t수학\t총점\t순위\t");
    for (int i = 0; i < su; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", pt[i].name, pt[i].kor, pt[i].eng, pt[i].math, pt[i].total, pt[i].rank);
    }   
}

int main(void) {

    int su = input();

    IN* pt = (IN*)malloc(sizeof(IN) * su);  

    setData(pt, su);

    bigSmall(pt, su);

    ranking(pt, su);

    gradeDisp(pt, su);

    free(pt);

    return 0;
}