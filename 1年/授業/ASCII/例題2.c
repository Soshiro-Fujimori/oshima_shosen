#include <stdio.h>

int main(void)
{
    char moji;

    puts("文字を入力してください。");
    moji = getchar();

    printf("%cの文字コード ", moji);
    printf("hex:%x dec:%d\n", moji, moji);

    return 0;
}