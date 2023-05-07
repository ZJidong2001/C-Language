#define _CRT_SECURE_NO_WARNINGS

// 猜数字游戏
// 1.生成一个随机数
// 2.猜数字（反馈猜大、猜小、猜对）
// 3.可以反复玩

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
void game()
{
	int ret = rand() % 100 + 1;  // rand函数生成随机数 需要包含<stdlib.h> 但生成的是假随机数 还需要调用srand函数
	int guess = 0;
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");

		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));  // srand函数设置随机数的生成起点 需包含<stdlib.h> 调srand函数最好只调用一次 每次玩游戏都设置生成起点时间间隔小时数值有可能一样
	// time函数时间戳 随时在变 可作为srand函数的参数 需包含<time.h>
	do
	{
		menu();  // 打印菜单

		printf("请选择>:");  // 对菜单做出选择
		scanf("%d", &input);  // 1 or 0

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}

// 小乐乐查找数字 https://www.nowcoder.com/practice/4c49a3a1559141f7a080a48c98cca4cb?tpId=107&&tqId=33411&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//int main()
//{
//    int arr[101] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int m = 0;
//        scanf("%d", &m);
//        arr[m]++;
//    }
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d", arr[x]);
//    return 0;
//}

// 给定两个数，求这两个数的最大公约数
//int main()  // 法一（暴力求解）：在1和给定两个数的较小值之间依次寻找
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? b : a);  // 最大公约数一定不大于给定两个数的较小值
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("最大公约数是：%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
//int main()  // 法二（辗转相除）：除数赋值给被除数，余数赋值给除数，辗转相除直至余数为0，此时除数为最大公约数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = 0;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("最大公约数是：%d\n", b);
//	return 0;
//}

// 给定两个数，求这两个数的最小公倍数
// 上面已经求得最大公约数，将给定两个数相乘再除以最大公约数，得到的结果即最小公倍数

// 打印1000年到2000年之间的闰年
// 1.能被4整除，不能被100整除
// 2.能被400整除
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//			printf("%d ", y);
//		else if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//			printf("%d ", y);
//		if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()  // error 少1200，1600，2000
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//				printf("%d ", y);
//		}
//		else if (y % 400 == 0)  // if与else if只能选择一个进入，而if与if二者之间是独立的
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//				printf("%d ", y);
//		}
//		if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			printf("%d ", y);
//	}
//	return 0;
//}

// 打印100到200之间的素数（只能被1和它本身整除的数字）
//int main()  // 拿2~i-1的数字去试除i
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//#include <math.h>
//int main()  // 拿2~sqrt(i)的数字去试除i
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)  // sqrt函数 开平方 需包含<math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//#include <math.h>
//int main()  // 拿2~sqrt(i)的数字去试除i 素数只会在奇数里产生
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		// 判断i是否为素数
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)  // sqrt函数 开平方 需包含<math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}

// 编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)  // 个位是9
//			count++;
//		if (i / 10 == 9)  // 十位是9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		// 不要写成if...else if...，个位和十位的判断是独立的
//		if (i % 10 == 9)  // 个位是9
//			count++;
//		else if (i / 10 == 9)  // 十位是9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

// 计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// 求10个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = 0;
//	max = arr[0];  // 假设第一个元素就是最大的
//	for (i = 1; i < 10; i++)  // 拿剩下的9个元素与max比较
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// 在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	//控制行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印每一行内容，每行有i个表达式
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}