#define _CRT_SECURE_NO_WARNINGS

// ��������Ϸ
// 1.����һ�������
// 2.�����֣������´󡢲�С���¶ԣ�
// 3.���Է�����

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
void game()
{
	int ret = rand() % 100 + 1;  // rand������������� ��Ҫ����<stdlib.h> �����ɵ��Ǽ������ ����Ҫ����srand����
	int guess = 0;
	while (1)
	{
		printf("�������>:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");

		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));  // srand���������������������� �����<stdlib.h> ��srand�������ֻ����һ�� ÿ������Ϸ�������������ʱ����Сʱ��ֵ�п���һ��
	// time����ʱ��� ��ʱ�ڱ� ����Ϊsrand�����Ĳ��� �����<time.h>
	do
	{
		menu();  // ��ӡ�˵�

		printf("��ѡ��>:");  // �Բ˵�����ѡ��
		scanf("%d", &input);  // 1 or 0

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

// С���ֲ������� https://www.nowcoder.com/practice/4c49a3a1559141f7a080a48c98cca4cb?tpId=107&&tqId=33411&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//int main()
//{
//    int arr[101] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int m = 0;
//        scanf("%d", &m);
//        arr[m]++;
//    }
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d", arr[x]);
//    return 0;
//}

// ���������������������������Լ��
//int main()  // ��һ��������⣩����1�͸����������Ľ�Сֵ֮������Ѱ��
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? b : a);  // ���Լ��һ�������ڸ����������Ľ�Сֵ
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("���Լ���ǣ�%d\n", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
//int main()  // ������շת�������������ֵ����������������ֵ��������շת���ֱ������Ϊ0����ʱ����Ϊ���Լ��
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = 0;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("���Լ���ǣ�%d\n", b);
//	return 0;
//}

// ��������������������������С������
// �����Ѿ�������Լ��������������������ٳ������Լ�����õ��Ľ������С������

// ��ӡ1000�굽2000��֮�������
// 1.�ܱ�4���������ܱ�100����
// 2.�ܱ�400����
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//			printf("%d ", y);
//		else if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//			printf("%d ", y);
//		if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()  // error ��1200��1600��2000
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//				printf("%d ", y);
//		}
//		else if (y % 400 == 0)  // if��else ifֻ��ѡ��һ�����룬��if��if����֮���Ƕ�����
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//				printf("%d ", y);
//		}
//		if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			printf("%d ", y);
//	}
//	return 0;
//}

// ��ӡ100��200֮���������ֻ�ܱ�1�����������������֣�
//int main()  // ��2~i-1������ȥ�Գ�i
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//#include <math.h>
//int main()  // ��2~sqrt(i)������ȥ�Գ�i
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)  // sqrt���� ��ƽ�� �����<math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}
//#include <math.h>
//int main()  // ��2~sqrt(i)������ȥ�Գ�i ����ֻ�������������
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)  // sqrt���� ��ƽ�� �����<math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//}

// ��д������һ��1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)  // ��λ��9
//			count++;
//		if (i / 10 == 9)  // ʮλ��9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		// ��Ҫд��if...else if...����λ��ʮλ���ж��Ƕ�����
//		if (i % 10 == 9)  // ��λ��9
//			count++;
//		else if (i / 10 == 9)  // ʮλ��9
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

// ����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// ��10�����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = 0;
//	max = arr[0];  // �����һ��Ԫ�ؾ�������
//	for (i = 1; i < 10; i++)  // ��ʣ�µ�9��Ԫ����max�Ƚ�
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// ����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	//��������
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡÿһ�����ݣ�ÿ����i�����ʽ
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}