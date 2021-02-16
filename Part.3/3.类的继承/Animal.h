#pragma once

#include <iostream>
using std::string;

//这是一个动物类 我们让它包含两个字段
class Animal {
	//动物的类型
	string type_;
	//动物的名字
	string name_;

public:
	//定义它的构造 并在Animal.cpp中实现它的功能
	Animal();

	//此处我们使用explicit关键词 禁止隐式转换
    explicit Animal(const string& name);
	//什么是隐式转换?
	//举个例子 我们的冰箱有一个函数名为Put 他可以传一个Animal
	//如果我们不禁止隐式转换 那么这么调用函数 Put({"小黑"}) 也是可以的 请看main.cpp第61行
	//基本上所有有参构造函数都应该加上这个关键词
	//关于隐式转换的优缺点可以看 https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/classes/ 3.2.隐式类型转换

	void set_type(const string& type);
	void set_name(const string& name);

	//结尾标注const 告知编译器我们这个函数不会修改值
	string get_type() const;
	string get_name() const;
};
