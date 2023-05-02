#define _CRT_SECURE_NO_WARNINGS  // 由于使用VS2022集成开发环境，为了避免scanf报错，加上此行代码

#include <stdio.h>  // stdio——标准输入输出——standard input output

// 主函数
// int——整型——整数的类型——main函数的返回类型为整型
// main函数——主函数是程序的入口
// 括号里面可以放参数，但是此处未给参数
// 在一个工程里，有且只有一个main函数

//int main()
//{
//	printf("Hello World!\n");  // 库函数——输出函数，使用库函数得打招呼，需要包含头文件stdio.h
//	return 0;  // 与main前面的返回类型int呼应起来，规定返回整型0
//}

// F10调试
// 程序不是从源文件第一行开始运行，而是从main函数第一行开始运行，说明main函数是程序的入口

// 编译运行程序
// ctrl+(fn)+F5

// 过时写法
//void main()
//{
//    return 0;
//}

// void——明确的告诉我们，main函数不需要参数
//int main(void)
//{
//	  return 0;
//}

// main函数其实是可以有参数的，有几个参数什么参数在这里不重点讲
//int main(int argc, char* argv[]) 
//{
//	  return 0;
//}

//int main()
//{
//	int age = 10;  // 整型
//	float price = 50.50;  // 单精度浮点型
//	double weight = 55.5;  // 双精度浮点型
//	return 0;
//}

//int main()
//{
//	// 如何计算一个类型创建的变量多占空间的大小呢？
//	// sizeof()
//	
//	// %d -- 十进制整数形式
//	// %c -- 字符形式
//	//printf("%d\n", 100);
//	//printf("%c\n", 100);
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	// abcdef$%#等一堆字符
//	// 电脑只能识别二进制，所以给每一个字符编号
//	// ASCII表 -- 美国标准信息交换编码
//	char ch = 'e';
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	printf("%c\n", 101);
//	printf("%d\n", 101);
//	return 0;
//}

//int main()
//{
//	short age = 10;  // 变量
//	age = 11;
//	printf("%d\n", age);
//	return 0;
//}

//int g = 100;  // 全局变量
//void test()
//{
//	int b = 20;  // 局部变量
//}
//int main()
//{
//	int a = 10;  // 局部变量
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);  // 局部变量与全局变量名字可以相同，相同时局部变量优先，但是不建议相同
//	return 0;
//}

// 两个整数相加
int main()
{
	int num1 = 0;
	int num2 = 0;

	// 输入两个整数
	scanf("%d%d", &num1, &num2);  // & -- 取地址操作符

	// 相加
	int sum = num1 + num2;
	printf("%d\n", sum);

	return 0;
}