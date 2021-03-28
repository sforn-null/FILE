#include<stdio.h>
#include<stdlib.h>

//被使用的文件都在内存中开辟了一个相应的文件信息区
//用来存放文件的相关信息（如文件的名字，状态，类型，当前位置）
//这些信息是保存在一个结构体变量中的。
//该结构体类型是有系统声明的，取名FILE.


//fopen 打开文件

int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "w");
	//参数：文件名，打开文件的模式
	//参数必须要双引号，因为接收的是指针，所以要传地址
	//双引号就是字符串了，就有地址了，而单引号是字符
	//字符是常量，没有地址
	//fopen这个函数的返回类型是FILE*
	//所以接收也要用FILE*
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
		//fopen失败的话，返回的是空指针
	}
	if(pf!= NULL)
	{
		//写文件
		fputc('a', pf);
		fputc('b', pf);
		fputc('c', pf);
		fputc('d', pf);
		fputc('e', pf);
		fputc('q', stdout);//只是输出到屏幕上，而不是到文件中
		//关闭文件
		fclose(pf);
		pf = NULL;
		//关闭之后要置成空指针
	}
	return 0;
	//在c语言中有一些小约定，返回0代表正常返回，而别的代表不正常返回
}

int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");//读文件

	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}

	//读文件
	int ch = 0;
	ch = fgetc(pf);//返回类型是整型，是字符的ASCii码值
	printf("%c\n", ch);
	//关闭文件
	fclose(pf);
	pf = NULL;
	//关闭之后要置成空指针
	return 0;
}

//输出一行字符串到文件中
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	//写入一行字符串
	fputs("sun\n", pf);
	fputs("yu\n", pf);
	//多次写入字符串的时候是不能换行的，只能自己加'\n'

	//写入一行字符串到屏幕
	fputs("sun", stdout);
	fclose(pf);
	pf = NULL;
	return 0;
}

//读一行字符串
int main()
{
	char input[20] = { 20 };
	//读出来的一行字符存储到这个数组中
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	//读一行字符串
	fgets(input, 20, pf);
	printf("%s", input);
	fgets(input, 20, pf);
	//一次只能读一行数据，想要读两行就要写两次
	printf("%s", input);
	fclose(pf);
	pf = NULL;
	return 0;
}

