#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // 一个工程里面有且只有一个主函数
//{
//	printf("hehe\n");
//	return 0;
//}

//int a = 100;  // 全局变量
//int main()
//{
//	int a = 10;  // 局部变量
//	printf("%d\n", a);  // 局部变量优先，若没有局部变量，再使用全局变量
//	return 0;
//}

//int a = 100;
//void test()
//{
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = 10;
//	a = 20;  // 局部变量优先，修改的是局部变量的值，全局变量的值未改变
//	test();
//	return 0;
//}

//int a = 100;
//void test()
//{
//	printf("%d\n", a);
//}
//int main()
//{
//	a = 20;  // 修改的是全局变量
//	test();
//	return 0;
//}

// 作用域：变量的使用范围
// 局部变量：局部变量所在的局部范围
// 全局变量：整个工程

//int main()
//{
//	{
//		int a = 10;  // 在局部变量的代码块外，超出作用域无法使用
//	}
//	printf("%d\n", a);
//  return 0;
//}

//int main()
//{
//	{
//		int a = 10;  // 在局部变量的代码块内，在作用域内可以使用
//		printf("%d\n", a);
//	}
//  return 0;
//}

//int main()
//{
//	int a = 100;  // 作用域在整个main函数内部，main函数内可以使用
//	{
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//  return 0;
//}

//int a = 100;  // 全程变量的作用域为整个工程，在整个工程内部都可以使用
//void test()
//{
//	printf("test: a=%d\n", a);
//}
//int main()
//{
//	test();
//	printf("main: a=%d\n", a);
//	return 0;
//}

//extern int g_val;  // 变量的声明 —— extern
//int main()
//{
//	printf("%d\n", g_val);  // 整个工程内跨文件，全局变量可以使用
//	return 0;
//}

// 生命周期：变量的创建到变量销毁的一个时间段
// 局部变量：进入作用域生命周期开始，出作用域生命周期结束
// 全局变量：整个程序的生命周期

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);  // 此时局部变量的生命周期结束，无法使用
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);  // 全局变量的生命周期为main函数的生命周期，main函数的生命周期为程序的生命周期，故全局变量的生命周期为整个程序的生命周期
//	return 0;
//}

// 字面常量

//int main()
//{
//	3.14;
//	'w';
//	1000;
//	return 0;
//}

// const修饰的常变量

//int main()
//{
//	int a = 100;  // 局部变量
//	a = 200;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	const int a = 100;  // const修饰的常变量
//	a = 200;  // 常变量的值不能被修改，具有了常属性
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[100] = { 0 };  // 数组
//	return 0;
//}

//int main()
//{
//	int n = 100;
//	int arr[n] = { 0 };  // 数组定义时[]内必须是常量表达式
//	return 0;
//}

//int main()
//{
//	const int n = 100;  // const修饰的常变量
//	int arr[n] = { 0 };  // n不是常量，本质是变量，只是具有了常属性，不能被修改而已
//	return 0;
//}

// #define定义的标识符常量

//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	MAX = 200;  // MAX是常量，其值不能被修改
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int arr[MAX] = { 0 };  // MAX是常量
//	return 0;
//}

// 枚举常量
// 枚举 —— 一一列举 —— enum枚举关键字
// 生活中有些值可以一一列举出来，如性别（男、女、保密）、三原色（红、绿、蓝）

//enum Gender  // 枚举类型
//{
//	// 枚举常量 —— 枚举的可能取值
//	MALE,
//	FEMALE = 5,
//	SECRET
//};
//int main()
//{
//	// 枚举类型里面的可能取值默认第一个值为0，以此类推向下自增1，中间可以赋初值
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	//FEMALE = 3;  // 枚举常量的值不能被修改error
//
//	enum Gender s = MALE;
//	return 0;
//}

//int main()
//{
//	// char - 字符类型
//	// C语言没有字符串类型
//	'a';
//	'x';
//	// 'ab'; error
//	"abcdef";  // 字符串（由双引号引起的一串字符）
//	return 0;
//}

//int main()
//{
//	char ch[10] = "abcdef";  // 字符串末尾隐藏\0，总共7个字符
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	// \0为字符串的结束标志
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//
//	char ch2[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", ch2);
//
//	char ch3[] = { 'a','b','c','d','e','f','\0' };
//	printf("%s\n", ch3);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	// strlen是库函数，用于求字符串长度，\0为字符串的结束标志，不算长度
//	char ch1[] = "abcdef";
//	printf("%d\n", strlen(ch1));
//
//	char ch2[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(ch2));
//
//	char ch3[] = { 'a','b','c','d','e','f','\0' };
//	printf("%d\n", strlen(ch3));
//	return 0;
//}

//int main()
//{
//	// 转义字符 - 转变意思
//	printf("%d\n", 100);
//	char ch[] = { 'a','b','c','d','e','f','\0' };
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "c:\test\test.c");  // \t是一个转义字符
//	printf("%s\n", "c:\\test\\test.c");
//	return 0;
//}

//int main()
//{
//	printf("%d", 100);
//	printf("%dn", 100);
//	printf("%d\n", 100);  // 转义字符
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'a');
//	//printf("%c\n", '''); error
//	printf("%c\n", '\'');
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%s\n", "a");
//	//printf("%s\n", """); error
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	// \ddd - ddd的8进制数字转换成10进制后的值，作为ASCII码值代表的字符
//	printf("%c\n", '\065');
//	// \xdd - dd的16进制数字转换成10进制后的值，作为ASCII码值代表的字符
//	printf("%c\n", '\x51');
//	return 0;
//}

//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    // \32被解析成一个转义字符
//    printf("%d\n", strlen("c:\test\328\test.c"));
//    return 0;
//}

//int main()
//{
//	// 注释1（CPP注释风格）：创建整型变量a，并赋值10
//
//	/*
//	注释2（C注释风格，有匹配失败的缺陷，不能嵌套注释）：创建整型变量a，并赋值10
//	*/
//	int a = 10;
//	return 0;
//}

//int main()
//{
//    int coding = 0;
//    printf("你会去敲代码吗？（选择1 or 0）:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//}

//int main()
//{
//    printf("加入比特\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("我要继续努力敲代码\n");
//    }
//    if (line > 20000)
//        printf("赢取白富美\n");
//    return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//int Add(int x, int y)  // 函数
//{
//	int sum = 0;
//	sum = x + y;
//	return sum;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//// 存放一堆数逐个定义变量不方便
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	int arr[10];  // 数组
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };
//	int i = 0;
//	while (i < 10)  // 通过下标访问数组元素，下标从0开始
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	// 倒序打印数组
//	int j = 9;
//	while (j >= 0)
//	{
//		printf("%d ", arr[j]);
//		j--;
//	}
//	return 0;
//}

//int main()
//{
//	float a = 5 / 2;  // 商2余1（操作数全是整数就整除，结果为商）
//	printf("%f\n", a);
//	float b = 5.0 / 2;  // 商2余1（操作数只要有一个是小数，结果为双精度实数）
//	printf("%f\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 7 % 2;  // 商3余1
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	// 移位操作符（二进制位）
	int a = 6;
	int b = a << 1;  // 左移操作符，右移后期学
	// 00000000 00000000 00000000 00000110 - 6
	// 00000000 00000000 00000000 00001100 - 12
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}