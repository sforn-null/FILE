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
//���һ������:��ʼλ��������ѡ�� 
//SEEK_CUR  �ļ���ǰλ��
//SEEK_SET  �ļ���ʼλ��
//SEEK_END  �ļ�����λ��

//int main()
//{
//	FILE* pf = fopen("test.txt", "r+");
//	//a��׷�ӵ���˼��ָ�����ļ���ĩβ
//	//r+�Ƕ���д����˼�����Ҳ����½��ļ�
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
//�����ļ�ָ���������ʼλ�õ�ƫ����
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
//fgetc ��Ȼ�Ƕ�ȡһ���ַ�
//���������Ͳ���char����int
//���Խ��յ�Ҳ��int
//֮���Է���������int������Ϊ��ȡ��ĩβʱ�����ص���EOF
//��EOF��ֵ��-1
//-1�Ž�char�����ǷŲ��µ�


//rewind
//���ļ�ָ���λ�ûص���ʼλ��

//feof
//�ļ������ж�
//*****�μ�:���ļ���ȡ�����У�
//������feof�����ķ���ֱֵ���ж��ļ��Ƿ����.
//����Ӧ���ڵ��ļ���ȡ����ʱ��
//�ж��Ƕ�ȡʧ�ܽ����ģ����������ļ�ĩβEOF������

//Ҫ�����ж��Ƿ��ȡ����
//�ı��ļ���
//fgetc�ķ���ֵ�ǲ���EOF
//fgets�ķ���ֵ�ǲ���NULL�������NULL��ʧ����
// fgetsӦ�÷����ַ������׵�ַ
//�������ļ���
//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���