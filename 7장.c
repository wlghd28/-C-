#include <stdio.h>

int main(void)
{
	//����ڰ� �Է��� ���ڸ�ŭ '*' ����ϱ�
	/*
	int Num, i = 0;

	printf("�Է� : ");
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

	//5�� 5���� �簢�� ����ϱ�
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

	//1���� 10������ ���� ���ϱ�
	/*
	int i = 0, nTotal = 0;

	while (i < 11)
	{
		nTotal += i;
		i++;
	}

	printf("Total : %d\n", nTotal);
	*/

	//�����ܿ��� �� �ܸ� ����ϱ�
	/*
	int Num, i = 1;

	printf("�Է� : ");
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

	//ù ��° ���� �ﰢ�� ����ϱ�
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

	//�� ��° ���� �ﰢ�� ����ϱ�
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

	//�Ƕ�̵� ����ϱ�
	/*
	int i = 0, j = 0;//����� ���� ������ ��Ÿ���� ����.

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

	//�������� 1
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
    printf("4�ǹ���� %d���̸�, �̵��� ������ %d�̴�.\n", count, nTotal);
    */

    //�������� 2��
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