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
	//�̺�Ʈ ����
	/*
	int nMenu = 0;

	while ((nMenu = PrintMenu()) != 0)
	{
		switch (nMenu)
		{
		case 1:
			puts_s("�� �׸��� �߰��մϴ�.");
			break;

		case 2:
			puts_s("���� �׸񿡼� �˻��մϴ�.");
			break;

		case 3:
			puts_s("��ü ������ ����մϴ�.");
			break;

		case 4:
			puts_s("���� �׸��� �����մϴ�.");
			break;

		default:
			puts_s("�� �� ���� ����Դϴ�.");
		}
		_getch();
	}
	puts_s("Bye~~!");
	*/

	//����ڰ� �Է��� ������ �ִ� ���ϱ�� �ڵ� ����
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
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.\n",a, b, c, Max);
}
int GetData(void)
{
	int nData = 0;
	
	printf("������ �Է��ϼ���. : ");
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