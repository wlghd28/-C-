#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*
int PrintMenu(void)
{
	int nInput = 0;

	system("cls");

	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);

	return nInput;
}
*/
void PrintData(int a, int b, int c, int Max);
int GetData(void);
int GetMax(int a, int b, int c);
int GetMin(int a, int b, int c, int d);
double GetFee(double Fee, int Age);
int main(void)
{
	//이벤트 루프
	/*
	int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts_s("새 항목을 추가합니다.");
			break;

		case 2:
			puts_s("기존 항목에서 검색합니다.");
			break;

		case 3:
			puts_s("전체 내용을 출력합니다.");
			break;

		case 4:
			puts_s("기존 항목을 삭제합니다.");
			break;

		default:
			puts_s("알 수 없는 명령입니다.");
		}
		_getch();
	}
	puts_s("Bye~~!");
	*/

	//사용자가 입력한 값에서 최댓값 구하기와 코드 분할
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}
	nMax = GetMax(aList[0], aList[1], aList[2]);

	PrintData(aList[0], aList[1], aList[2], nMax);

	return 0;
}
void PrintData(int a, int b, int c, int Max)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n",a, b, c, Max);
}
int GetData(void)
{
	int nData = 0;
	
	printf("정수를 입력하세요. : ");
	scanf_s("%d", &nData);

	return nData;
}
int GetMax(int a, int b, int c)
{
	int nMax = 0;

	nMax = a;
	if (nMax < b)
		nMax = b;
	if (nMax < c)
		nMax = c;

	return nMax;
}
int GetMin(int a, int b, int c, int d)
{
	int nMin = 0;

	nMin = a;
	if (nMin > b)
		nMin = b;
	if (nMin > c)
		nMin = c;
	if (nMin > d)
		nMin = d;

	return nMin;
}
double GetFee(double Fee, int Age)
{
	double nFee[20] = { 
		0,0,0,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.75,0.75,0.75,0.75,0.75,0.75 
	};
	double TotalFee = 0;

	if (Age < 20 && Age >= 0)
		return TotalFee = Fee * nFee[Age];
	else
		return TotalFee = Fee;
}