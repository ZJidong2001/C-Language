#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// strcpy
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };  // Ŀ��ռ�
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxx";  // ���� ��֤�Ƿ񿽱��ַ���������־
//	char arr2[] = "hello";
//
//	strcpy(arr1, arr2);
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";  // Ŀ��ռ�
//	char arr2[] = "hello";
//
//	char* ret = strcpy(arr1, arr2);  // ����strcpy�����ķ���ֵ
//	
//	printf("%s\n", arr1);
//	printf("%s\n", ret);  // ����ֵΪarr1����ĵ�ַ
//
//	return 0;
//}

// memset
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello bit";  // ��Ϊxxxxx bit
//
//	char* ret = (char*)memset(arr, 'x', 5);  // ע�����ֽ�Ϊ��λ�������
//
//	printf("%s\n", arr);
//	printf("%s\n", ret);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 5);  // ���Է��ֲ���1 1 1 1 1 0 0 0 0 0��ע�����ֽ�Ϊ��λ
//	return 0;
//}

// �Զ��庯���������������Ľϴ�ֵ��
//int get_max(int x, int y)  // x��y��ʽ����
//{
//	return (x > y ? x : y);  // �뺯���������ͱ���ͳһ
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	// ��2�����Ľϴ�ֵ
//	int max = get_max(a, b);  // a��bʵ�ʲ���
//	printf("max = %d\n", max);
//
//	return 0;
//}

// �Զ��庯����������������
//int main()  // ���ú���ʵ��
//{
//	int a = 10;
//	int b = 20;
//
//	int c = 0;
//
//	printf("����ǰ: a = %d b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������: a = %d b=%d\n", a, b);
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
//int main()  // ��ֵ���� - error
//{
//	int a = 10;
//	int b = 20;
//
//	printf("����ǰ: a = %d b=%d\n", a, b);
//	Swap(a, b);  // ʵ��a��b�����β�x��y��ʱ���βν���ʵ�ε�һ����ʱ�������ı��βα���x��y���ǲ���Ӱ��ʵ��x��y�ġ�
//	printf("������: a = %d b=%d\n", a, b);
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
//int main()  // ��ַ����
//{
//	int a = 10;
//	int b = 20;
//
//	printf("����ǰ: a = %d b=%d\n", a, b);
//	Swap(&a, &b);  // ͨ����ַ���βν�����ϵ
//	printf("������: a = %d b=%d\n", a, b);
//
//	return 0;
//}

//#include <math.h>
//int is_prime(int n)  // ���������������1�������������������0
//{
//	// �ж�n�Ƿ�Ϊ����
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
//		printf("%d������\n", i);
//	else
//		printf("%d��������\n", i);
//	return 0;
//}

//int is_leap_year(int y)  // ��������꣬����1������������꣬����0
//{
//	// �ж�y�Ƿ�Ϊ����
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int is_leap_year(int y)  // error 2000�������꣬���ǳ���ȴ�ж���������
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
//int is_leap_year(int y)  // ���д��
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//
//	if (is_leap_year(y) == 1)
//		printf("%d������\n", y);
//	else
//		printf("%d��������\n", y);
//	return 0;
//}

// дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)  // ����ҵ��ˣ����������±ꣻ����Ҳ���������-1
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
//	int ret = binary_search(arr, k, sz);  // TDD - ������������
//
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("��Ԫ����������±�Ϊ%d\n", ret);
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

//int main()  // err - ��������Ƕ�׶���
//{
//	void test()
//	{
//		printf("1");
//	}
//
//	return 0;
//}

// ��������Ƕ�׵���
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

// ������ʽ���� - ��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//#include <string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));  // ��ʽ����
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
//	printf("%s\n", strcpy(arr1, arr2));  // ��ʽ����
//	return 0;
//}
int main()
{
	// printf�����ķ���ֵΪ��ӡ����Ļ�ϵ��ַ��ĸ���������������󣬽����ظ���
	printf("%d", printf("%d", printf("%d", 43)));  // ���Ϊ4321
	return 0;
}