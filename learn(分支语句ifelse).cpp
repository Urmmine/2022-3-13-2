#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//分支语句（选择结构）

//if语句
/*
//常规写法
if (表达式)
	语句；

//单分支
if （表达式）
	语句1；

else
	语句2


//多分支
if （表达式1）
	语句1；
else if（表达式2）
	语句2；
else 
	语句3；

*/

//int main()
//{
//	int age = 10;
//
//	if (age >= 18)
//		printf("成年\n");
//	else
////if和else只能控制一句语句
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}


////多分支
//int main()
//{
//	int age = 20;
//
//	if (age < 10)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
////age为60时，先执行18<=age，为真，取1
//		printf("青年\n");
//	else if (age >= 26 && age <= 60)
//		printf("中年\n");
//	else if (age >= 40 && age <= 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("长寿\n");
//
//
//	return 0;
//}

////悬空else
////else和最近的if匹配
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

////if 执行后不会往后执行
//int test()
//{
//	if (1)
//		return 0;
//	//return 0 执行后不会再往后执行
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
//	//if (5 == num) 常量放在左边避免出错 常量5无法被赋值
//		printf("hehe\n");
//
//	return 0;
//}


//判断一个数是否为奇数
int main()
{
	int num = 15;
	if (num % 2 == 1)
		printf("奇数\n");

	return 0;
}

//输出1-100中的奇数
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
