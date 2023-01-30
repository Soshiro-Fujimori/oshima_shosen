#include <stdio.h>

int main(void)
{
	int v[3][4];

	for (int arrayNum = 0; arrayNum < 3; arrayNum++) 
	{
		printf("%d行目の値\n", arrayNum + 1);
		for (int elementNum = 0; elementNum < 4; elementNum++) 
		{
			printf("v[%d][%d]=", arrayNum, elementNum);
			scanf("%d", &v[arrayNum][elementNum]);
		}
	}

	puts("読み込んだ配列の内容を表示");
	for (int arrayNum = 0; arrayNum < 3; arrayNum++)
	{
		printf("%d行目の値\n", arrayNum + 1);
		for (int elementNum = 0; elementNum < 4; elementNum++)
		{
			printf("%4d", v[arrayNum][elementNum]);
		}
		printf("\n");

		int total = 0;
		for (int i = 0; i < 4; i++) total += v[arrayNum][i];
		printf("%d行目の合計：%d\n", arrayNum + 1, total);
	}

	return 0;
}