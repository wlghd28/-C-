#include <stdio.h>

int main(void)
{
	//�迭���� �ִ� ���ϱ�
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

	//����� ���� ��ȯ�ϴ� �������
	//�迭���� �ּڰ� ���ϱ�
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

	//2���� �迭�� ��� ���� ���� ����ϱ�
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

	//�������� 1��
	/*
	int aList[5] = { 0 };
	int i = 0, nMax, nMin;

	printf("�Է� : ");
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
	//�������� 2��
    /*
	char szBuffer[100] = { 0 };
	int Index = 0, i = 0; // ī���� ����.

	printf("�Է� : ");
	gets_s(szBuffer, sizeof(szBuffer));
	for (i = 0; i < 100; ++i)
	{
		if (szBuffer[i] == '\0')
			break;
		else
			Index++;
	}

	printf("�ѱ� ������ ������ %d�� �Դϴ�.\n", Index/2);
    */

	return 0;
}