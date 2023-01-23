#include <stdio.h>

int main(void){
    char str[] = "12345678\0a";
    int len;
    for(len=0; str[len]!=0; len++);
    printf("%d\n", len);
}