#define _CRT_SECURE_NO_WARNINGS 1
//例子：输入一个整数判断是否为奇数
//#include <stdio.h>
//int main()
//{
//	//定义一个变量
//	int num = 0;
//	// 检测输入函数scanf 读取整形， % d替占位num
//	scanf("%d", &num);
//	//if（表达式） 表达式成立为真--执行，不成立为假--不执行
//	if (num % 2 == 1)
//		//打印执行结果
//		printf("%d 是奇数\n", num);
//	//if...表达式...语句1...else...语句2
// 此处加句成了判断奇偶的案例
//	else
//
//		printf("%d 是偶数\n",num);
//	return 0;
//}
// ==========================================================
//输入一个整数判断是否为奇数，不是奇数就打印偶数，反之亦然
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("%d 是奇数", num);
//	else
//		printf("%d 是偶数", num);
//	return 0;
//}
//==========================================================
//练习：输入一个年龄，大于或者等于18就输出，成年，否则就输出：未成年
//#include <stdio.h>
//int main()
//{
//	//定义年龄
//	int age = 0;
//	//输入一个整数
//	scanf("%d", &age);
//	//开始写判断条件
//	if (age >= 18)
//		printf("%d 成年了\n", age);
//	else
//		printf("%d 未成年\n", age);
//	return 0;
//}
// =====================================================
//分支中包含多条语句
//默认if和else语句中默认控制一条语句，实现以下代码输出得知
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	//	printf("了已经成年了\n");
//	////此条句子独立存在，运行后输入值无论是否大于十八都会打印下面这条语句
//	//	printf("了可以谈恋爱了\n");
//	{
//		//想要一次控制两条语句就需要就一个{}
//		printf("了已经成年了\n");
//		printf("了可以谈恋爱了\n");
//
//	}
//	return 0;
//}
//=======================================================
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("年满十八了\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("还没有成年\n");
//		printf("未成年,不可以谈恋爱哦\n");
//	}
//	return 0;
//}
// ========================================================
//嵌套if，在if else 语句中，else可以与另一个if语句连用，构成多重判断
//要求：要求输入一个整数，判断输入的整数是0，还是正数还是负数。
//实现代码：
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", & num);
//	if (num == 0)
//		printf("输入的是 0 ");
//	//此处if 相当于嵌套在else语句中，形成了嵌套结构
//	else if (num > 0)
//		printf("此数字是正数\n");
//	else
//		printf("输入数字是负数\n");
//return 0;
//}
// ====================================================
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的是零\n");
//	else if (num > 0)
//		printf("输入的是正数\n");
//	else
//		printf("输入的是负数\n");
//	return 0;
//}
// ==================================================================
//要求：输入一个整数，如果是正数，再判断是偶数还是奇数，并输出；如果不是正数则输出不是正数
//#include<stdio.h>
//int main()
//{
//	//定义一个变量
//	int num = 0;
//	//写入输入函数
//	scanf("%d", &num);
//	//输入前提：num>0
//	if (num > 0)
//	{
//		if(num % 2 == 0)
//			printf("输入的是一个偶数\n");
//		else
//			printf("输入的是一个奇数\n");
//	}
//	//不是偶数也不是奇数判定为负数
//	else
//	{
//		printf("输入的是负数\n");
//	}
//	return 0;
//
//}
// =======================================================
//练习：输入一个人的年龄
//如果年龄<18打印少年
//	如果年龄 18--44 打印青年
//	如果年龄 在 45--59打印中老年
//	如果年龄 60--89打印老年
//	如果年龄 >90打印老寿星
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	//判断**否则为....即为开始判断下一条件，进行嵌套if else
//	else
//	{
//	if (age <= 44)
//			//判断后大括号阔起来
//	{
//		printf("青年\n");
//	}
//	else
//	{
//	if (age <= 59)
//		//判断后大括号阔起来
//	{
//		printf("中老年\n");
//	}
//	else
//	{
//		if (age <= 90)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//			}	
//		}
//	}
//		return 0;
//}
//
//========================================================
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else
//	{
//		if (age <= 44)
//		{
//			printf("青年\n");
//		}
//		else
//		{
//			if (age < 59)
//			{
//				printf("中老年\n");
//			}
//			else
//			{
//				if (age <= 90)
//					printf("老年\n");
//				else
//					printf("老寿星\n");
//			}
//		}
//	}
//		return 0;
//
//}
// ========================================================
//悬空else问题
//运行以下代码
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//	{
//		if (b == 2)
//			//结果是啥都不打印
//			printf("hehe\n");
//		//else总跟最接近的if相匹配  
//		else
//			printf("haha\n");
//	}	
//		return 0;
//}
// =====================================================
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//	{
//		if (b == 2)
//			//结果是啥都不打印
//			printf("hehe\n");
//	}
//		//else总跟最接近的if相匹配  
//		else
//	{
//		printf("haha\n");
//		//增加大括号增强代码可读性
//	}
//	return 0;
//}
//========================================================
//除了常见的运算符外的运算符
//a != b  不等于是(!   =)
//a==b    等于
//多个关系运算符不宜连用   i<j<k   合法表达式 (i<j)<k
// =======================================================
//输入一个年龄，如果在18-36之间，我们输出青年
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//if (18 <= age <= 36)
//	if (age >= 18 && age <= 36)
//	{
//		printf("青年\n");
//	}
//	else
//		printf("再次输入\n");
//	return 0;
//
//}
// =========================================================
//#include <stdio.h>
//int main()
//{ 
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age > 18 && age <= 36)
//	{
//		printf("青年\n");
//
//	}
//		return 0;
//
//}
// =========================================================
//#include <stdio.h>
//int main()
//{	
//	int flag = 0;
//	if (!flag)//取反
//	{
//		printf("do something\n");
//	}
//	return 0;
//}
//============================================================== 
 //与运算符
