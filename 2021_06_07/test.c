#include <stdio.h>

// 位操作符
// & - 按（二进制）位与 - 只要有0则为0
// | - 按（二进制）位或 - 只要有1则为1
// ^ - 按（二进制）位异或 - 相同为0相异为1

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 00000000 00000000 00000000 00000011 - 3
//	// 00000000 00000000 00000000 00000101 - 5
//	// 00000000 00000000 00000000 00000001 - 1
//	int c = a & b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 00000000 00000000 00000000 00000011 - 3
//	// 00000000 00000000 00000000 00000101 - 5
//	// 00000000 00000000 00000000 00000111 - 7
//	int c = a | b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 00000000 00000000 00000000 00000011 - 3
//	// 00000000 00000000 00000000 00000101 - 5
//	// 00000000 00000000 00000000 00000110 - 6
//	int c = a ^ b;
//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;  // 创建变量a，并且初始化为10
//	a = 20;  // 赋值
//	a = a + 10;  // 赋值
//	a += 10;  // 复合赋值
//	a = a - 8;  // 赋值
//	a -= 8;  // 复合赋值
//	a = a >> 1;  // 赋值
//	a >>= 1;  // 复合赋值
//	return 0;
//}

// 单目操作符 - 只有一个操作数

//int main()
//{
//	// 非0为真，0为假
//	int a = 10;
//	printf("%d\n", !a);  // 逻辑反操作
//
//	int b = 0;
//	printf("%d\n", !b);  // 逻辑反操作
//
//	if (a)  // a为真，进入if语句
//	{
//
//	}
//
//	if (!a)  // a为假，进入if语句
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = -a;  // 负值
//	int c = +a;  // 正值（一般省略）
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  // 4
//	printf("%d\n", sizeof(int));  // 4
//	return 0;
//}

//int main()
//{
//	// 整数在内存中存储的是二进制，一个整数的二进制表示有三种形式：原码、反码、补码
//	// 正整数：原码、反码、补码相同
//	// 负整数：原码、反码、补码要计算
//	// 有符号的整数：最高位是1表示正数，最高位是0表示负数
//
//	// int a = 1;  // 4个字节 — 32bit
//	// 00000000000000000000000000000001 - 原码
//    // 00000000000000000000000000000001 - 反码
//    // 00000000000000000000000000000001 - 补码
//
//	// int a = -1;
//    // 10000000000000000000000000000001 - 原码
//    // 11111111111111111111111111111110 - 反码（原码的符号位不变，其他位按位取反，得到反码）
//	// 11111111111111111111111111111111 - 补码（反码的二进制序列+1，得到补码）
//
//	// 内存中存储整数的时候，存储的是二进制的补码，打印的是原码
//	// 计算的时候采用的也是补码
//
//	int a = 0;
//	// 00000000 00000000 00000000 00000000 - 0在内存中的补码
//	// 11111111 11111111 11111111 11111111 - 补码按位取反，得到存储在计算机内的补码
//	// 11111111 11111111 11111111 11111110 - 反码
//	// 10000000 00000000 00000000 00000001 - 原码（-1）
//
//	printf("%d\n", ~a);  // 最后结果是-1，不是非常大的数字
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	
//	//a = a + 1;
//	//a += 1;
//	a++;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	// ++和--有前置和后置之分
//	int a = 2;
//
//	int b = ++a;  // 前置++ - 先++，后使用
//	printf("a = %d\n", a);  // 3
//	printf("b = %d\n", b);  // 3
//
//	int c = a++;  // 后置++ - 先使用，后++
//	printf("a = %d\n", a);  // 4
//	printf("c = %d\n", c);  // 3
//
//	return 0;
//}

//int main()
//{
//	// 强制类型转换 - 尽量不要使用
//
//	//int a = 3.14;  // 3.14默认双精度浮点数，赋值给int型变量会导致数据丢失，编译器会出现警告
//	int a = (int)3.14;  // 为了不让警告出现，可以采用强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

// 位操作符
// && - 逻辑与 - 并且 - 两个条件都满足才可以
// || - 逻辑或 - 或者 - 有一个满足条件就可以

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	// 如果a==3并且b==4，打印哈哈
//	if ((a == 3) && (b == 4))
//	{
//		printf("哈哈\n");  // 有一个条件为假，不打印
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// 如果a==3或者b==4，打印呵呵
//	if ((a == 3) || (b == 4))
//	{
//		printf("呵呵\n");  // 有一个条件为真，打印呵呵
//	}
//	return 0;
//}

// 条件操作符 - 三目操作符

//int main()
//{
//	int a = 10;
//	int b = 0;
//	if (a == 5)
//	{
//		b = -6;
//	}
//	else
//	{
//		b = 6;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = (a == 5 ? -6 : 6);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = -1;
//
//	// , - 逗号表达式
//	// 逗号表达式会从左向右依次计算
//	// 整个逗号表达式的结果是最后一个表达式的结果
//	int d = (a = b - 5, b = a + c, c = a + b, c -= 5);
//	// a=-2，b=-3，c=-10，最后表达式结果为-10赋值给d
//
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // 这里数组定义的[]不是操作符
//	// 0~9
//	arr[9];  // 下标引用操作符  两个操作数arr 9
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = Add(3, 5);  // 函数调用操作符的操作数不确定，函数名+参数个数
//	printf("%d\n", ret);  // ()函数调用操作符printf()
//	return 0;
//}

//int main()
//{
//	int a = 10;  // 局部变量，进这个函数内自动创建，出这个函数自动销毁
//	// 局部变量 - 自动变量，本质上应该是auto int a = 10;，但是auto一般省略掉
//	return 0;
//}

//typedef unsigned int uint;  // 相当于起别名（小名）
//int main()
//{
//	unsigned int num1 = 100;  // 觉得unsigned int太长，创建变量麻烦，可以使用typedef重定义
//	uint num2 = 200;  // 这里的unit就等价于unsigned int
//	return 0;
//}

//int main()
//{
//	register int num = 100;  // 把num放在寄存器里
//
//	// 既然num放在寄存器里，所以num是不能取地址的，取地址会报错
//	&num;  // 取地址是取内存的地址，而寄存器不是内存，这一行是错误的代码，error
//	return 0;
//}

// static在C中的三种用法：
// 1.局部变量 - 改变局部变量的生命周期，不改变作用域
// 2.全局变量 - 使全局变量的外部链接属性变成内部链接属性
// 3.函数 - 使函数的外部链接属性变成内部链接属性

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;  // static修饰的局部变量
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;  // extern关键字，声明外部符号（其他文件的变量、函数）
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#define NUM 100  // define定义标识符常量
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}

#define MAX(X,Y) (X>Y?X:Y)  // define定义宏
int main()
{
	int a = 10;
	int b = 20;

	int c = MAX(a, b);
	//int c = (a > b ? a : b);

	printf("%d\n", c);
	return 0;
}