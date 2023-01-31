/*
    名前:藤本宗太郎
    作成日:2022/11/21
    内容:配列
*/

#include <stdio.h>

int main(void){
    int dasuuTotal = 0;
    int andaTotal = 0;
    float daritsuTotal = 0.0;

    int dasuu[7];
    int anda[7];
    float daritsu[7];

    //入力を促すメッセージ
    puts("日本シリーズ");
    puts("S球団 S選手の成績を入力してください。");
    puts("（打席数と安打数はスペース区切りで入力）");

    //各試合の情報を記録
    for(int gameNum=1; gameNum<=7; gameNum++){
        printf("第%2d戦(打席数安打数) ", gameNum);

        //各試合の打席数と安打数を取得
        scanf("%d %d", &dasuu[gameNum-1], &anda[gameNum-1]);

        dasuuTotal += dasuu[gameNum-1];
        andaTotal += anda[gameNum-1];

        //打率を計算
        daritsu[gameNum-1] = anda[gameNum-1] / (float)dasuu[gameNum-1];
    }

    daritsuTotal = andaTotal / (float)dasuuTotal;

    //結果を表で表示
    printf("\n\n日本シリーズ\n");
    puts("S球団 S選手の成績");
    puts(" 試合 打席数 安打数 打率");
    puts("------------------------\n");

    for(int gameNum=1; gameNum<=7; gameNum++){
        printf(" 第%2d戦 %4d %4d %8.3f \n", gameNum, dasuu[gameNum-1], anda[gameNum-1], daritsu[gameNum-1]);
    }

    puts("------------------------\n");
    printf(" 全試合 %4d %4d %8.3f", dasuuTotal, andaTotal, daritsuTotal);
}