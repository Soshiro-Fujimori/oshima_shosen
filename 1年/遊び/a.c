#include <stdio.h>

int main(void){
    printf("int");
    int int1 = 1;
    scanf("%d", &int1);

    printf("char");
    char str = 'a';
    scanf("%c", &str);

    printf("char[]");
    char strs[] = "abcd";
    scanf("%s", strs);
}