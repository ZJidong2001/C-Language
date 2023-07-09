#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// strcpy
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };  // 目标空间
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxx";  // 调试 验证是否拷贝字符串结束标志
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";  // 目标空间
//	char arr2[] = "hello";
//
//	char* ret = strcpy(arr1, arr2);  // 接收strcpy函数的返回值
//	
//	printf("%s\n", arr1);
//	printf("%s\n", ret);  // 返回值为arr1数组的地址
//
//	return 0;
//}

// memset
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello bit";  // 改为xxxxx bit
//
//	char* ret = (char*)memset(arr, 'x', 5);  // 注意以字节为单位进行填充
//
//	printf("%s\n", arr);
//	printf("%s\n", ret);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 5);  // 调试发现不是1 1 1 1 1 0 0 0 0 0，注意以字节为单位
//	return 0;
//}

// 自定义函数（求两个函数的较大值）
//int get_max(int x, int y)  // x、y形式参数
//{
//	return (x > y ? x : y);  // 与函数返回类型保持统一
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	// 求2个数的较大值
//	int max = get_max(a, b);  // a、b实际参数
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 自定义函数（交换两个数）
//int main()  // 不用函数实现
//{
//	int a = 10;
//	int b = 20;
//
//	int c = 0;
//
//	printf("交换前: a = %d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后: a = %d b=%d\n", a, b);
//
//	return 0;
//}
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()  // 传值调用 - error
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前: a = %d b=%d\n", a, b);
//	Swap(a, b);  // 实参a和b传给形参x和y的时候，形参将是实参的一份临时拷贝。改变形参变量x和y，是不会影响实参x和y的。
//	printf("交换后: a = %d b=%d\n", a, b);
//
//	return 0;
//}
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()  // 传址调用
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前: a = %d b=%d\n", a, b);
//	Swap(&a, &b);  // 通过地址与形参建立联系
//	printf("交换后: a = %d b=%d\n", a, b);
//
//	return 0;
//}

//#include <math.h>
//int is_prime(int n)  // 如果是素数，返回1；如果不是素数，返回0
//{
//	// 判断n是否为素数
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//
//	if (is_prime(i) == 1)
//		printf("%d是素数\n", i);
//	else
//		printf("%d不是素数\n", i);
//	return 0;
//}

//int is_leap_year(int y)  // 如果是闰年，返回1；如果不是闰年，返回0
//{
//	// 判断y是否为闰年
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int is_leap_year(int y)  // error 2000年是闰年，但是程序却判定不是闰年
//{
//	if (y % 4 == 0)
//	{
//		if (y % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	else if (y % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year(int y)  // right
//{
//	if (y % 4 == 0)
//	{
//		if (y % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	if (y % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int is_leap_year(int y)  // 最简单写法
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//
//	if (is_leap_year(y) == 1)
//		printf("%d是闰年\n", y);
//	else
//		printf("%d不是闰年\n", y);
//	return 0;
//}

// 写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[], int k, int sz)  // 如果找到了，返回数组下标；如果找不到，返回-1
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//
//	int ret = binary_search(arr, k, sz);  // TDD - 测试驱动开发
//
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("该元素在数组的下标为%d\n", ret);
//
//	return 0;
//}

//void Add(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//
//	Add(&num);
//	printf("%d\n", num);  // 1
//
//	Add(&num);
//	printf("%d\n", num);  // 2
//
//	Add(&num);
//	printf("%d\n", num);  // 3
//
//	Add(&num);
//	printf("%d\n", num);  // 4
//
//	return 0;
//}

//int main()  // err - 函数不能嵌套定义
//{
//	void test()
//	{
//		printf("1");
//	}
//
//	return 0;
//}

// 函数可以嵌套调用
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

// 函数链式访问 - 把一个函数的返回值作为另外一个函数的参数
//#include <string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));  // 链式访问
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[20] = "abc";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	printf("%s\n", strcpy(arr1, arr2));  // 链式访问
//	return 0;
//}
int main()
{
	// printf函数的返回值为打印在屏幕上的字符的个数，如果发生错误，将返回负数
	printf("%d", printf("%d", printf("%d", 43)));  // 结果为4321
	return 0;
}