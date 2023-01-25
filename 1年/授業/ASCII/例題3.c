#include <stdio.h>

int main(void)
{
    char str[0xFF];

    puts("文字を入力してください。(@で終了)");

    str[0] = getchar();
    for(int i = 1; str[i-1] != '@'; i++){
        str[i] = getchar();
    }

    puts("読み込んだ文字は以下の通りです。");

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}