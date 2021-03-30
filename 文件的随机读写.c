#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open");
//		return -1;
//	}
//	fputs("abcdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fseek
//最后一个参数:起始位置有三种选择 
//SEEK_CUR  文件当前位置
//SEEK_SET  文件起始位置
//SEEK_END  文件结束位置

//int main()
//{
//	FILE* pf = fopen("test.txt", "r+");
//	//a是追加的意思，指针在文件的末尾
//	//r+是读和写的意思，并且不会新建文件
//	if (pf == NULL)
//	{
//		perror("open");
//		return -1;
//	}
//	fseek(pf, 3, SEEK_CUR);
//	fputc('q', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//ftell
//返回文件指针相对于起始位置的偏移量
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("open");
		return -1;
	}
	fputs("abcdef", pf);
	int ret = ftell(pf);
	printf("%d", ret);
	fclose(pf);
	pf = NULL;
	return 0;
}

//int ret = fgetc(pf);
//fgetc 虽然是读取一个字符
//但返回类型不是char而是int
//所以接收的也是int
//之所以返回类型是int，是因为读取到末尾时，返回的是EOF
//而EOF的值是-1
//-1放进char里面是放不下的


//rewind
//让文件指针的位置回到起始位置

//feof
//文件结束判定
//*****牢记:在文件读取过程中，
//不能用feof函数的返回值直接判断文件是否结束.
//而是应用于当文件读取结束时，
//判断是读取失败结束的，还是遇到文件末尾EOF结束的

//要是想判断是否读取结束
//文本文件中
//fgetc的返回值是不是EOF
//fgets的返回值是不是NULL，如果是NULL就失败了
// fgets应该返回字符串的首地址
//二进制文件中
//fread判断返回值是否小于实际要读的个数