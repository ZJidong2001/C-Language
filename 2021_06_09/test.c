#include <stdio.h>

//int main()
//{
//	int num = 10;  // ���ڴ�����4���ֽڵĿռ䣬������10
//
//	&num;  // ȡ��num�ĵ�ַ��&--ȡ��ַ������
//	printf("%p\n", &num);  // ��ӡ��ַ��%p--�Ե�ַ����ʽ��ӡ
//
//	// ����������1��byteʱ��ȡ��ַ�õ����ǵ�һ��byte�ĵ�ַ����С�ĵ�ַ��������ĸ��ݴ�����������˳������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// pa��һ����ŵ�ַ�ı����������ı����ͳ�Ϊָ�����
//	// ���ȥ����һ��pa�����أ���int*
//	// *�������Ǵ����ı�����ָ�������int��������ָ��ָ��Ķ�����int����
//	// ͨ��pa���ǿ����ҵ�a���������ǿ��Լ򵥵���Ϊpaָ����a
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;  // *�����ò�������ͨ��*�����ҵ���ָ����ڴ�ռ�
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

struct Student  // ����һ��ѧ���ṹ������
{
	char name[20];
	int age;
	char gender[5];
	char id[12];
};
struct Book  // ����һ����ṹ������
{
	char name[20];
	int price;
	char author[20];
};
int main()
{
	struct Student s1;  // �����Ľṹ�����

	// �ṹ���ʼ��
	struct Student s2 = { "����",20,"��","20200506" };
	struct Student s3 = { "����",30,"Ů","20200908" };
	struct Book b1 = { "��C���Գ�����ơ�",55,"̷��ǿ" };

	// .������ - ��ͨ���ṹ����������ʽṹ�������ĳ�Ա - �ṹ�����.��Ա��
	printf("���֣�%s ���䣺%d �Ա�%s ѧ�ţ�%s\n", s2.name, s2.age, s2.gender, s2.id);
	printf("������%s �۸�%d ���ߣ�%s\n", b1.name, b1.price, b1.author);

	// ->������ - ��ͨ���ṹ��ָ�룩���ʽṹ�������ĳ�Ա - �ṹ��ָ��->��Ա��
	struct Student* ps3 = &s3;  // ���ǵõ����ǽṹ������ĵ�ַ����Ҫ�ýṹ��ָ��洢
	printf("%d\n", (*ps3).age);  // ��ps3->ageһ���ĺ��壬������Ϊps��ָ�룬->��ʾ����ָ��ָ�����Ľṹ���Ա������ֱ�۷���
	printf("%d\n", ps3->age);
	printf("���֣�%s ���䣺%d �Ա�%s ѧ�ţ�%s\n", ps3->name, ps3->age, ps3->gender, ps3->id);  // ���ǲ���s3ֱ�Ӵ�ӡ�������õ���s3�ĵ�ַ
	
	return 0;
}