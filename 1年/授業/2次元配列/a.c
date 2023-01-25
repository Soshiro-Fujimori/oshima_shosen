#include <stdio.h>

int main(void)
{
    // 人配列 ∋ 点数配列
    int points[6][2];
    // 科目配列 ∋ 合計・平均配列
    int subjct[2][2];
    // 生徒配列 ∋ 合計・平均配列
    int stdnt[6][2];

    puts("6人の国語・数学の点数を入力してください。");
    for (int stdntNum = 1; stdntNum <= 6; stdntNum++)
    {
        for (int subjctNum=1; subjctNum <= 2; subjctNum++)
        {
            printf("%d人目の%d科目の点数を入力：", stdntNum, subjctNum);
            scanf("%d", &points[stdntNum-1][subjctNum-1]);
        }
    }
    printf("\n");
    
    puts("科目ごとの合計点と平均点");
    for (int stdntNum = 1; stdntNumm <= 6; stdntNum++)
    {
        for (int subjctNum = 1; subjctNum <= 2; subjctNum++) {

        }
    }

    printf("国語：合計%3d点　平均点%3d点");
}