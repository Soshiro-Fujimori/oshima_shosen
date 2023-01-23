#include <stdio.h>

int main(void)
{
    char str[0xFF];
    int strCnt = 0;

    puts("文字を入力してください。(@で終了)");

    str[strCnt] = getchar();
    while (str[strCnt] != '@')
    {
        str[strCnt] = getchar();
        str
    }
    

    puts("読み込んだ文字は以下の通りです。");

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}