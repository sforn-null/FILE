#include<stdio.h>

//fprintf

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct Stu s = { "zhangsan",19,60 };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
	
	fclose(pf);
	pf = NULL;
	return 0;
}


//fscanf

struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct Stu s = {0};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	fscanf(pf, "%s %d %f",s.name,&(s.age),&(s.score));
	printf("%s %d %f", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}