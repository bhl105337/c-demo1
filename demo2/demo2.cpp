#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// 关键字 const 的用法
	// int x = 3; //变量名x，存储地址&x，存储内容3
	// const int x = 3; 
	/* 加上const之后就会由变量变成常量，(变量名x，存储地址&x，存储内容3)，但是x的值不可更改
	 * 如果再给x赋值其他值的话，会报错，无法编译
	 */


	// const 与指针类型的关系
	// 写法一
	// const int *p = NULL;
	// int const *p = NULL;
	// 两种写法同等

	// 写法二
	// int*const p = NULL;

	// 写法三
	// const int* const p = NULL;
	// int const*const p = NULL;
	// 两种写法同等

	// int x = 3;
	// const int* p = &x;//用const修饰指向之后的值，不可改变
	// p = &y;//正确，p指向&y是可以的，因为const所修饰的是*p，与p无关
	// *p = 4;//错误，通过*p重新赋值，则报错

	// const int x = 3;
	// const int* const p = &x;
	//p=&y,*p=4都错误，因为const修饰的x和*和p的空间都被锁定，*p和p可以指向x，但是不能在进行改变


	// const与引用的关系；
	// int x = 3;
	// const int& y = x;
	// x = 10;正确，因为x未被const修饰，直接改变本体是可以的
	// y = 20;错误，y是x的别名，但是已经被const，因此y不能改变

	// const int x = 3;
	// int* y = &x;
	// 这个写法也同样不允许，因为一开始就定义了不可变的x，到后面却声明了可变的指针指向x，这是错误的

	return 0;
}
