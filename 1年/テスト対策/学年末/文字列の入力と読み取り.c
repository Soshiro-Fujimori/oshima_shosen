#include <stdio.h>

int main(void)
{
    char enteredStr[0xFF] = {'\0'};

    puts("���������͂��Ȃ���(@�܂œǂݎ��܂�)");
    char enteredChar;
    for (int i = 0; (enteredChar = getchar()) != '@'; i++)
    {
        enteredStr[i] = enteredChar; 
    }
    
    puts("���͂��ꂽ������͈ȉ��̒ʂ�ł�");
    for(int i = 0; enteredStr[i] != '\0'; i++)
    {
        putchar(enteredStr[i]);
    }

    return 0;
}