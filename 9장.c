#include <stdio.h>

int main(void)
{
	//�������ķ� �˷��� �������� ����
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

	//�������� ����
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

	//�������� ����
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

	//������׷� 2���� �迭 ä���
	/*
	int aList[5][5] = { 0 };
	int i = 0, j = 0;//�ݺ����� ���� ����.
	int Num = 0;//�� ��ҿ� �� ����.
	int row = 0, col = 0;//��� ���� ��Ÿ���� ����.
	int sign = 1;//��� ���� �����ϰų� �����ϴµ� ���� ��ȣ ����.

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

	//������ �迭
	/*
	int aList[5][5] = { 0 };
	int i = 0;//�ݺ����� ���� ����.
	int Num = 0;//�� ��ҿ� �� ����.
	int row = 0, col = -1;//��� ���� ��Ÿ���� ����.
	int count = 5;//����Ǵ¼����� �������� �������� �Ǻ��ϴ� ����.
	int sign = 1;//��� ���� �����ϰų� �����ϴµ� ���� ��ȣ ����.

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

	//�������� 1��
    /*
    int aList[5][5] = { 0 };
    int i = 0, j = 0;//�ݺ����� ���� ����.
    int Num = 0;//�� ��ҿ� �� ����.
    int row = 0, col = 0;//��� ���� ��Ÿ���� ����.
    int sign = 1;//��� ���� �����ϰų� �����ϴµ� ���� ��ȣ ����.

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

	//�������� 2��
	/*
	int aList[5][5] = { 0 };
	int i = 0;//�ݺ����� ���� ����.
	int Num = 0;//�� ��ҿ� �� ����.
	int row = 0, col = 5;//��� ���� ��Ÿ���� ����.
	int count = 5;//����Ǵ¼����� �������� �������� �Ǻ��ϴ� ����.
	int sign = 1;//��� ���� �����ϰų� �����ϴµ� ���� ��ȣ ����.

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

    //Look up �迭
    /*
    double aRate[10] = {
    0.0, 0.1, 0.25, // 1~3�� 0%, 10%, 25%
    0.5, 0.5, // 4~5�� 50%
    0.6, 0.65, // 6~7�� 60%, 65%
    0.8, 0.82, 0.97 // 8`10�� 80%, 82%, 97%
    };

    int nAge = 0, i = 0, nFee = 1000;

    //���ǥ�� ����Ѵ�.
    printf("���ǥ\n");
    for (i = 1; i <= 10; ++i)
    {
    	printf("%d�� ��� : \t%d��\n", i, (int)(nFee * aRate[i - 1]));
    }
    putchar('\n');
	
    //���̸� �Է¹ް� �迭 �ε��� ���� ���η� ���� ���� �����Ѵ�.
    printf("���̸� �Է��ϼ���. : ");
    scanf_s("%d", &nAge);
    if (nAge < 1)
    	nAge = 1;
    else if (nAge > 10)
    nAge = 10;

    //���̿� �´� �迭��Ҹ� �����ϰ� ���ٸ� ��� ���� ��� ���� ����Ѵ�.
    printf("������� : %d��\n", (int)(nFee * aRate[nAge - 1]));
    putchar('\n');
    */   

	return 0;
}