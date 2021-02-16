#pragma once

#include <iostream>
using std::string;
using std::move;

//这是一个动物类 我们让它包含两个字段
class Animal {
	//动物的类型
	string _type;
	//动物的名字
	string _name;

public:
	//定义它的构造 并在Animal.cpp中实现它的功能
	Animal();
	Animal(const string &name);

	void SetType(const string &type);
	void SetName(const string &name);

	//结尾标注const 告知编译器我们这个函数不会修改值
	string GetType() const;
	string GetName() const;
};
