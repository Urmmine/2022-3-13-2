#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��֧��䣨ѡ��ṹ��

//if���
/*
//����д��
if (���ʽ)
	��䣻

//����֧
if �����ʽ��
	���1��

else
	���2


//���֧
if �����ʽ1��
	���1��
else if�����ʽ2��
	���2��
else 
	���3��

*/

//int main()
//{
//	int age = 10;
//
//	if (age >= 18)
//		printf("����\n");
//	else
////if��elseֻ�ܿ���һ�����
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	return 0;
//}


////���֧
//int main()
//{
//	int age = 20;
//
//	if (age < 10)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
////ageΪ60ʱ����ִ��18<=age��Ϊ�棬ȡ1
//		printf("����\n");
//	else if (age >= 26 && age <= 60)
//		printf("����\n");
//	else if (age >= 40 && age <= 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("����\n");
//
//
//	return 0;
//}

////����else
////else�������ifƥ��
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}

////if ִ�к󲻻�����ִ��
//int test()
//{
//	if (1)
//		return 0;
//	//return 0 ִ�к󲻻�������ִ��
//	printf("hehe\n");
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}



//int main()
//{
//	int num = 3;
//
//	if (num == 5)
//	//if (5 == num) ����������߱������ ����5�޷�����ֵ
//		printf("hehe\n");
//
//	return 0;
//}


//�ж�һ�����Ƿ�Ϊ����
int main()
{
	int num = 15;
	if (num % 2 == 1)
		printf("����\n");

	return 0;
}

//���1-100�е�����
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	//i += 2
	{
		if (i % 2 == 1)
			printf("%d", i);
	}
	return 0;
}