//我们说月份三月到五月是春天，代码体现出来的是：
//#include <stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//	else
//	{
//		printf("请输入三到五的数");
//	}
//	return 0;
//
//}
// ============================================================
//满足一年中月份是12月或者一月或者二月是冬天，实现代码：
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	//输入函数
//	scanf("%d", &month);
//	//或的运算符
//	if (month == 12 || month == 1 || month == 2) 
//		{
//			printf("冬天\n");
//		}
//	//此处不是12-2-1时输出内容
//	else
//	{
//		printf("请输入冬天对应月份\n");
//	}
//	return 0;
//}
// ==============================================================
//练习：判断是否是闰年  能被4整除并且不能被100整除的是闰年 能被400整除的是闰年
//#include<stdio.h>
//int main() 
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	else if (year % 400 != 0)
//	{
//		printf("非闰年\n");
//	}
//		return 0;
//}
// ============================================================
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		printf("是闰年\n");
//		return 0;
//}
// =======================我是分割线===========================>
//短路
//根据C语言逻辑运算符还有一个特点，它总是先对左侧的表达式求值，再对右边的表达式求值
//如果左边的表达式满足逻辑运算符的条件，就不再对右边表达式求值。
//此情况被称为 短路
//此代码下判读month=12后，则不用再判断month是否等于1或2 整个表达式结果也是 一
//if(month = 12 || month ==1 || month =2)
//switch语句  来实现分支结构
// 
//switch (expression)
//{
//case value1: statement
//case value2: statement 
//default:ststement
//}
// 根据表达式expression不同的值，执行相应的case 分支。如果找不到对应的值就执行default分支
// 注意*：1.switch后的expression必须是整形表达式
// 2.case后的值 ，必须是整形常量表达式
//================我是分割线=============================
//if语句和switch语句的对比
//练习：输入任意一个整数的值，计算3之后的余数
//若使用if语句完成，如下：
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("整除，余数为0\n");
//	else if (n % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//	return 0;
//}
//switch语句改写：
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n%3)
//	{
		////case和后面的数字一定要有空格 
//	case 0:
//		printf("整除，余数为0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("整除，余数为0");
//		//使用break才能跳出switch语句，某一case语句后面没有break语句代码会继续向下执行
//			break;
//	case 1:
//		printf("余数是一\n");
//		break;
//	case 2:
//		printf("余数是二\n");
//		break;
//	}
//	return 0;
//}
//====================我是分割线=============================
//练习：输入一个1-7的数字，打印对应的星期几。
//#include <stdio.h>
//int main()
//{
//	//定义一个变量
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	//
//	return 0;
//
//}
//改变要求：输入1-5输出工作日；输出6-7输出休息日
//#include <stdio.h>
//int main()
//{
//	//定义一个变量
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		//接下来打印工作日
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}
//=====================我是分割线=============================
//default
//#include <stdio.h>
//int main()
//{
//	int  day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("工作日\n");
//		break;
//	default:
//		printf("输入错误,重新输入\n");
//		break;
//	}
//	return 0;
//}
// ============================我是分割线======================
//case和default顺序问题
//#include <stdio.h>
//int main()
//{
//	if (1)
//		printf("hehe\n");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	//循环打印
//	while (1)
//		printf("hehe\n");
//	return 0;
//}
//===============我是分割线=============================
//while循环实践
//练习：在屏幕上打印1~10的值
//#include <stdio.h>
//int main()
//{
	//使得是从1出发开始打印输出
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//===================我是分割线===========================
//练习:输入一个正整数，逆序打印这个整数的每一位
//例如 ：输入521 打印125
//#include <stdio.h>
//int main()
//{
//	//输入函数scanf
//	int a = 0;
//	scanf("%d", &a);
//	// 有n个数
//	while (n)
//	{
//		printf("%d", a % 10);
//		// n除上10等于0，没有意义了
//		n /= 10;
//	}
//	return 0;
	//}
	//=====================================================
	//for循环
	//语法形式
	//for(表达式1；表达式2；表达式3)
	//语句//如果循环体想包含更多语句可以上大括号
	//表达式1：用于循环变量的初始化
	//表达式2：用于循环结束条件的判断
	//表达式3：用于循环变量的调整
	//for循环实践
	//练习：在屏幕上打印1-10的值
	//参考代码：
	//#include <stdio.h>
	//int main()
	//{
	//	int i = 0;
	// //其中三个表达式
	// //初始化--判断--调整
	//	for (i=1;i<=10;i++)
	//	{
	//		printf("%d ", i);
	//	}
	//	return 0;
	//}
	//==========关于while循环和for循环对比==================
