#include<stdio.h>
#include<malloc.h>

typedef struct Info {
    char name[10];
    int kor, eng, math, total, rank;
}IN;

int input() {
    int su;
    printf("昔据呪 脊径 : ");
    scanf_s("%d", &su);
    return su;
}

//食奄辞 耕芝 馬蟹
//煽奄 是拭 赤澗 input精 刃失莫戚 焼還
//舛呪 脊径閤澗 採歳拭辞澗 乞砧 input敗呪 紫遂亜管背醤敗 しせ???焼 煽奄辞 廃腰拭 input閤焼虞澗暗倉?いい
//厩嬢 慎嬢 呪俳繊呪 脊径閤聖凶亀 input敗呪研 紫遂拝呪 赤嬢醤 廃陥虞澗暗績
//焼 戚背梅嬢推 input敗呪 戚遂背辞 煽暗 陥 閤焼虞澗 暗倉
//沙昔戚 走榎 陣走 昔撚敗呪 照拭辞 厩嬢慎嬢 呪俳繊呪 脊径閤聖襖 旭精 汗界戚走? input敗呪 照拭辞 亜 焼艦虞 
//input敗呪研 搭背辞 脊径閤生虞澗暗績 焼焼 戚背梅嬢推 益軍 背左獣神悦汽 益 煽奄 rank 授是 廃汗暗 乞牽畏澗汽 徳赤蟹推 ... 硲土焼還 徳蒸製せせせせせせせ析舘 是拭 耕芝 採斗 背衣馬虞澗暗閃
//粂滴採斗 馬澗惟 匙研岡? 樫 背左畏柔艦雁

void setData(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        printf("%d腰属 紫寓 舛左\n", i + 1);
        printf("戚硯 脊径 : ");
        scanf_s("%s", pt[i].name, sizeof(pt[i].name));
        printf("%d腰属 紫寓税 厩嬢繊呪 : ");
        scanf_s("%d", &pt[i].kor);
        printf("%d腰属 紫寓税 慎嬢繊呪 : ");
        scanf_s("%d", &pt[i].eng);
        printf("%d腰属 紫寓税 呪俳繊呪 : ");
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
    puts("戚硯 厩嬢 慎嬢 呪俳 恥繊 授是");
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