#include <stdio.h>

int main(void)
{
	//배열에서 최댓값 구하기
	/*
	int aList[5] = { 30,40,10,50,20 };
	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		if (aList[0] < aList[i])
		{
			aList[0] = aList[i];
		}
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	printf("MAX : %d\n", aList[0]);
	*/

	//요소의 값을 교환하는 방식으로
	//배열에서 최솟값 구하기
	/*
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, nTmp = 0;

	for (i = 0; i < 5; ++i)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');

	printf("MIN : %d\n", aList[0]);
	*/

	//2차원 배열의 행과 열의 총합 계산하기
	/*
	int aList[3][4] = {
		{10,20,30},
	    {40,50,60}
	};
	int i = 0, j = 0;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 2; ++j)
		{
			aList[2][i] += aList[j][i];
		}
	}
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			aList[j][3] += aList[j][i];
		}
	}

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}
	*/

	//연습문제 1번
	/*
	int aList[5] = { 0 };
	int i = 0, nMax, nMin;

	printf("입력 : ");
	for (i = 0; i < 5; ++i)
	{
		scanf_s("%d", &aList[i]);
	}

	nMax = aList[0];
	nMin = aList[0];
	for (i = 0; i < 5; ++i)
	{
		if (nMax < aList[i])
		{
			nMax = aList[i];
		}
	}
	for (i = 0; i < 5; ++i)
	{
		if (nMin > aList[i])
		{
			nMin = aList[i];
		}
	}

	printf("MIN : %d, MAX : %d\n", nMin, nMax);
	*/
	//연습문제 2번
    /*
	char szBuffer[100] = { 0 };
	int Index = 0, i = 0; // 카운팅 변수.

	printf("입력 : ");
	gets_s(szBuffer, sizeof(szBuffer));
	for (i = 0; i < 100; ++i)
	{
		if (szBuffer[i] == '\0')
			break;
		else
			Index++;
	}

	printf("한글 문자의 개수는 %d자 입니다.\n", Index/2);
    */

	return 0;
}