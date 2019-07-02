#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int SIZE = 4096;
int main()
{
	//연습문제 1번
	/*
	FILE *fp = NULL;
	char szBuffer[20] = { 0 };

	printf("입력 : ");
	gets_s(szBuffer, sizeof(szBuffer));

	fopen_s(&fp,"TestFile.txt","w");
	if (fp == NULL)
	{
		puts("ERROR : Failed to open file!\n");
		return 0;
	}
	else
	{
		fputs(szBuffer,fp);
	}
	fclose(fp);

	fopen_s(&fp, "TestFile.txt", "r");
	if (fp == NULL)
	{
		puts("ERROR : Failed to open file!\n");
		return 0;
	}
	else
	{
		fgets(szBuffer,sizeof(szBuffer), fp);
		printf("출력 : %s\n", szBuffer);
		memset(szBuffer, 0, sizeof(szBuffer));
	}
	fclose(fp);
	*/

	//연습문제 2번
	/*
	FILE *fp = NULL;
	char szBuffer[20] = { 0 };

	printf("입력 : ");
	gets_s(szBuffer, sizeof(szBuffer));
	fopen_s(&fp, "TestFile.txt", "a+");
	if (fp == NULL)
	{
		puts("ERROR : Failed to open file!\n");
		return 0;
	}
	else
	{
		fputs(szBuffer, fp);
	}
	fclose(fp);
	*/

	//연습문제 3번
	/*
	FILE *fp = NULL, *fp2 = NULL;
	char szBuffer[512] = { 0 };

	fopen_s(&fp, "TestFile.txt", "r");
	fopen_s(&fp2, "DstFile.txt", "a+");
	if(fp==NULL || fp2 == NULL)
	{
		puts("ERROR : Failed to open file!\n");
		return 0;
	}
	else
	{
		fgets(szBuffer, sizeof(szBuffer), fp);
		fputs(szBuffer, fp2);
	}
	fclose(fp2);
	fclose(fp);
	*/

	//연습문제 4번
	/*
	FILE *fp = NULL, *fp2 = NULL;
	char *Buffer;
	double index = 0, filesize = 0;

	Buffer = (char*)malloc(sizeof(char)*SIZE);
	fopen_s(&fp, "DJ Okawari - Flower Dance.mp3", "rb");
	fopen_s(&fp2, "DJ Okawari - Flower Dance_Copy.mp3", "wb");
	if (fp == NULL || fp2 == NULL)
	{
		puts("ERROR : Failed to open file!\n");
		return 0;
	}
	else
	{
		fseek(fp, 0, SEEK_END);
		filesize = ftell(fp);
		fseek(fp, 0, SEEK_SET);
		while (index < filesize)
		{
			printf("다운로드 진행률 : %2.f\n", (double)index/filesize*100);
			fread(Buffer, SIZE, 1, fp);
			fwrite(Buffer, SIZE, 1, fp2);
			if (index + SIZE > filesize)
			{
				index += (index + SIZE - filesize);
				break;
			}
			index += SIZE;
		}
		
	}
	printf("다운로드 완료!\n");
	fclose(fp2);
	fclose(fp);
	free(Buffer);
	*/

	return 0;
}