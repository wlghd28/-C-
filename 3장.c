#include <stdio.h>

int main(void)
{
	int nAge = 0;
	char szName[12] = { 0 };
	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d%*c", &nAge);

	//getchar();
	//fflush(stdin);


	printf("�̸��� �Է��ϼ���. : ");
	gets_s(szName, sizeof(szName));
	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.\n", nAge, szName);
	return 0;
}