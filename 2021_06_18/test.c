#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	// while循环三大部分太分散
//	int i = 1;  // 初始化部分
//
//
//
//
//	while (i <= 10)  // 条件判断部分
//	{
//		printf("%d ", i);
//
//
//
//
//
//
//		i++;  // 调整部分
//	}
//	return 0;
//}

//int main()
//{
//	// for循环三大部分集中，易处理
//	int i = 0;
//	for (i = 1; i <= 10; i++)  // 初始化部分; 条件判断部分; 调整部分
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	// 前闭后开的写法
//	for (i = 0; i < 10; i++)  // 在该写法中循环10次一目了然
//	{
//		printf("%d ", i);
//	}
//
//	// 两边都是闭区间
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", i);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };  // 下标范围0~9
//	int i = 0;
//	for (i = 0; i < 10; i++)  // 前闭后开的写法
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	// 初始化，判断，调整三个部分省略（可以省略，但不建议）
//	for (;;)  // 死循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)  // 死循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    do
//    {
//        if (5 == i)
//            break;
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    do
//    {
//        if (5 == i)
//            continue;
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	// 在有序数组arr中找7
//	// 找到了打印下标，找不到打印找不到
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 求数组元素个数
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 有序数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	int k = 7;
//	int mid = 0;
//
//	// 折半查找（二分查找）
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "For the ideal that I hold dear to my heart,I'd not regret a thousand times to die.";
//	char arr2[] = ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
//	int left = 0;
//	int right = sizeof(arr2) / sizeof(arr2[0]) - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(300);  // 休眠操作，单位是ms，需包含<Windows.h>
//		system("cls");  // 清屏操作，system是库函数，用于执行系统命令，需包含<stdlib.h>
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char password[10] = { 0 };
//	int i = 1;
//	while (i <= 3)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)  // 两个字符串比较不能用（password == "123456"）
//		{
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，您还剩%d次输入密码的机会！\n", 3 - i);
//			i++;
//		}
//	}
//	if (i > 3)
//	{
//		printf("退出程序\n");
//	}
//	else
//	{
//		printf("登陆成功\n");
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入\"我是猪\"，就取消关机！\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在1分钟内关机。如果输入\"我是猪\"，就取消关机！\n请输入：");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}