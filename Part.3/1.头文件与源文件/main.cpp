//第一节 头文件与源文件

/* 什么是头文件？
* 简单的来说 你#include那些东西一般都是头文件
* 比如我们经常使用的#include <iostream>
*/

//头文件也是可以自定义的 接下去我们就自定义一个文件 并且包含它
//包含我们自己的头文件时 一般使用双引号 ""

//这样 我们就包含了我们自己的头文件
//你可以按住ctrl+鼠标左键跳转过去
#include "header.h"

int main() {
	A testA1 = A();
	A testA2 = A(1, 2, 3);

	testA1.print();
	testA2.print();

	delete &testA1;
	delete &testA2;

	return 0;
}