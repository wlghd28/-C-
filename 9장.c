#include <stdio.h>

int main(void)
{
	//선택정렬로 알려진 버블정렬 구현
	/*
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < 4; ++i)
	{
		for (j = i+1; j < 5; ++j)
		{
			if (aList[i] > aList[j])
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	*/

	//버블정렬 구현
	/*
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nTmp = 0;

	for (i = 4; i > 0 ; --i)
	{
		for (j = 0; j < i; ++j)
		{
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = nTmp;
			}
		}
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	*/

	//선택정렬 구현
	/*
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

	for (i = 0; i < 4; ++i)
	{
		nMinIndex = i;
		for (j = nMinIndex; j < 5; ++j)
		{
			if (aList[nMinIndex] > aList[j])
				nMinIndex = j;		
		}
		nTmp = aList[i];
		aList[i] = aList[nMinIndex];
		aList[nMinIndex] = nTmp;
	}

	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}
	putchar('\n');
	*/

	//지그재그로 2차원 배열 채우기
	/*
	int aList[5][5] = { 0 };
	int i = 0, j = 0;//반복문에 쓰일 변수.
	int Num = 0;//각 요소에 들어갈 숫자.
	int row = 0, col = 0;//행과 열을 나타내는 변수.
	int sign = 1;//행과 열을 증가하거나 감소하는데 쓰일 부호 변수.

	for(i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			Num++;
			aList[row][col] = Num;
			col += sign;
		}
		sign *= -1;
		col += sign;
		row++;
	}

	for (i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%d ", aList[i][j]);
		}
		printf("\n");
	}
	*/

	//달팽이 배열
	/*
	int aList[5][5] = { 0 };
	int i = 0;//반복문에 쓰일 변수.
	int Num = 0;//각 요소에 들어갈 숫자.
	int row = 0, col = -1;//행과 열을 나타내는 변수.
	int count = 5;//진행되는순서가 ㄱ자인지 ㄴ자인지 판별하는 변수.
	int sign = 1;//행과 열을 증가하거나 감소하는데 쓰일 부호 변수.

	while (count != 0)
	{	
		for (i = 0; i < count; ++i)
		{
			col += sign;
			Num++;
			aList[row][col] = Num;
		}
		count--;
		for (i = 0; i < count; ++i)
		{
			row += sign;
			Num++;
			aList[row][col] = Num;
		}
		sign *= -1;
	}

	for (i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%d ", aList[i][j]);
		}
		printf("\n");
	}
	*/

	//연습문제 1번
    /*
    int aList[5][5] = { 0 };
    int i = 0, j = 0;//반복문에 쓰일 변수.
    int Num = 0;//각 요소에 들어갈 숫자.
    int row = 0, col = 0;//행과 열을 나타내는 변수.
    int sign = 1;//행과 열을 증가하거나 감소하는데 쓰일 부호 변수.

    for (i = 0; i < 5; ++i)
    {
	    for (j = 0; j < 5; ++j)
	    {
	    	Num++;
	    	aList[row][col] = Num;
		    row += sign;
	    }
	    sign *= -1;
	    row += sign;
	    col++;
    }

    for (i = 0; i < 5; ++i)
    {
	    for (int j = 0; j < 5; ++j)
	    {
		    printf("%d ", aList[i][j]);
     	}
	    printf("\n");
    }
	*/

	//연습문제 2번
	/*
	int aList[5][5] = { 0 };
	int i = 0;//반복문에 쓰일 변수.
	int Num = 0;//각 요소에 들어갈 숫자.
	int row = 0, col = 5;//행과 열을 나타내는 변수.
	int count = 5;//진행되는순서가 ㄱ자인지 ㄴ자인지 판별하는 변수.
	int sign = 1;//행과 열을 증가하거나 감소하는데 쓰일 부호 변수.

	while (count != 0)
	{
		for (i = 0; i < count; ++i)
		{
			col -= sign;
			Num++;
			aList[row][col] = Num;
		}
		count--;
		for (i = 0; i < count; ++i)
		{
			row += sign;
			Num++;
			aList[row][col] = Num;
		}
		sign *= -1;
	}

	for (i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			printf("%d ", aList[i][j]);
		}
		printf("\n");
	}
	*/

    //Look up 배열
    /*
    double aRate[10] = {
    0.0, 0.1, 0.25, // 1~3세 0%, 10%, 25%
    0.5, 0.5, // 4~5세 50%
    0.6, 0.65, // 6~7세 60%, 65%
    0.8, 0.82, 0.97 // 8`10세 80%, 82%, 97%
    };

    int nAge = 0, i = 0, nFee = 1000;

    //요금표를 출력한다.
    printf("요금표\n");
    for (i = 1; i <= 10; ++i)
    {
    	printf("%d세 요금 : \t%d원\n", i, (int)(nFee * aRate[i - 1]));
    }
    putchar('\n');
	
    //나이를 입력받고 배열 인덱스 범위 내부로 값을 강제 조정한다.
    printf("나이를 입력하세요. : ");
    scanf_s("%d", &nAge);
    if (nAge < 1)
    	nAge = 1;
    else if (nAge > 10)
    nAge = 10;

    //나이에 맞는 배열요소를 선택하고 별다른 제어문 없이 즉시 값을 출력한다.
    printf("최종요금 : %d원\n", (int)(nFee * aRate[nAge - 1]));
    putchar('\n');
    */   

	return 0;
}