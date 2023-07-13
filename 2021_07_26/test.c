#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 回顾分支循环练习

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

// getchar是读取字符，为什么返回类型是int？
// 1.getchar既然返回的是字符，其实返回的是字符的ASCII码值（整数）
// 2.getchar在读取结束或失败的时候，会返回EOF（end of file，-1）

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0; 
//}
//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）>:");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0; 
//}
//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）>:");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

// 函数递归作业

//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;  // err，不能通过return把函数处理结果的两个数据返回给主函数，逗号表达式返回b
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);  // 20
//	return 0;
//}

//void test(int arr[])  // 形参用数组可以把函数处理结果的两个数据返回给主函数
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);  // 10 20
//	return 0;
//}

//void test(int* px, int* py)  // 形参用两个指针可以把函数处理结果的两个数据返回给主函数
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n", x, y);  // 10 20
//	return 0;
//}

//int x = 0;  // 用两个全局变量可以把函数处理结果的两个数据返回给主函数
//int y = 0;
//void test()
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", x, y);  // 10 20
//	return 0;
//}

// 乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

// 字符串逆序（难）
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)  // 非递归
//{
//	int len = my_strlen(str);
//
//	//char* left = str;  // 地址
//	//char* right = str + len - 1;
//	int left = 0;  // 下标
//	int right = len - 1;
//
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* str)  // 递归
//{
//	int len = my_strlen(str);
//
//	char tmp = str[0];
//	str[0] = str[len - 1];
//
//	str[len - 1] = '\0';
//
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char arr[20] = "abcdef";  // 数组内容可以被修改
//	//char* arr = "abcdef";  // err — char*声明的字符串常量在内存中是以只读的方式存储的，不能被修改；而char[]声明的字符数组可以被修改。
//	
//	reverse_string(arr);
//	// 数组名是首元素的地址
//	// 首元素是char类型
//	// char*
//
//	printf("%s\n", arr);
//
//	return 0;
//}

// 计算一个数的每位之和
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}

// 递归实现n的k次方（难）
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1.0;
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 2;
//	int k = -3;
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

// 数组章节

//int arr[20];  // 全局创建数组，调试发现数组里面默认初始化为0
//int main()
//{
//	int arr1[20];  // 局部创建数组，调试发现数组里面全是随机值
//
//	int count = 10;
//	int arr2[count];  // err - 数组创建，[]中要给一个常量才可以，不能使用变量
//
//	int arr3[20] = { 1,2,3 };  // 不完全初始化 - 除了部分初始化外，其余数值默认初始化为0
//
//	int arr4[] = { 1,2,3 };  // 创建数组未指明大小时，根据初始化数据的个数确定它的大小
//
//	int arr5[3] = { 1,2,3,4 };  // err - 初始值设定项太多，数组放不下
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";  // a b c \0 - 4byte
//	char arr2[] = { 'a','b','c' };  // a b c - 3byte
//	char arr3[] = { 'a',98,'c' };  // 98是b的ASCII码值，数组里面存的是98
//
//	return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//
//    int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组的元素个数
//
//    int i = 0;
//    for (i = 0; i < sz; ++i)  // 输出数组的内容，数组是使用下标来访问的，下标从0开始
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

int main()  // 随着下标的增长，元素的地址也在有规律的递增，说明数组在内存中是连续存放的
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	return 0;
}