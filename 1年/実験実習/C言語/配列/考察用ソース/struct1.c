#include <stdio.h>

int main(void){
    struct struct1{
        int array1[1];
        int array2[1];
        int array3[1];
    };
    struct struct1 struct1 = {
        .array1[0] = {1},
        .array2[0] = {2},
        .array3[0] = {3},
    };

    int int1 = struct1.array2[1];

    printf("array1[0]\t%p %d\n", &struct1.array1[0], struct1.array1[0]);
    printf("array2[0]\t%p %d\n", &struct1.array2[0], struct1.array2[0]);
    printf("array3[0]\t%p %d\n", &struct1.array3[0], struct1.array3[0]);
    printf("int1     \t%p %d\n", &int1, int1);
}