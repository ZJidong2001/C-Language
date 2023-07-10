#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 正常书写
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

// 把函数定义在后面 - 编译器报警告Add未定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

// 函数必须要满足先声明后使用
//extern int Add(int x, int y);  // 函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

// 函数声明一般放在头文件中，函数定义放在源文件中
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

// 导入外包静态库，看不到函数源码，实现过程封装和细节隐藏
//#include "add.h"
//#pragma comment (lib,"2021_07_23_ADD.lib")  // 没必要将.lib文件加入工程中（看不懂），通过该段代码使用
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int ret = Add(a, b);
//
//	printf("%d\n", ret);
//	return 0;
//}

// 接受一个整型值（无符号），按照顺序打印它的每一位
//void print(unsigned int n)
//{
//	if (n > 9)  // 存在限制条件，当满足这个限制条件的时候，递归便不再继续。无此限制死循环栈溢出
//	{
//		print(n / 10);  // 每次递归调用之后越来越接近这个限制条件。若print(n)死循环
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

// 编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* s)  // 非递归
//{
//	int count = 0;  // 创建临时变量，不符合题意
//	while (*s != '\0')
//	{
//		count++;
//		s++;  // 指针加1，并不是字节加1，也不是加整个数组，而是加一个单元格
//	}
//	return count;
//}
//int my_strlen(char* s)  // 递归
//{
//	if (*s != '\0')
//	{
//		return 1 + my_strlen(s + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	// 数组名arr是数组首元素的地址 - char*
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

// 求n的阶乘
//int Fac(int n)  // 迭代（简单理解为循环）
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int n)  // 递归
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

// 求第n个斐波那契数
//int Fib(int n)  // 递归，较大数时计算效率低
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)  // 迭代，计算效率快
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}

// 什么时候用递归？
// 1.当解决一个问题时，递归和非递归都可以使用，且没有明显问题，那就可以用递归
// 2.当解决一个问题时，递归写起来很简单，非递归比较复杂，且递归没有明显问题，那就用递归
// 3.如果用递归解决问题，写起来简单，但是有明显问题，那就不能使用递归，得写出非递归的方式来解决