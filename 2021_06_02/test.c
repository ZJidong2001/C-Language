#define _CRT_SECURE_NO_WARNINGS  // ����ʹ��VS2022���ɿ���������Ϊ�˱���scanf�������ϴ��д���

#include <stdio.h>  // stdio������׼�����������standard input output

// ������
// int�������͡������������͡���main�����ķ�������Ϊ����
// main���������������ǳ�������
// ����������ԷŲ��������Ǵ˴�δ������
// ��һ�����������ֻ��һ��main����

//int main()
//{
//	printf("Hello World!\n");  // �⺯���������������ʹ�ÿ⺯���ô��к�����Ҫ����ͷ�ļ�stdio.h
//	return 0;  // ��mainǰ��ķ�������int��Ӧ�������涨��������0
//}

// F10����
// �����Ǵ�Դ�ļ���һ�п�ʼ���У����Ǵ�main������һ�п�ʼ���У�˵��main�����ǳ�������

// �������г���
// ctrl+(fn)+F5

// ��ʱд��
//void main()
//{
//    return 0;
//}

// void������ȷ�ĸ������ǣ�main��������Ҫ����
//int main(void)
//{
//	  return 0;
//}

// main������ʵ�ǿ����в����ģ��м�������ʲô���������ﲻ�ص㽲
//int main(int argc, char* argv[]) 
//{
//	  return 0;
//}

//int main()
//{
//	int age = 10;  // ����
//	float price = 50.50;  // �����ȸ�����
//	double weight = 55.5;  // ˫���ȸ�����
//	return 0;
//}

//int main()
//{
//	// ��μ���һ�����ʹ����ı�����ռ�ռ�Ĵ�С�أ�
//	// sizeof()
//	
//	// %d -- ʮ����������ʽ
//	// %c -- �ַ���ʽ
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
//	// abcdef$%#��һ���ַ�
//	// ����ֻ��ʶ������ƣ����Ը�ÿһ���ַ����
//	// ASCII�� -- ������׼��Ϣ��������
//	char ch = 'e';
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	printf("%c\n", 101);
//	printf("%d\n", 101);
//	return 0;
//}

//int main()
//{
//	short age = 10;  // ����
//	age = 11;
//	printf("%d\n", age);
//	return 0;
//}

//int g = 100;  // ȫ�ֱ���
//void test()
//{
//	int b = 20;  // �ֲ�����
//}
//int main()
//{
//	int a = 10;  // �ֲ�����
//	return 0;
//}

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);  // �ֲ�������ȫ�ֱ������ֿ�����ͬ����ͬʱ�ֲ��������ȣ����ǲ�������ͬ
//	return 0;
//}

// �����������
int main()
{
	int num1 = 0;
	int num2 = 0;

	// ������������
	scanf("%d%d", &num1, &num2);  // & -- ȡ��ַ������

	// ���
	int sum = num1 + num2;
	printf("%d\n", sum);

	return 0;
}