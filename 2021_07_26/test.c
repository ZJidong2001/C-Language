#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// �ع˷�֧ѭ����ϰ

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

// getchar�Ƕ�ȡ�ַ���Ϊʲô����������int��
// 1.getchar��Ȼ���ص����ַ�����ʵ���ص����ַ���ASCII��ֵ��������
// 2.getchar�ڶ�ȡ������ʧ�ܵ�ʱ�򣬻᷵��EOF��end of file��-1��

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��>:");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0; 
//}
//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��>:");
//	getchar();
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0; 
//}
//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������>:");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N��>:");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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

// �����ݹ���ҵ

//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;  // err������ͨ��return�Ѻ������������������ݷ��ظ������������ű��ʽ����b
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);  // 20
//	return 0;
//}

//void test(int arr[])  // �β���������԰Ѻ������������������ݷ��ظ�������
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

//void test(int* px, int* py)  // �β�������ָ����԰Ѻ������������������ݷ��ظ�������
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

//int x = 0;  // ������ȫ�ֱ������԰Ѻ������������������ݷ��ظ�������
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

// �˷��ھ���
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

// �ַ��������ѣ�
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
//void reverse_string(char* str)  // �ǵݹ�
//{
//	int len = my_strlen(str);
//
//	//char* left = str;  // ��ַ
//	//char* right = str + len - 1;
//	int left = 0;  // �±�
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
//void reverse_string(char* str)  // �ݹ�
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
//	char arr[20] = "abcdef";  // �������ݿ��Ա��޸�
//	//char* arr = "abcdef";  // err �� char*�������ַ����������ڴ�������ֻ���ķ�ʽ�洢�ģ����ܱ��޸ģ���char[]�������ַ�������Ա��޸ġ�
//	
//	reverse_string(arr);
//	// ����������Ԫ�صĵ�ַ
//	// ��Ԫ����char����
//	// char*
//
//	printf("%s\n", arr);
//
//	return 0;
//}

// ����һ������ÿλ֮��
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

// �ݹ�ʵ��n��k�η����ѣ�
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

// �����½�

//int arr[20];  // ȫ�ִ������飬���Է�����������Ĭ�ϳ�ʼ��Ϊ0
//int main()
//{
//	int arr1[20];  // �ֲ��������飬���Է�����������ȫ�����ֵ
//
//	int count = 10;
//	int arr2[count];  // err - ���鴴����[]��Ҫ��һ�������ſ��ԣ�����ʹ�ñ���
//
//	int arr3[20] = { 1,2,3 };  // ����ȫ��ʼ�� - ���˲��ֳ�ʼ���⣬������ֵĬ�ϳ�ʼ��Ϊ0
//
//	int arr4[] = { 1,2,3 };  // ��������δָ����Сʱ�����ݳ�ʼ�����ݵĸ���ȷ�����Ĵ�С
//
//	int arr5[3] = { 1,2,3,4 };  // err - ��ʼֵ�趨��̫�࣬����Ų���
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";  // a b c \0 - 4byte
//	char arr2[] = { 'a','b','c' };  // a b c - 3byte
//	char arr3[] = { 'a',98,'c' };  // 98��b��ASCII��ֵ��������������98
//
//	return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//
//    int sz = sizeof(arr) / sizeof(arr[0]);  // ���������Ԫ�ظ���
//
//    int i = 0;
//    for (i = 0; i < sz; ++i)  // �����������ݣ�������ʹ���±������ʵģ��±��0��ʼ
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

int main()  // �����±��������Ԫ�صĵ�ַҲ���й��ɵĵ�����˵���������ڴ�����������ŵ�
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	return 0;
}