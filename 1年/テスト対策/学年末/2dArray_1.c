#include <stdio.h>

int main(void)
{
    // test1[���k�ԍ�][�Ȗڔԍ�]
    int test1[4][3] = {{100, 90, 99}, {100, 90, 99}, {100, 90, 99}, {100, 90, 99}};
    int test2[4][3] = {{10, 9, 99}, {10, 9, 99}, {100, 90, 99}, {100, 90, 99}};

    puts("1��ڂ̃e�X�g");
    for(int stdntNum = 0; stdntNum < 4; stdntNum++)
    {
        printf("%d�Ԃ̐��k�F", stdntNum + 1);
        for(int sbjctNum = 0; sbjctNum < 3; sbjctNum++)
        {
            printf("%3d", test1[stdntNum][sbjctNum]);
        }
        printf("\n");
    }

    puts("2��ڂ̃e�X�g");
    for(int stdntNum = 0; stdntNum < 4; stdntNum++)
    {
        printf("%d�Ԃ̐��k�F", stdntNum + 1);
        for(int sbjctNum = 0; sbjctNum < 3; sbjctNum++)
        {
            printf("%3d", test2[stdntNum][sbjctNum]);
        }
        printf("\n");
    }
}