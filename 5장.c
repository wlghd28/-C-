#include <stdio.h>

int main(void)
{
	//�հ��ڿ� ���հ��ڸ� �з��ϴ� ���
	/*
	int Key = 0;

	printf("Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &Key);
	Key >= 150 ? (printf("��� : �հ�\n")) : (printf("��� : ���հ�\n"));
	*/

	//�� ���� �߿��� ���� ū �� ���ϱ�(��ʸ�Ʈ ���)
	/*
	int nMax = 0;
	int a, b, c;
	
	scanf_s("%d %d %d", &a, &b, &c);
	nMax = a > b ? a : b;
	nMax = nMax > c ? nMax : c;

	printf("MAX : %d\n", nMax);
	*/

	//�� ���� �߿��� ���� ū �� ���ϱ�(�����̹� ���)
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

	//��������

	int nResult, w = 0, x = -1, y = -1, z = 1;
	nResult = w++ || x++ && ++y || ++z;
	printf("%d %d %d %d %d\n", w, x, y, z, nResult);

	return 0;
}