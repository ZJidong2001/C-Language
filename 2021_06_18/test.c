#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	// whileѭ�����󲿷�̫��ɢ
//	int i = 1;  // ��ʼ������
//
//
//
//
//	while (i <= 10)  // �����жϲ���
//	{
//		printf("%d ", i);
//
//
//
//
//
//
//		i++;  // ��������
//	}
//	return 0;
//}

//int main()
//{
//	// forѭ�����󲿷ּ��У��״���
//	int i = 0;
//	for (i = 1; i <= 10; i++)  // ��ʼ������; �����жϲ���; ��������
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	// ǰ�պ󿪵�д��
//	for (i = 0; i < 10; i++)  // �ڸ�д����ѭ��10��һĿ��Ȼ
//	{
//		printf("%d ", i);
//	}
//
//	// ���߶��Ǳ�����
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", i);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };  // �±귶Χ0~9
//	int i = 0;
//	for (i = 0; i < 10; i++)  // ǰ�պ󿪵�д��
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	// ��ʼ�����жϣ�������������ʡ�ԣ�����ʡ�ԣ��������飩
//	for (;;)  // ��ѭ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)  // ��ѭ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    do
//    {
//        if (5 == i)
//            break;
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    do
//    {
//        if (5 == i)
//            continue;
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	// ����������arr����7
//	// �ҵ��˴�ӡ�±꣬�Ҳ�����ӡ�Ҳ���
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);  // ������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  // ��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	int k = 7;
//	int mid = 0;
//
//	// �۰���ң����ֲ��ң�
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "For the ideal that I hold dear to my heart,I'd not regret a thousand times to die.";
//	char arr2[] = ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
//	int left = 0;
//	int right = sizeof(arr2) / sizeof(arr2[0]) - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(300);  // ���߲�������λ��ms�������<Windows.h>
//		system("cls");  // ����������system�ǿ⺯��������ִ��ϵͳ��������<stdlib.h>
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char password[10] = { 0 };
//	int i = 1;
//	while (i <= 3)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)  // �����ַ����Ƚϲ����ã�password == "123456"��
//		{
//			break;
//		}
//		else
//		{
//			printf("���������������ʣ%d����������Ļ��ᣡ\n", 3 - i);
//			i++;
//		}
//	}
//	if (i > 3)
//	{
//		printf("�˳�����\n");
//	}
//	else
//	{
//		printf("��½�ɹ�\n");
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ����������\"������\"����ȡ���ػ���\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("���Խ���1�����ڹػ����������\"������\"����ȡ���ػ���\n�����룺");
		scanf("%s", input);
		if (0 == strcmp(input, "������"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}