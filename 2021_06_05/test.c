#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()  // һ��������������ֻ��һ��������
//{
//	printf("hehe\n");
//	return 0;
//}

//int a = 100;  // ȫ�ֱ���
//int main()
//{
//	int a = 10;  // �ֲ�����
//	printf("%d\n", a);  // �ֲ��������ȣ���û�оֲ���������ʹ��ȫ�ֱ���
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
//	a = 20;  // �ֲ��������ȣ��޸ĵ��Ǿֲ�������ֵ��ȫ�ֱ�����ֵδ�ı�
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
//	a = 20;  // �޸ĵ���ȫ�ֱ���
//	test();
//	return 0;
//}

// �����򣺱�����ʹ�÷�Χ
// �ֲ��������ֲ��������ڵľֲ���Χ
// ȫ�ֱ�������������

//int main()
//{
//	{
//		int a = 10;  // �ھֲ������Ĵ�����⣬�����������޷�ʹ��
//	}
//	printf("%d\n", a);
//  return 0;
//}

//int main()
//{
//	{
//		int a = 10;  // �ھֲ������Ĵ�����ڣ����������ڿ���ʹ��
//		printf("%d\n", a);
//	}
//  return 0;
//}

//int main()
//{
//	int a = 100;  // ������������main�����ڲ���main�����ڿ���ʹ��
//	{
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//  return 0;
//}

//int a = 100;  // ȫ�̱�����������Ϊ�������̣������������ڲ�������ʹ��
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

//extern int g_val;  // ���������� ���� extern
//int main()
//{
//	printf("%d\n", g_val);  // ���������ڿ��ļ���ȫ�ֱ�������ʹ��
//	return 0;
//}

// �������ڣ������Ĵ������������ٵ�һ��ʱ���
// �ֲ������������������������ڿ�ʼ�����������������ڽ���
// ȫ�ֱ����������������������

//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);  // ��ʱ�ֲ��������������ڽ������޷�ʹ��
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);  // ȫ�ֱ�������������Ϊmain�������������ڣ�main��������������Ϊ������������ڣ���ȫ�ֱ�������������Ϊ�����������������
//	return 0;
//}

// ���泣��

//int main()
//{
//	3.14;
//	'w';
//	1000;
//	return 0;
//}

// const���εĳ�����

//int main()
//{
//	int a = 100;  // �ֲ�����
//	a = 200;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	const int a = 100;  // const���εĳ�����
//	a = 200;  // ��������ֵ���ܱ��޸ģ������˳�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[100] = { 0 };  // ����
//	return 0;
//}

//int main()
//{
//	int n = 100;
//	int arr[n] = { 0 };  // ���鶨��ʱ[]�ڱ����ǳ������ʽ
//	return 0;
//}

//int main()
//{
//	const int n = 100;  // const���εĳ�����
//	int arr[n] = { 0 };  // n���ǳ����������Ǳ�����ֻ�Ǿ����˳����ԣ����ܱ��޸Ķ���
//	return 0;
//}

// #define����ı�ʶ������

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
//	MAX = 200;  // MAX�ǳ�������ֵ���ܱ��޸�
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	int arr[MAX] = { 0 };  // MAX�ǳ���
//	return 0;
//}

// ö�ٳ���
// ö�� ���� һһ�о� ���� enumö�ٹؼ���
// ��������Щֵ����һһ�оٳ��������Ա��С�Ů�����ܣ�����ԭɫ���졢�̡�����

//enum Gender  // ö������
//{
//	// ö�ٳ��� ���� ö�ٵĿ���ȡֵ
//	MALE,
//	FEMALE = 5,
//	SECRET
//};
//int main()
//{
//	// ö����������Ŀ���ȡֵĬ�ϵ�һ��ֵΪ0���Դ�������������1���м���Ը���ֵ
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	//FEMALE = 3;  // ö�ٳ�����ֵ���ܱ��޸�error
//
//	enum Gender s = MALE;
//	return 0;
//}

//int main()
//{
//	// char - �ַ�����
//	// C����û���ַ�������
//	'a';
//	'x';
//	// 'ab'; error
//	"abcdef";  // �ַ�������˫���������һ���ַ���
//	return 0;
//}

//int main()
//{
//	char ch[10] = "abcdef";  // �ַ���ĩβ����\0���ܹ�7���ַ�
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	// \0Ϊ�ַ����Ľ�����־
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
//	// strlen�ǿ⺯�����������ַ������ȣ�\0Ϊ�ַ����Ľ�����־�����㳤��
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
//	// ת���ַ� - ת����˼
//	printf("%d\n", 100);
//	char ch[] = { 'a','b','c','d','e','f','\0' };
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "c:\test\test.c");  // \t��һ��ת���ַ�
//	printf("%s\n", "c:\\test\\test.c");
//	return 0;
//}

//int main()
//{
//	printf("%d", 100);
//	printf("%dn", 100);
//	printf("%d\n", 100);  // ת���ַ�
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
//	// \ddd - ddd��8��������ת����10���ƺ��ֵ����ΪASCII��ֵ������ַ�
//	printf("%c\n", '\065');
//	// \xdd - dd��16��������ת����10���ƺ��ֵ����ΪASCII��ֵ������ַ�
//	printf("%c\n", '\x51');
//	return 0;
//}

//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    // \32��������һ��ת���ַ�
//    printf("%d\n", strlen("c:\test\328\test.c"));
//    return 0;
//}

//int main()
//{
//	// ע��1��CPPע�ͷ�񣩣��������ͱ���a������ֵ10
//
//	/*
//	ע��2��Cע�ͷ����ƥ��ʧ�ܵ�ȱ�ݣ�����Ƕ��ע�ͣ����������ͱ���a������ֵ10
//	*/
//	int a = 10;
//	return 0;
//}

//int main()
//{
//    int coding = 0;
//    printf("���ȥ�ô����𣿣�ѡ��1 or 0��:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("��֣�����к�offer\n");
//    }
//    else
//    {
//        printf("�������ؼ�������\n");
//    }
//    return 0;
//}

//int main()
//{
//    printf("�������\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("��Ҫ����Ŭ���ô���\n");
//    }
//    if (line > 20000)
//        printf("Ӯȡ�׸���\n");
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

//int Add(int x, int y)  // ����
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
//	//// ���һ��������������������
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//
//	int arr[10];  // ����
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };
//	int i = 0;
//	while (i < 10)  // ͨ���±��������Ԫ�أ��±��0��ʼ
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//	// �����ӡ����
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
//	float a = 5 / 2;  // ��2��1��������ȫ�����������������Ϊ�̣�
//	printf("%f\n", a);
//	float b = 5.0 / 2;  // ��2��1��������ֻҪ��һ����С�������Ϊ˫����ʵ����
//	printf("%f\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 7 % 2;  // ��3��1
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	// ��λ��������������λ��
	int a = 6;
	int b = a << 1;  // ���Ʋ����������ƺ���ѧ
	// 00000000 00000000 00000000 00000110 - 6
	// 00000000 00000000 00000000 00001100 - 12
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}