#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int MyStrcpy(char* szBuffer1, int size, char* szBuffer2);
int MyStrstr(char* szBuffer, char* szBuffer2, int size);
void SortString(char** aList, int size);
int GetTotal(int aList[][4], int size);
int MyStrcmp(char* szBuffer, int size1, char* szBuffer2, int size2);
void Daycount(int Num, int Num2, int Num3, int Month, int day);
int main(void)
{
	//���ڿ��� �����ϴ� �Լ� �����.
	/*
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	*/

	//�������� 1��
	/*
	char szBuffer[12] = { "TestString" };
	char szBuffer2[12] = { 0 };

	printf("�˻��� �����Է� : ");
	gets_s(szBuffer2, 12);
	MyStrstr(szBuffer, szBuffer2, sizeof(szBuffer));
	*/

	//�������� 2��
	/*
	char* aList[5] = {
		"������",
		"��ȫö",
		"����",
		"���缮",
		"�ڸ��"
	};
	int i = 0;

	SortString(aList, 5);

	for (i = 0; i < 5; ++i)
	{
		puts(aList[i]);
	}
	*/

	//�������� 3��
	/*
	int aList[5][4] = {
		1,2,3,4,
		5,6,7,8,
		9,10,11,12,
		13,14,15,16,
		17,18,19,20
	};

	printf("�迭 ����� ���� : %d\n",GetTotal(aList, 5));
	*/

	//�������� 4��
	/*
	char szBuffer[12] = { "Teststring" };
	char szBuffer2[12] = { "TestString" };
	int tmp = 0;

	tmp = MyStrcmp(szBuffer, 12, szBuffer2, 12);
	if (tmp == 0)
		printf("�� ���ڿ��� �����ϴ�.\n");
	else
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");
	*/

	//�������� 5��
	/*
	int User = 0, Com = 0;

	printf("0 : ����, 1 : ����, 2 : ��\n�Է� : ");
	scanf_s("%d", &User);
	srand((unsigned)time(NULL));
	Com = (int)rand() % 3;
	switch (User-Com)
	{
	    case 0:
			printf("����� : %d, ��ǻ�� : %d\n�����ϴ�.\n", User, Com);
			break;
		case 1:
			printf("����� : %d, ��ǻ�� : %d\n���� : �����\n", User, Com);
			break;
		case 2:
			printf("����� : %d, ��ǻ�� : %d\n���� : ��ǻ��\n", User, Com);
			break;
		case -1:
			printf("����� : %d, ��ǻ�� : %d\n���� : ��ǻ��\n", User, Com);
			break;
		case -2:
			printf("����� : %d, ��ǻ�� : %d\n���� : �����\n", User, Com);
			break;
		default:
			printf("�Է� ����!!\n");
	}
	*/

	//�������� 6��
	/*
	int Month = 0, day = 0;

	printf("��¥ �Է�(�� ��) : ");
	scanf_s("%d %d", &Month, &day);
	switch (Month)
	{
	    case 1:
			Daycount(31, 120, 90, Month, day);
			break;
		case 2:
			Daycount(28, 120, 89, Month, day);
			break;
		case 3:
			Daycount(31, 122, 92, Month, day);
			break;
		case 4:
			Daycount(30, 122, 91, Month, day);
			break;
		case 5:
			Daycount(31, 123, 92, Month, day);
			break;
		case 6:
			Daycount(30, 122, 92, Month, day);
			break;
		case 7:
			Daycount(31, 123, 92, Month, day);
			break;
		case 8:
			Daycount(31, 122, 92, Month, day);
			break;
		case 9:
			Daycount(30, 122, 91, Month, day);
			break;
		case 10:
			Daycount(31, 123, 92, Month, day);
			break;
		case 11:
			Daycount(30, 120, 92, Month, day);
			break;
		case 12:
			Daycount(31, 121, 90, Month, day);
			break;
		default:
			printf("�Է� ����\n");
	}
	*/

	return 0;
}

int MyStrcpy(char* szBuffer1, int size, char* szBuffer2)
{
	int i = 0, Length = 0;
	Length = strlen(szBuffer2);

	if (Length + 1 > size)
		return -1;
	while(szBuffer2[i] != NULL)
	{
		szBuffer1[i] = szBuffer2[i];
		i++;
	}
	return 0;
}

int MyStrstr(char* szBuffer, char* szBuffer2, int size)
{
	int Length = 0;
	Length = strlen(szBuffer2);

	if (Length + 1 > size)
	{
		printf("���ڿ� ������ �ʰ��Ǿ����ϴ�.\n");
		return -1;
	}
	for (int i = 0; i < Length + 1; ++i)
	{
		if (strncmp(szBuffer + i, szBuffer2, Length) == 0)
		{
			printf("�˻�����!\n�˻��� ���ڿ��� �ּ��ε��� : %d\n", i);
			return 0;
		}
	}
	printf("�˻�����!\n");
	return -1;
}

void SortString(char** aList, int size)
{
	int i = 0, j = 0;
	char* nTmp = 0;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
			if (strcmp(aList[i], aList[j]) > 0)
			{
				nTmp = aList[i];
				aList[i] = aList[j];
				aList[j] = nTmp;
			}
		}
	}
}

int GetTotal(int aList[][4], int size)
{
	int i = 0, j = 0, nTotal = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			nTotal += aList[i][j];
		}
	}
	return nTotal;
}

int MyStrcmp(char* szBuffer, int size1, char* szBuffer2, int size2)
{
	if (strlen(szBuffer) != strlen(szBuffer2))
		return 1;
	else
	{
		for (int i = 0; i < (strlen(szBuffer) + 1); ++i)
		{
			if (szBuffer[i] == szBuffer2[i] || szBuffer[i]-szBuffer2[i] == 32
				|| szBuffer[i] - szBuffer2[i] == -32)
				continue;
			else
				return 1;
		}
		return 0;
	}
}

void Daycount(int Num, int Num2, int Num3, int Month, int day)
{
	int Tmp = Month;
	int Tmp2 = day;
	if (day + 10 > Num)
	{
		Month++;
		if (Month > 12)
			Month -= 12;
		day = day + 10 - Num;
		printf("10���� ��¥ : %d�� %d��\n", Month, day);
	}
	else
		printf("10���� ��¥ : %d�� %d��\n", Month, day + 10);
	Month = Tmp;
	day = Tmp2;
	if (day + 100 > Num2)
	{
		Month += 4;
		if (Month > 12)
			Month -= 12;
		day = day + 100 - Num2;
		printf("100���� ��¥ : %d�� %d��\n", Month, day);
	}
	else
	{
		Month += 3;
		if (Month > 12)
			Month -= 12;
		day = day + 100 - Num3;
		printf("100���� ��¥ : %d�� %d��\n", Month, day);
	}
}