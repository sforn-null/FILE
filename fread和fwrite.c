#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "����",20,66.5f };
//	FILE*pf=fopen("test.txt", "wb");
//	//wb �Ƕ����Ƶġ�ֻд��
//	//�Զ�������ʽд��
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//	//����:���ݵĵ�ַ��ÿ�����͵Ĵ�С���������浽��
//
//	//�ر��ļ�
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
//	//wb �Ƕ����Ƶġ�ֻ����
//	//��ȡ����������
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(s), 1, pf);
//	//����:�浽�ģ�ÿ�����͵Ĵ�С������������ȡ
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�������������ڴ��о�ȷ�ı���