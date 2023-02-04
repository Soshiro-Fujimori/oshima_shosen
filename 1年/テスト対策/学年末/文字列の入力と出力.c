#include <stdio.h>

int main(void)
{
    char str[0xFF] = {'\0'};
    scanf("%s", str);
    printf("%s", str);

    return 0;
}