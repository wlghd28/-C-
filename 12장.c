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
	//문자열을 복사하는 함수 만들기.
	/*
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
	puts(szBufferDst);
	*/

	//연습문제 1번
	/*
	char szBuffer[12] = { "TestString" };
	char szBuffer2[12] = { 0 };

	printf("검색할 문자입력 : ");
	gets_s(szBuffer2, 12);
	MyStrstr(szBuffer, szBuffer2, sizeof(szBuffer));
	*/

	//연습문제 2번
	/*
	char* aList[5] = {
		"정형돈",
		"노홍철",
		"하하",
		"유재석",
		"박명수"
	};
	int i = 0;

	SortString(aList, 5);

	for (i = 0; i < 5; ++i)
	{
		puts(aList[i]);
	}
	*/

	//연습문제 3번
	/*
	int aList[5][4] = {
		1,2,3,4,
		5,6,7,8,
		9,10,11,12,
		13,14,15,16,
		17,18,19,20
	};

	printf("배열 요소의 총합 : %d\n",GetTotal(aList, 5));
	*/

	//연습문제 4번
	/*
	char szBuffer[12] = { "Teststring" };
	char szBuffer2[12] = { "TestString" };
	int tmp = 0;

	tmp = MyStrcmp(szBuffer, 12, szBuffer2, 12);
	if (tmp == 0)
		printf("두 문자열은 같습니다.\n");
	else
		printf("두 문자열은 다릅니다.\n");
	*/

	//연습문제 5번
	/*
	int User = 0, Com = 0;

	printf("0 : 가위, 1 : 바위, 2 : 보\n입력 : ");
	scanf_s("%d", &User);
	srand((unsigned)time(NULL));
	Com = (int)rand() % 3;
	switch (User-Com)
	{
	    case 0:
			printf("사용자 : %d, 컴퓨터 : %d\n비겼습니다.\n", User, Com);
			break;
		case 1:
			printf("사용자 : %d, 컴퓨터 : %d\n승자 : 사용자\n", User, Com);
			break;
		case 2:
			printf("사용자 : %d, 컴퓨터 : %d\n승자 : 컴퓨터\n", User, Com);
			break;
		case -1:
			printf("사용자 : %d, 컴퓨터 : %d\n승자 : 컴퓨터\n", User, Com);
			break;
		case -2:
			printf("사용자 : %d, 컴퓨터 : %d\n승자 : 사용자\n", User, Com);
			break;
		default:
			printf("입력 오류!!\n");
	}
	*/

	//연습문제 6번
	/*
	int Month = 0, day = 0;

	printf("날짜 입력(월 일) : ");
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
			printf("입력 오류\n");
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
		printf("문자열 범위가 초과되었습니다.\n");
		return -1;
	}
	for (int i = 0; i < Length + 1; ++i)
	{
		if (strncmp(szBuffer + i, szBuffer2, Length) == 0)
		{
			printf("검색성공!\n검색된 문자열의 주소인덱스 : %d\n", i);
			return 0;
		}
	}
	printf("검색실패!\n");
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
		printf("10일후 날짜 : %d월 %d일\n", Month, day);
	}
	else
		printf("10일후 날짜 : %d월 %d일\n", Month, day + 10);
	Month = Tmp;
	day = Tmp2;
	if (day + 100 > Num2)
	{
		Month += 4;
		if (Month > 12)
			Month -= 12;
		day = day + 100 - Num2;
		printf("100일후 날짜 : %d월 %d일\n", Month, day);
	}
	else
	{
		Month += 3;
		if (Month > 12)
			Month -= 12;
		day = day + 100 - Num3;
		printf("100일후 날짜 : %d월 %d일\n", Month, day);
	}
}