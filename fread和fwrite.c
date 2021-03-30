#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "张三",20,66.5f };
//	FILE*pf=fopen("test.txt", "wb");
//	//wb 是二进制的“只写”
//	//以二进制形式写入
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//	//参数:数据的地址，每个类型的大小，几个，存到哪
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	//wb 是二进制的“只读”
//	//读取二进制数据
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(s), 1, pf);
//	//参数:存到哪，每个类型的大小，几个，从哪取
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//浮点数很难在内存中精确的保存