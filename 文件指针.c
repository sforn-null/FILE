#include<stdio.h>
#include<stdlib.h>

//��ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ��
//��������ļ��������Ϣ�����ļ������֣�״̬�����ͣ���ǰλ�ã�
//��Щ��Ϣ�Ǳ�����һ���ṹ������еġ�
//�ýṹ����������ϵͳ�����ģ�ȡ��FILE.


//fopen ���ļ�

int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "w");
	//�������ļ��������ļ���ģʽ
	//��������Ҫ˫���ţ���Ϊ���յ���ָ�룬����Ҫ����ַ
	//˫���ž����ַ����ˣ����е�ַ�ˣ������������ַ�
	//�ַ��ǳ�����û�е�ַ
	//fopen��������ķ���������FILE*
	//���Խ���ҲҪ��FILE*
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
		//fopenʧ�ܵĻ������ص��ǿ�ָ��
	}
	if(pf!= NULL)
	{
		//д�ļ�
		fputc('a', pf);
		fputc('b', pf);
		fputc('c', pf);
		fputc('d', pf);
		fputc('e', pf);
		fputc('q', stdout);//ֻ���������Ļ�ϣ������ǵ��ļ���
		//�ر��ļ�
		fclose(pf);
		pf = NULL;
		//�ر�֮��Ҫ�óɿ�ָ��
	}
	return 0;
	//��c��������һЩСԼ��������0�����������أ�����Ĵ�����������
}

int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");//���ļ�

	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}

	//���ļ�
	int ch = 0;
	ch = fgetc(pf);//�������������ͣ����ַ���ASCii��ֵ
	printf("%c\n", ch);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	//�ر�֮��Ҫ�óɿ�ָ��
	return 0;
}

//���һ���ַ������ļ���
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	//д��һ���ַ���
	fputs("sun\n", pf);
	fputs("yu\n", pf);
	//���д���ַ�����ʱ���ǲ��ܻ��еģ�ֻ���Լ���'\n'

	//д��һ���ַ�������Ļ
	fputs("sun", stdout);
	fclose(pf);
	pf = NULL;
	return 0;
}

//��һ���ַ���
int main()
{
	char input[20] = { 20 };
	//��������һ���ַ��洢�����������
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}
	//��һ���ַ���
	fgets(input, 20, pf);
	printf("%s", input);
	fgets(input, 20, pf);
	//һ��ֻ�ܶ�һ�����ݣ���Ҫ�����о�Ҫд����
	printf("%s", input);
	fclose(pf);
	pf = NULL;
	return 0;
}

