#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	;  // 空语句
//	1 + 2;  // 语句
//	printf("hehe\n");  // 语句
//	return 0;
//}

//int main()
//{
//	int age = 20;
//
//	if (age >= 18)
//		printf("成年\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 55;
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 30)  // 18 <= age < 30 error
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age < 80)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age > 18)  // if语句只能控制第一条语句
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age > 18)  // {}使得两条语句属于同一个逻辑，且代码阅读效果更好
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//
//	return 0;
//}

// 悬空else：else默认与距离最近且未匹配的if进行匹配（就近原则），而不是else和哪个if对齐就和哪个if进行匹配。

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//    return 0;
//}

//int main()  // 适当的使用{}可以使代码的逻辑更加清楚
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d不是奇数\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//			num++;
//		}
//		else
//		{
//			num++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期天\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入数据有误,请输入1-7的数字\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)  // switch允许嵌套使用
//        {
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//	
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;  // 在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;  // 在循环中只要遇到continue，本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断。
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//    int ch = 0;
//	// 1.返回的字符，本质是字符也是ASCII码值，是整数
//	// 2.getchar函数不仅仅是返回正常字符，还会返回EOF（-1），所以放在整型变量中
//
//	// EOF - end of file - 文件结束的标志
//	// getchar读取失败的时候就会返回EOF
//    while ((ch = getchar()) != EOF)  // getchar - 从键盘获取字符
//        putchar(ch);  // putchar - 把字符输出到屏幕
//    return 0;
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

int main()
{
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码>:");
	scanf("%s", password);
	printf("请确认密码（Y/N）>:");
	while (getchar() != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}