//#include <stdio.h>
//	int main()
//	{
//		int i = 1;
//		while (i <= 10)
//		{
//			printf("%d ", i);
//			i = i + 1;
//		}
//		return 0;
//	}
	//练习：计算1-100之间的倍数的数字之和
//#include <stdio.h>
//	int main() {
//		int i = 0;
//		int sum = 0;
//		for (i = 1; i <= 100; i++)
//		{
//			if (i % 3 == 0)
//				sum += i;
//		}
//		printf("%d\n", sum);
//		return 0;
//
//	}
//	//优化：
//#include <stdio.h>
//	int main() {
//		int i = 0;
//		int sum = 0;
//		for (i = 3; i <= 100; i += 3)
//		{
//			sum += i;
//		}
//		printf("%d\n", sum);
//		return 0;
//	}
	//==============================do-while循环 ====================
	//语法形式：循环语句中dowhile语句使用最少，如下：
	//do
	//	语句；
	//whilie(表达式);
	//运行逻辑解释：do while循环是先进入循环体执行循环语句，再执行while后判断表达式，表达式为真就会进行下一次，若为假则不再循环。
	//do while循环实例子
	//在屏幕打印1-10的值
//#include <stdio.h>
//	int main() {
//		int i = 1;
//		do
//		{
//			printf("%d ", i);
//			i = i + 1;
//		} while (i <= 10);
//		return 0;
//	}
	//====================我是分割线==================================
	//练习：输入一个正整数，计算这个整数是几位数？
	//如：输入123 输出3
//#include <stdio.h>
//
//	int main()
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int cnt = 0;
//		do
//		{
//			cnt++;
//			n = n / 10;
//		} while (n);
//		printf("%d\n", cnt);
//
//			return 0;
//	}
//==============break和continue语句===========================
//break用于永久终止循环
//而continue作用是跳过本次循环
// ========================================================
// while循环
//break举例：
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//当i等于5后，就执行break。循环就终止了
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
// ============continue举例==============================
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//当i等于5后，就执行continue，直接跳过continue的代码，去循环的判断的地方
//		//因为这里跳过了i =i+1，所以i一直为5，程序陷入死循环
//		printf("%d", i);
//		i = i + 1;
//	}
//	return 0;
//}
//for循环中的break和continue
// ===========================================================
//break举例
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;//指向i++
//		printf("%d ", i);
//	}
//	return 0;
//}
//=========================================================
//循环和嵌套
//while， do while，for三种循环
//练习：找出100-200之间的素数，并打印在屏幕上。
//只能被一和本身整除掉数字
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//循环产生2-i-1之间的数字
		int j = 0;
	}
	return 0;
}

#include <stdio.h>
int  main()
{
	int  i = 0;

	​		//循环产生100-200的数字
		​		for (i = 100; i <= 200; i++)

		​{

		​			int j = 0;

		​			int flag = 1;//假设i是素数

		​			for (j = 2; j < i; j++)

		​			{

		​				if (i % j == 0)

		​				{

		​				flag = 0;

		​				break;

		​		}

		​	}

		​	if (flag == 1)

		​			printf("%d ", i);

		​ }

	​	return 0;
}

//======================================goto语句

#include <stdio.h>

int main()

{

	​	printf("hehe\n");

	//函数如果使用不当，会导致在函数内部随意乱跳转，打乱程序的执行流程

	​	goto next:

	​	printf("haha\n");



next:

	​	printf("跳过了haha的打印\n");

	return 0;

}