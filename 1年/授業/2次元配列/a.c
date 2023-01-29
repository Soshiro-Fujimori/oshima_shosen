// 2次元配列の実習だから2次元配列を使ったけど、
// 2次元配列使うのナンセンスでは？

#include <stdio.h>

int main(void)
{
    // twoSubPoint[生徒番号][科目番号]
    int twoSubPoint[6][2] = {0};
    // ttlAndAvrg2[生徒番号][合計:0, 平均:1];
    int ttlAndAvrg2[6][2] = {0};


    puts("6人の国語・数学の点数を入力してください。");
    for (int stdntNum = 0; stdntNum < 6; stdntNum++)
    {
        for (int subjctNum = 0; subjctNum < 2; subjctNum++)
        {
            printf("%d人目の%d科目の点数を入力：", stdntNum+1, subjctNum+1);
            scanf("%d", &twoSubPoint[stdntNum][subjctNum]);
        }
    }
    printf("\n");
    

    puts("科目ごとの合計点と平均点");
    for (int subjctNum = 0; subjctNum < 2; subjctNum++) 
    {
        int total = 0;
        int avrg = 0;

        for (int stdntNum = 0; stdntNum < 6; stdntNum++)
        {
            total += twoSubPoint[stdntNum][subjctNum];
        }

        avrg = total / 6;

        if(subjctNum == 0) printf("国語：合計%3d点　平均点%3d点\n", total, avrg);
        if(subjctNum == 1) printf("数学：合計%3d点　平均点%3d点\n", total, avrg);
    }
    printf("\n");


    puts("学生ごとの合計点と平均点");
    for (int stdntNum = 0; stdntNum < 6; stdntNum++) 
    {
        int tottal = twoSubPoint[stdntNum][0] + twoSubPoint[stdntNum][1];
        int averge = tottal / 2;
        printf("%d人目：合計%3d点　平均点%3d点\n", stdntNum + 1, tottal, averge);
    }
    printf("\n");
}