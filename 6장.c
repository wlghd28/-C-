#include <stdio.h>

int main(void)
{
	//if���� �̿��� �ִ� ���ϱ�(�����̹� ���)
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

	//������� ��� ���α׷�
	/*
	double cost = 1000;
	int nAge = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &nAge);
	if (nAge < 20)
		cost *= (double)0.75;
	printf("������� : %.0f��", cost);
	*/

	//���̿� ���� �з� �� ��ݰ��
	/*
	double cost = 1000;
	int nAge = 0;
	printf("���� �Է� : ");
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
	printf("������� : %.0f��", cost);
	*/
	//�ܰ躰 �з��� ���� ������� ���
	/*
	int nAge = 0;
	double cost = 1000;

	printf("�Է� : ");
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

	printf("������� : %0.f\n", cost);
	*/

	//�������� 1��
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

	printf("�ִ� : %d\n", nMax);
	*/

	return 0;
}