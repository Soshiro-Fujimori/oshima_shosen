#include <stdio.h>

int main(void)
{
    // test1[生徒番号][科目番号]
    int test1[4][3] = {{100, 90, 99}, {100, 90, 99}, {100, 90, 99}, {100, 90, 99}};
    int test2[4][3] = {{10, 9, 99}, {10, 9, 99}, {100, 90, 99}, {100, 90, 99}};

    puts("1回目のテスト");
    for(int stdntNum = 0; stdntNum < 4; stdntNum++)
    {
        printf("%d番の生徒：", stdntNum + 1);
        for(int sbjctNum = 0; sbjctNum < 3; sbjctNum++)
        {
            printf("%3d", test1[stdntNum][sbjctNum]);
        }
        printf("\n");
    }

    puts("2回目のテスト");
    for(int stdntNum = 0; stdntNum < 4; stdntNum++)
    {
        printf("%d番の生徒：", stdntNum + 1);
        for(int sbjctNum = 0; sbjctNum < 3; sbjctNum++)
        {
            printf("%3d", test2[stdntNum][sbjctNum]);
        }
        printf("\n");
    }
}