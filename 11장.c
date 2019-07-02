#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetLength(char* szBuffer);
void MyStrrev(char* szBuffer);
int main(void)
{
	//중대한 두가지 오류
	/*
	char szBuffer[12] = { "HelloWorld" };
	char *pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	memcpy(pszData, szBuffer, 12);
	//pszData = szBuffer;// 심각한 오류 1)
	puts(pszData);

	free(pszData);// 빼먹을 시 심각한 오류 2)
	*/

	//문자열과 상대주소 계산
	/*
	char szBuffer[32] = { "You are a girl." };
	char *pszData = szBuffer + 4;

	printf("%c\n", szBuffer[0]);
	printf("%c\n", pszData[0]);
	printf("%c\n", pszData[6]);

	printf("%s\n", szBuffer + 4);
	printf("%s\n", pszData);
	printf("%s\n", pszData + 4);
	*/

	//연습문제 2번
	//printf("%d", GetLength("노지홍"));

	//연습문제 4번
	/*
	char szBuffer[20] = "Hello World!";
	MyStrrev(szBuffer);
	printf("%s\n", szBuffer);
	*/

	//연습문제 5번
	/*
	int Tmp = 0;
	char szBuffer[20] = { 0 };

	gets_s(szBuffer,sizeof(szBuffer));
	Tmp = strlen(szBuffer);

	char* Teststring1 = (char*)malloc(sizeof(char)*(strlen(szBuffer)+1));

	strcpy_s(Teststring1, strlen(szBuffer) + 1, szBuffer);
	printf("%s\n", Teststring1);

	gets_s(szBuffer, sizeof(szBuffer));
	Teststring1 = realloc(Teststring1, sizeof(char)*(strlen(szBuffer) + 1 + Tmp));

	if (Teststring1 == NULL)
		return 0;

	strcat_s(Teststring1, strlen(szBuffer) + 1 + Tmp, szBuffer);
	printf("%s\n", Teststring1);

	free(Teststring1);
	*/

	//연습문제 6번
	/*
	int Num = 0, Length = 0;
	printf("저장할 개수 입력 : ");
	scanf_s("%d", &Num);
	printf("입력할 문자열의 최대 길이 : ");
	scanf_s("%d", &Length);
	getchar();
	char** szBuffer = (char**)malloc(sizeof(char*)*Num);

	for (int i = 0; i < Num; ++i)
	{
		szBuffer[i] = (char*)malloc(sizeof(char)*(Length+1));
		gets_s(szBuffer[i],sizeof(char)*(Length+1));
	}
	for (int i = 0; i < Num; ++i)
	{
		printf("%s\n", szBuffer[i]);
		free(szBuffer[i]);
	}
	
	free(szBuffer);
	*/

	return 0;
}

int GetLength(char* szBuffer)
{
	return strlen(szBuffer);
}

void MyStrrev(char* szBuffer)
{
	char* szBuffer2 = NULL;
	szBuffer2 = (char*)malloc(sizeof(char)*(strlen(szBuffer)+1));
	for (int i = 0; i < strlen(szBuffer); ++i)
	{
		szBuffer2[i] = szBuffer[strlen(szBuffer)-1-i];
	}
	memcpy(szBuffer, szBuffer2, strlen(szBuffer));
	free(szBuffer2);
}