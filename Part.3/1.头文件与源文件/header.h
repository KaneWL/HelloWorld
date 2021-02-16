//可以看到 开头有一行这个
#pragma once

/* 这个是干什么用的呢？
* 这个是为了防止我们的头文件被多次包含 然后出现混乱
* 要知道 包含的作用就是把这个文件里的东西复制过去 粘贴在我们#include的地方
* 我们头文件往往不止出现一次 比如我在A.h include了iostream 在B.h也include了iostream 最后我在main.cpp里又同时include了A.h和B.h
* 这样一来 我们就多次包含了同一个头文件
* 如果包含多次的话 就会出现重定义的问题
* 比如我声明了一个函数叫foo 然后我包含了两次
* 系统就说 你怎么两个一模一样的函数的 我该用哪个？？
* 于是他就懵逼了
* 为了防止被多次包含 我们就要在头文件的最开头加上这句话
* 当你新建一个头文件时 IDE会自动给你加上这句话
* 当然 它还有另一种解决方法(旧版本的解决方法) 如下
*/

//ifndef的意思就是 if not define 如果没有定义
#ifndef MY_HEADER  //如果没有定义MY_HEADER
#define MY_HEADER  //那我们就定义一下

//然后在里面在声明一些类 函数什么的

class A {
	int a_, b_, c_;
public:
	//我们声明了一些函数 但是并没有给他们实现的方法 这就是头文件该做的事情
	void print();

	//它的构造函数
	A(int a, int b, int c);
	A();

	//它的析构函数
	~A();
};

//最后结束if 使用#endif
#endif // !MY_HEARDER

//看完了头文件 接下去我们去源文件 source.cpp 看看吧！