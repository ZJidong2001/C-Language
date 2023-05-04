#include <stdio.h>

//int main()
//{
//	int num = 10;  // 向内存申请4个字节的空间，里面存放10
//
//	&num;  // 取出num的地址，&--取地址操作符
//	printf("%p\n", &num);  // 打印地址，%p--以地址的形式打印
//
//	// 当变量超过1个byte时，取地址拿到的是第一个byte的地址（较小的地址），后面的根据创建变量类型顺藤摸瓜
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// pa是一个存放地址的变量，这样的变量就称为指针变量
//	// 如何去定义一个pa变量呢？用int*
//	// *告诉我们创建的变量是指针变量，int告诉我们指针指向的对象是int类型
//	// 通过pa我们可以找到a，所以我们可以简单的认为pa指向了a
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;  // *解引用操作符，通过*可以找到所指向的内存空间
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

struct Student  // 创造一个学生结构体类型
{
	char name[20];
	int age;
	char gender[5];
	char id[12];
};
struct Book  // 创造一个书结构体类型
{
	char name[20];
	int price;
	char author[20];
};
int main()
{
	struct Student s1;  // 创建的结构体变量

	// 结构体初始化
	struct Student s2 = { "张三",20,"男","20200506" };
	struct Student s3 = { "李四",30,"女","20200908" };
	struct Book b1 = { "《C语言程序设计》",55,"谭浩强" };

	// .操作符 - （通过结构体变量）访问结构体变量里的成员 - 结构体变量.成员名
	printf("名字：%s 年龄：%d 性别：%s 学号：%s\n", s2.name, s2.age, s2.gender, s2.id);
	printf("书名：%s 价格：%d 作者：%s\n", b1.name, b1.price, b1.author);

	// ->操作符 - （通过结构体指针）访问结构体变量里的成员 - 结构体指针->成员名
	struct Student* ps3 = &s3;  // 我们得到的是结构体变量的地址，需要用结构体指针存储
	printf("%d\n", (*ps3).age);  // 和ps3->age一样的含义，但是因为ps是指针，->表示的是指针指向对象的结构体成员，更加直观方便
	printf("%d\n", ps3->age);
	printf("名字：%s 年龄：%d 性别：%s 学号：%s\n", ps3->name, ps3->age, ps3->gender, ps3->id);  // 我们不用s3直接打印，而是拿到了s3的地址
	
	return 0;
}