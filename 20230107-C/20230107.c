#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//数据类型



int main()
{
	printf("bit\n");
	printf("hello world\n");
	printf("%d\n", 100);
	printf("%d\n", sizeof(char));

	return 0;
}


//char 字符数据类型
//short 短整型
//int 整型
//long 长整型
//long long 更长整型
//float 单精度浮点型
//double 双精度浮点型




//常量变量



int main()
{
	//创建一个变量
	//类型 类型的名字 = 0；

	int age = 20;
	double weight = 52.1;

	age = age + 1;
	weight = weight - 5;
	printf("%d\n", age);
	printf("%lf\n", weight);
	
	return 0;
}

//%d - 整型
//%f - float
//%lf - double




int main()
{
	//{}内定义的--局部变量
	//当局部变量与全局变量名字冲突的情况下 局部优先
	//不建议：把全局变量和局部变量的名字写成一样的
	int a = 10;

	printf("%d\n", a);
	return 0;
}

//{}外定义的--全局变量
int a = 100;


//写个代码：求2个整数的和（例：2+3）


//scanf函数是输入函数
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




//作用域和生命周期


//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程


int g_val = 2023;//全局变量
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



//生命周期
//变量的生命周期：变量创建和销毁之前的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期:程序的生命周期

int main()
{
	{
		int a = 10;
		printf("%d\n", a);

	}

	return 0;
}



//常量

//1.字符常量

int main()
{
	3.14;
	10;
	'a';
	"abcdef";

	//2.const修饰的常变量
	const int num = 10;//num就是常变量--具有常属性（不能被改变的属性）
	
	printf("num = %d", num);//10

	int arr[10] = { 0 };//10个元素

	const int n = 10;
	int arr2[n] = { 0 };//n是变量的 这里是不行的

	return 0;
}


//3.#define定义的标识符常量

#define Max 10000

int main()
{
	int n = Max;
	printf("n = %d\n", n);

	return 0;
}




//4.枚举变量

//性别
enum sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	male = 3,//赋初值
	female,
	secret
};


int main()
{
	//枚举常量
    //可以一一列举的常量

	enum sex s = male;

	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);

	return 0;
}


