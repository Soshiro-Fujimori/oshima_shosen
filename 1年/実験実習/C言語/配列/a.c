/*
    ���O:���{�@���Y
    �쐬��:2022/11/21
    ���e:�z��
*/

#include <stdio.h>

int main(void){
    int dasuuTotal = 0;
    int andaTotal = 0;
    float daritsuTotal = 0.0;

    int dasuu[7];
    int anda[7];
    float daritsu[7];

    //���͂𑣂����b�Z�[�W
    puts("���{�V���[�Y");
    puts("S���c S�I��̐��т���͂��Ă��������B");
    puts("�i�ŐȐ��ƈ��Ő��̓X�y�[�X��؂�œ��́j");

    //�e�����̏����L�^
    for(int gameNum=1; gameNum<=7; gameNum++){
        printf("��%2d��(�ŐȐ����Ő�) ", gameNum);

        //�e�����̑ŐȐ��ƈ��Ő����擾
        scanf("%d %d", &dasuu[gameNum-1], &anda[gameNum-1]);

        dasuuTotal += dasuu[gameNum-1];
        andaTotal += anda[gameNum-1];

        //�ŗ����v�Z
        daritsu[gameNum-1] = anda[gameNum-1] / (float)dasuu[gameNum-1];
    }

    daritsuTotal = andaTotal / (float)dasuuTotal;

    //���ʂ�\�ŕ\��
    printf("\n\n���{�V���[�Y\n");
    puts("S���c S�I��̐���");
    puts(" ���� �ŐȐ� ���Ő� �ŗ�");
    puts("------------------------\n");

    for(int gameNum=1; gameNum<=7; gameNum++){
        printf(" ��%2d�� %4d %4d %8.3f \n", gameNum, dasuu[gameNum-1], anda[gameNum-1], daritsu[gameNum-1]);
    }

    puts("------------------------\n");
    printf(" �S���� %4d %4d %8.3f", dasuuTotal, andaTotal, daritsuTotal);
}