#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	;  // �����
//	1 + 2;  // ���
//	printf("hehe\n");  // ���
//	return 0;
//}

//int main()
//{
//	int age = 20;
//
//	if (age >= 18)
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 55;
//
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 30)  // 18 <= age < 30 error
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 80)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age > 18)  // if���ֻ�ܿ��Ƶ�һ�����
//		printf("����\n");
//		printf("����̸����\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//
//	if (age > 18)  // {}ʹ�������������ͬһ���߼����Ҵ����Ķ�Ч������
//	{
//		printf("����\n");
//		printf("����̸����\n");
//	}
//
//	return 0;
//}

// ����else��elseĬ������������δƥ���if����ƥ�䣨�ͽ�ԭ�򣩣�������else���ĸ�if����ͺ��ĸ�if����ƥ�䡣

//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//    else
//        printf("haha\n");
//    return 0;
//}

//int main()  // �ʵ���ʹ��{}����ʹ������߼��������
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��������\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//			num++;
//		}
//		else
//		{
//			num++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("������������,������1-7������\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)  // switch����Ƕ��ʹ��
//        {
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//	
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;  // ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;  // ��ѭ����ֻҪ����continue������ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������жϡ�
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//    int ch = 0;
//	// 1.���ص��ַ����������ַ�Ҳ��ASCII��ֵ��������
//	// 2.getchar�����������Ƿ��������ַ������᷵��EOF��-1�������Է������ͱ�����
//
//	// EOF - end of file - �ļ������ı�־
//	// getchar��ȡʧ�ܵ�ʱ��ͻ᷵��EOF
//    while ((ch = getchar()) != EOF)  // getchar - �Ӽ��̻�ȡ�ַ�
//        putchar(ch);  // putchar - ���ַ��������Ļ
//    return 0;
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

int main()
{
	int ch = 0;
	char password[20] = { 0 };
	printf("����������>:");
	scanf("%s", password);
	printf("��ȷ�����루Y/N��>:");
	while (getchar() != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}