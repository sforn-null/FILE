#include<stdio.h>

int main()
{
	int ch = 0;
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		perror("fopen");
		return -1;
	}
	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwrite == NULL)
	{
		perror("fopen");
		pfwrite = NULL;
		fclose(pfread);
		return -1;
	}
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch,pfwrite);	
	}
		
	pfread = NULL;
	fclose(pfwrite);
	
	return 0;
}