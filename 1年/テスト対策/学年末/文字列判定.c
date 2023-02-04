#include <stdio.h>

int main(void)
{
    char enteredStr[0xFF] = {'\0'};
    int strLen = 0;

    puts("文字列を入力しなさい(@まで読み取ります)");
    char enteredChar;
    for (strLen = 0; (enteredChar = getchar()) != '@'; strLen++)
    {
        enteredStr[strLen] = enteredChar; 
    }
    
    int numCharCnt = 0;
    int upcaseCnt = 0;
    int locaseCnt = 0;
    int symbolCnt = 0;
    for(int i = 0; i < strLen; i++)
    {
        char _char = enteredStr[i];
        if(_char >= 48 && _char <= 57) numCharCnt++;
        else if(_char >= 65 && _char <= 90) upcaseCnt++;
        else if(_char >= 97 && _char <= 122) locaseCnt++;
        else symbolCnt++;
    }

    printf("文字数：%d\n", strLen);
    printf("数字文字数：%d\n", numCharCnt);
    printf("大文字数：%d\n", upcaseCnt);
    printf("小文字数：%d\n", locaseCnt);
    printf("記号文字数：%d\n", symbolCnt);

    return 0;
}