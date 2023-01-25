#include <stdio.h>

int main(void)
{
    char moji;

    puts("文字を入力してください。");
    moji = getchar();

    puts("入力された文字は");
    putchar(moji);

    return 0;
}