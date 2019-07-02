#include <stdio.h>

int main(void)
{
	//4-01

	double Num1, Num2;
	printf("두 정수를 입력하세요. : ");
	scanf_s("%lf %lf", &Num1, &Num2);
	printf("AVG : %.2lf\n", (Num1 + Num2) / 2);
	
	//4-02

	int second = 0;
	printf("초 입력 : ");
	scanf_s("%d", &second);
	printf("%d초는 %.2d시간 %.2d분 %.2d초 입니다.\n", second, second / 3600, (second % 3600) / 60, (second % 3600) % 60);
	
	//세 정수의 누적 및 출력

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