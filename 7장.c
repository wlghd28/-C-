#include <stdio.h>

int main(void)
{
	//사용자가 입력한 숫자만큼 '*' 출력하기
	/*
	int Num, i = 0;

	printf("입력 : ");
	scanf_s("%d", &Num);

	if (Num < 0)
		Num = 0;
	else if (Num > 9)
		Num = 9;
	
	while (i < Num)
	{
		printf("*");
		i++;
	}

	printf("\n");
	*/

	//5행 5열의 사각형 출력하기
	/*
	int i = 0, j;

	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			printf("*\t");
			j++;
		}
		i++;
		printf("\n");
	}
	*/

	//1에서 10까지의 총합 구하기
	/*
	int i = 0, nTotal = 0;

	while (i < 11)
	{
		nTotal += i;
		i++;
	}

	printf("Total : %d\n", nTotal);
	*/

	//구구단에서 한 단만 출력하기
	/*
	int Num, i = 1;

	printf("입력 : ");
	scanf_s("%d", &Num);

	if (Num < 2 || Num>9)
	{
		printf("ERROR\n");
	}
	else
	{
		while(i<10)
		{
			printf("%d * %d = %d\n", Num, i, Num*i);
			i++;
		}
	}
	*/

	//첫 번째 직각 삼각형 출력하기
	/*
	int i = 1, j;

	while (i < 6)
	{
		j = 0;
		while (j < i)
		{
			printf("*\t");
			j++;
		}
		i++;
		printf("\n");
	}
	*/

	//두 번째 직각 삼각형 출력하기
	/*
	int i, j;

	for (i = 1; i < 6; ++i)
	{
		j = 5 - i;
		for (int k = 0; k < j; ++k)
		{
			printf("\t");
		}
		for (int l = 0; l < i; l++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	*/

	//피라미드 출력하기
	/*
	int i = 0, j = 0;//공백과 별의 개수를 나타내는 변수.

	for (int k = 0; k < 5; k++)
	{
		j = 2 * k + 1;
		i = (9 - j) / 2;

		for (int a = 0; a < i; ++a)
			printf("\t");
		for (int b = 0; b < j; ++b)
			printf("*\t");

		printf("\n");
	}
	*/

	//연습문제 1
    /*
    int count = 0, nTotal = 0;

    for (int i = 0; i < 100; ++i)
    {
	    if (i != 0 && i % 4 == 0)
	    {
	    	count++;
	    	nTotal += i;
	    }
    }
    printf("4의배수는 %d개이며, 이들의 총합은 %d이다.\n", count, nTotal);
    */

    //연습문제 2번
    /*
    int i, j;

    for (i = 1; i < 6; ++i)
    {
	    j = 5 - i;
	    for (int k = 0; k < j; ++k)
	    {
		    printf("\t");
	    }
	    for (int l = 0; l < i; l++)
	    { 
		    printf("\t*\t");
	    }
	    printf("\n");
    }
	*/

	return 0;
}