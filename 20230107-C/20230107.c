#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��������



int main()
{
	printf("bit\n");
	printf("hello world\n");
	printf("%d\n", 100);
	printf("%d\n", sizeof(char));

	return 0;
}


//char �ַ���������
//short ������
//int ����
//long ������
//long long ��������
//float �����ȸ�����
//double ˫���ȸ�����




//��������



int main()
{
	//����һ������
	//���� ���͵����� = 0��

	int age = 20;
	double weight = 52.1;

	age = age + 1;
	weight = weight - 5;
	printf("%d\n", age);
	printf("%lf\n", weight);
	
	return 0;
}

//%d - ����
//%f - float
//%lf - double




int main()
{
	//{}�ڶ����--�ֲ�����
	//���ֲ�������ȫ�ֱ������ֳ�ͻ������� �ֲ�����
	//�����飺��ȫ�ֱ����;ֲ�����������д��һ����
	int a = 10;

	printf("%d\n", a);
	return 0;
}

//{}�ⶨ���--ȫ�ֱ���
int a = 100;


//д�����룺��2�������ĺͣ�����2+3��


//scanf���������뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	sum = a + b;

	printf("sum = %d\n", sum);

	return 0;
}




//���������������


//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������


int g_val = 2023;//ȫ�ֱ���
int main()
{
	printf("1:%d\n", g_val);

	printf("code\n");
	{
		printf("2.%d\n", g_val);

		int a = 10;
		printf("a = %d\n", a);
	}
	printf("3.%d\n", g_val);
	return 0;
}



//��������
//�������������ڣ���������������֮ǰ��ʱ���
//
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ�������������:�������������

int main()
{
	{
		int a = 10;
		printf("%d\n", a);

	}

	return 0;
}



//����

//1.�ַ�����

int main()
{
	3.14;
	10;
	'a';
	"abcdef";

	//2.const���εĳ�����
	const int num = 10;//num���ǳ�����--���г����ԣ����ܱ��ı�����ԣ�
	
	printf("num = %d", num);//10

	int arr[10] = { 0 };//10��Ԫ��

	const int n = 10;
	int arr2[n] = { 0 };//n�Ǳ����� �����ǲ��е�

	return 0;
}


//3.#define����ı�ʶ������

#define Max 10000

int main()
{
	int n = Max;
	printf("n = %d\n", n);

	return 0;
}




//4.ö�ٱ���

//�Ա�
enum sex
{
	//����ö�����͵ı�����δ������ȡֵ
	//ö�ٳ���
	male = 3,//����ֵ
	female,
	secret
};


int main()
{
	//ö�ٳ���
    //����һһ�оٵĳ���

	enum sex s = male;

	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);

	return 0;
}


