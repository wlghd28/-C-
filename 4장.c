#include <stdio.h>

int main(void)
{
	//4-01

	double Num1, Num2;
	printf("�� ������ �Է��ϼ���. : ");
	scanf_s("%lf %lf", &Num1, &Num2);
	printf("AVG : %.2lf\n", (Num1 + Num2) / 2);
	
	//4-02

	int second = 0;
	printf("�� �Է� : ");
	scanf_s("%d", &second);
	printf("%d�ʴ� %.2d�ð� %.2d�� %.2d�� �Դϴ�.\n", second, second / 3600, (second % 3600) / 60, (second % 3600) % 60);
	
	//�� ������ ���� �� ���

	int nInput, nTotal;
	nTotal = 0;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	printf("Total : %d\n", nTotal);


	return 0;
}