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
        printf("%d腰属 紫寓税 厩嬢繊呪 : ", i+1);
        scanf_s("%d", &pt[i].kor);
        printf("%d腰属 紫寓税 慎嬢繊呪 : ", i+1);
        scanf_s("%d", &pt[i].eng);
        printf("%d腰属 紫寓税 呪俳繊呪 : ", i+1);
        scanf_s("%d", &pt[i].math);
    }
}

void bigSmall(IN* pt, int su) {
    for (int i = 0; i < su; i++) {
        pt[i].total = pt[i].kor + pt[i].eng + pt[i].math;
    }//戚暗 託虞軒 汽戚斗 脊径閤聖凶 亜澗惟 照蟹製?
    //煽澗 製.. 袴軒紗拭 戚惟 胡煽 亨 彊臣虞辞 戚杏稽廃暗虞
    //戚群襖檎 粂滴櫛 恥繊 幻球澗 敗呪研 歳軒馬澗惟 限製

    //敗呪澗 廃亜走税 奄管聖 叔楳馬澗叶績
    //照益掘亀 坦製拭 歳軒梅澗汽 設照鞠辞 total採斗 背左切背辞 析舘 走錘暗拭推
    //誓 析舘 原煽 背左獣神 嬢薦 戚醤奄廃暗 暗税 益企稽昔汽
    // せせせせせせせせ�搘 析舘 購拭 襖採斗 馬虞壱背辞 購拭襖梅澗汽 廃 2~3腰陥 神嫌蟹辞... c庚狛拭 斥寿馬陥左艦猿 c++庚狛聖 設侯虞辞
    // 走榎 酔軒 C馬澗暗績.... cPP庚狛級嬢娃旋 蒸製 �� 益君檎 馬蟹幻 弘嬢坐亀鞠食?
    //しし
        //焼送 公梅澗汽..ばば 
        //陥 梅陥壱 持唖背辞 級嬢神澗暗 焼還せせせせせせせせせせせせせせせせせせせせせせせせせ樫
       // if(pt[t]<pt[t+1])//戚訓縦生稽 馬艦猿 < 戚 採硲拭 神嫌亜 襟揮汽 訊益訓暗拭推? 煽暗 姥繕端虞辞 益軍 姥繕端照拭 呉獄研 災君陥 域至背醤走 しせ?嬢追 災...............袈閃..?益軍 是拭 坪球澗 嬢追 旋精暗走.. ....�� 嬢薦 
            //紫寓呪 坪球 左檎辞 益暗 壕錘暗 潤股嬢辞 焼送 醗遂戚 耕寿杯艦陥..ぞぞさぞ..煽 坪球拭 沙昔精 戚耕 災君陥 床壱 赤製 析舘 廃腰 亀穿背瑳惟推!
        //鉢戚特 げし   
}

        //戚係惟馬檎照鞠蟹推?照吃襖 旭製...cnt亜 琶推蒸製 析舘. 益君檎 pt[i].rank研 幻級檎 据掘 奄糎拭澗 巷充 葵戚 級嬢赤嬢推? 床傾奄葵焼艦拭推沙?昔戚 竺舛聖 背操醤 畏走? 悦汽 号榎穿猿走 歳誤 神嫌亜 狂澗汽 旬神獣壱 神嫌亜 紫虞然嬢推鎧亜 号榎 走頗生艦猿 設公旋精暗. 焼 姶紫杯艦陥 悦汽 析舘 戚惟 堂携陥澗 暗倉?しし顎... 陥獣背瑳惟推..呪壱

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
    puts("戚硯\t厩嬢\t慎嬢\t呪俳\t恥繊\t授是\t");
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