#include <stdio.h>

int main(void)
{
    int point[6][2];
    int subjct[2][2];
    int stdnt[6][2];

    puts("6人の国語・数学の点数を入力してください。");
    for(int stdntNum=1; stdntNum=<6; stdntNum++)
    {
        for(int subjctNum=1; subjctNum=<2; subjctNum++)
        {
            printf("%d人目の%d科目の点数を入力：", stdntNum, subjctNum);
            scanf("%d", &point[stdntNum-1][subjctNum-1]);
        }
    }
    printf("\n");
    
    puts("科目ごとの合格点と平均点");
    for(int stdntNum=1; stdntNum=<6; stdntNum++)
    {

    }

    printf("国語：合計%3d点　平均点%3d点")


}