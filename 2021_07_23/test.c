#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ������д
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

// �Ѻ��������ں��� - ������������Addδ����
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

// ��������Ҫ������������ʹ��
//extern int Add(int x, int y);  // ��������
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

// ��������һ�����ͷ�ļ��У������������Դ�ļ���
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

// ���������̬�⣬����������Դ�룬ʵ�ֹ��̷�װ��ϸ������
//#include "add.h"
//#pragma comment (lib,"2021_07_23_ADD.lib")  // û��Ҫ��.lib�ļ����빤���У�����������ͨ���öδ���ʹ��
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

// ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//void print(unsigned int n)
//{
//	if (n > 9)  // ���������������������������������ʱ�򣬵ݹ�㲻�ټ������޴�������ѭ��ջ���
//	{
//		print(n / 10);  // ÿ�εݹ����֮��Խ��Խ�ӽ����������������print(n)��ѭ��
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

// ��д��������������ʱ���������ַ����ĳ���
//int my_strlen(char* s)  // �ǵݹ�
//{
//	int count = 0;  // ������ʱ����������������
//	while (*s != '\0')
//	{
//		count++;
//		s++;  // ָ���1���������ֽڼ�1��Ҳ���Ǽ��������飬���Ǽ�һ����Ԫ��
//	}
//	return count;
//}
//int my_strlen(char* s)  // �ݹ�
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
//	// ������arr��������Ԫ�صĵ�ַ - char*
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

// ��n�Ľ׳�
//int Fac(int n)  // �����������Ϊѭ����
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac(int n)  // �ݹ�
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

// ���n��쳲�������
//int Fib(int n)  // �ݹ飬�ϴ���ʱ����Ч�ʵ�
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fib(int n)  // ����������Ч�ʿ�
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

// ʲôʱ���õݹ飿
// 1.�����һ������ʱ���ݹ�ͷǵݹ鶼����ʹ�ã���û���������⣬�ǾͿ����õݹ�
// 2.�����һ������ʱ���ݹ�д�����ܼ򵥣��ǵݹ�Ƚϸ��ӣ��ҵݹ�û���������⣬�Ǿ��õݹ�
// 3.����õݹ������⣬д�����򵥣��������������⣬�ǾͲ���ʹ�õݹ飬��д���ǵݹ�ķ�ʽ�����