#include <stdio.h>

int main(){
    char name[0xFF];
    int charCnt; //名前の文字数

    puts("名前をアルファベットで入力してください。");
    puts("最後は!を入力してください。");
    
    //変数aCharのスコープを小さくしたい...?
    if(1){
        char aChar; //名前の1文字分を格納
        for(charCnt = 0; (aChar = getchar()) != '!'; charCnt++){
            name[charCnt] = aChar;
        }
    }
    printf("\n\n");

    puts("あなたの名前を大文字で表現すると");
    for(int i = 0; i < charCnt; i++){
        if(name[i] >= 97 && name[i] <= 122) name[i] -= 32;
        printf("%c ", name[i]);
    }
    printf("\n\n");

    puts("あなたの名前を10進数で表現すると");
    for(int i = 0; i < charCnt; i++){
        printf("%d ", name[i]);
    }
    printf("\n\n");

    puts("あなたの名前を16進数で表現すると");
    for(int i = 0; i < charCnt; i++){
        printf("%x ", name[i]);
    }
    printf("\n\n");
}