#include <stdio.h>

int main(void)
{
    char enteredStr[0xFF] = {'\0'};

    puts("•¶Žš—ñ‚ð“ü—Í‚µ‚È‚³‚¢(@‚Ü‚Å“Ç‚ÝŽæ‚è‚Ü‚·)");
    char enteredChar;
    for (int i = 0; (enteredChar = getchar()) != '@'; i++)
    {
        enteredStr[i] = enteredChar; 
    }
    
    puts("“ü—Í‚³‚ê‚½•¶Žš—ñ‚ÍˆÈ‰º‚Ì’Ê‚è‚Å‚·");
    for(int i = 0; enteredStr[i] != '\0'; i++)
    {
        putchar(enteredStr[i]);
    }

    return 0;
}