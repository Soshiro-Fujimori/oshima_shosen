#include <stdio.h>

int main(void){
    int array1[] = {1};
    int array2[] = {2};
    int array3[] = {3};

    printf("array1[0]\t%p %d\n", &array1[0], array1[0]);
    printf("array2[0]\t%p %d\n", &array2[0], array2[0]);
    printf("array3[0]\t%p %d\n", &array3[0], array3[0]);
}