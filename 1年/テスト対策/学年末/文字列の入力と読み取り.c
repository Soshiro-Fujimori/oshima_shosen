#include <stdio.h>

int main(void)
{
    char enteredStr[0xFF] = {'\0'};

    puts("文字列を入力しなさい(@まで読み取ります)");
    char enteredChar;
    for (int i = 0; (enteredChar = getchar()) != '@'; i++)
    {
        enteredStr[i] = enteredChar; 
    }
    
    puts("入力された文字列は以下の通りです");
    for(int i = 0; enteredStr[i] != '\0'; i++)
    {
        putchar(enteredStr[i]);
    }

    return 0;
}