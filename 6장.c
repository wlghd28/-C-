#include <stdio.h>

int main(void)
{
	//if문을 이용한 최댓값 구하기(서바이벌 방식)
	/*
	int nMax, Num = 0;
	scanf_s("%d", &Num);
	nMax = Num;
	scanf_s("%d", &Num);
	if (Num > nMax)
		nMax = Num;
	scanf_s("%d", &Num);
	if (Num > nMax)
		nMax = Num;
	printf("MAX : %d\n", nMax);
	*/

	//버스요금 계산 프로그램
	/*
	double cost = 1000;
	int nAge = 0;
	printf("나이 입력 : ");
	scanf_s("%d", &nAge);
	if (nAge < 20)
		cost *= (double)0.75;
	printf("최종요금 : %.0f원", cost);
	*/

	//나이에 따른 분류 및 요금계산
	/*
	double cost = 1000;
	int nAge = 0;
	printf("나이 입력 : ");
	scanf_s("%d", &nAge);
	if (nAge < 14)
	{
		if (nAge < 3)
			cost *= 0;
		else
			cost *= 0.5;
	}
	else
	{
		if (nAge < 20)
			cost *= 0.75;
		else
			cost *= 1;
	}
	printf("최종요금 : %.0f원", cost);
	*/
	//단계별 분류에 따른 버스요금 계산
	/*
	int nAge = 0;
	double cost = 1000;

	printf("입력 : ");
	scanf_s("%d", &nAge);

	if (nAge < 4)
		cost *= 0;
	else if (nAge < 14)
		cost *= 0.5;
	else if (nAge < 20)
		cost *= 0.75;
	else if (nAge < 65)
		cost *= 1;
	else
		cost *= 0;

	printf("최종요금 : %0.f\n", cost);
	*/

	//연습문제 1번
	/*
	int nMax, nInput = 0;
	
	scanf_s("%d", &nInput);
	if (nInput < 0)
		nInput = 0;
	else if (nInput > 100)
		nInput = 100;
	nMax = nInput;
	scanf_s("%d", &nInput);
	if (nInput < 0)
		nInput = 0;
	else if (nInput > 100)
		nInput = 100;
	if (nInput > nMax)
		nMax = nInput;
	scanf_s("%d", &nInput);
	if (nInput < 0)
		nInput = 0;
	else if (nInput > 100)
		nInput = 100;
	if (nInput > nMax)
		nMax = nInput;
	scanf_s("%d", &nInput);
	if (nInput < 0)
		nInput = 0;
	else if (nInput > 100)
		nInput = 100;
	if (nInput > nMax)
		nMax = nInput;
	scanf_s("%d", &nInput);
	if (nInput < 0)
		nInput = 0;
	else if (nInput > 100)
		nInput = 100;
	if (nInput > nMax)
		nMax = nInput;

	printf("최댓값 : %d\n", nMax);
	*/

	return 0;
}