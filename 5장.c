#include <stdio.h>

int main(void)
{
	//합격자와 불합격자를 분류하는 방법
	/*
	int Key = 0;

	printf("키를 입력하세요. : ");
	scanf_s("%d", &Key);
	Key >= 150 ? (printf("결과 : 합격\n")) : (printf("결과 : 불합격\n"));
	*/

	//세 정수 중에서 가장 큰 수 구하기(토너먼트 방식)
	/*
	int nMax = 0;
	int a, b, c;
	
	scanf_s("%d %d %d", &a, &b, &c);
	nMax = a > b ? a : b;
	nMax = nMax > c ? nMax : c;

	printf("MAX : %d\n", nMax);
	*/

	//세 정수 중에서 가장 큰 수 구하기(서바이벌 방식)
	/*
	int nMax = -100, nInput = 0;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);
	*/

	//연습문제

	int nResult, w = 0, x = -1, y = -1, z = 1;
	nResult = w++ || x++ && ++y || ++z;
	printf("%d %d %d %d %d\n", w, x, y, z, nResult);

	return 0;
}