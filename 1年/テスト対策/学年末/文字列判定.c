#include <stdio.h>

int main(void)
{
    char enteredStr[0xFF] = {'\0'};
    int strLen = 0;

    puts("���������͂��Ȃ���(@�܂œǂݎ��܂�)");
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

    printf("�������F%d\n", strLen);
    printf("�����������F%d\n", numCharCnt);
    printf("�啶�����F%d\n", upcaseCnt);
    printf("���������F%d\n", locaseCnt);
    printf("�L���������F%d\n", symbolCnt);

    return 0;
}