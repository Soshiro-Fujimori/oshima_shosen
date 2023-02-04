#include <stdio.h>

int main(void)
{
    int array[3][4] = {0};
    for(int arrayNum = 0; arrayNum < 3; arrayNum++)
    {
        printf("%d個目の配列\n", arrayNum);
        for(int elmntNum = 0; elmntNum < 4; elmntNum++)
        {
            printf("array[%d][%d]=", arrayNum, elmntNum);
            scanf("%d", &array[arrayNum][elmntNum]);
        }
    }

    for(int arrayNum = 0; arrayNum < 3; arrayNum++)
    {
        printf("%d個目の配列\n", arrayNum);
        int total = 0;
        for(int elmntNum = 0; elmntNum < 4; elmntNum++)
        {
            int element = array[arrayNum][elmntNum];
            printf("%d ", element);
            total += element;
        }
        printf("\n");
        printf("合計：%d\n", total);
    }
}