// 2�����z��̎��K������2�����z����g�������ǁA
// 2�����z��g���̃i���Z���X�ł́H

#include <stdio.h>

int main(void)
{
    // twoSubPoint[���k�ԍ�][�Ȗڔԍ�]
    int twoSubPoint[6][2] = {0};
    // ttlAndAvrg2[���k�ԍ�][���v:0, ����:1];
    int ttlAndAvrg2[6][2] = {0};


    puts("6�l�̍���E���w�̓_������͂��Ă��������B");
    for (int stdntNum = 0; stdntNum < 6; stdntNum++)
    {
        for (int subjctNum = 0; subjctNum < 2; subjctNum++)
        {
            printf("%d�l�ڂ�%d�Ȗڂ̓_������́F", stdntNum+1, subjctNum+1);
            scanf("%d", &twoSubPoint[stdntNum][subjctNum]);
        }
    }
    printf("\n");
    

    puts("�Ȗڂ��Ƃ̍��v�_�ƕ��ϓ_");
    for (int subjctNum = 0; subjctNum < 2; subjctNum++) 
    {
        int total = 0;
        int avrg = 0;

        for (int stdntNum = 0; stdntNum < 6; stdntNum++)
        {
            total += twoSubPoint[stdntNum][subjctNum];
        }

        avrg = total / 6;

        if(subjctNum == 0) printf("����F���v%3d�_�@���ϓ_%3d�_\n", total, avrg);
        if(subjctNum == 1) printf("���w�F���v%3d�_�@���ϓ_%3d�_\n", total, avrg);
    }
    printf("\n");


    puts("�w�����Ƃ̍��v�_�ƕ��ϓ_");
    for (int stdntNum = 0; stdntNum < 6; stdntNum++) 
    {
        int tottal = twoSubPoint[stdntNum][0] + twoSubPoint[stdntNum][1];
        int averge = tottal / 2;
        printf("%d�l�ځF���v%3d�_�@���ϓ_%3d�_\n", stdntNum + 1, tottal, averge);
    }
    printf("\n");
}