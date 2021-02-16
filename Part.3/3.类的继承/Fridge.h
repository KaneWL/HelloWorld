#pragma once
#include "Animal.h"

class Fridge {
	//我们定义一个变量 存储冰箱门是否打开
	bool doorStatus;
public:
	//冰箱的构造函数
	Fridge();
	//打开 关闭冰箱门的函数
	void Open();
	void Close();

	//放入动物的函数 还记得为什么要传引用吗?
	//这里我们使用大象的基类Animal 这样以后我们不仅可以放入大象 还能放入其他动物
	//只要那个动物继承Animal就好啦！ 是不是很方便呢？
	//如果不是用多态的话 你放进大象要写一个函数 放进狗又要写一个函数 这些函数的功能都是一样的
	//都是把动物放进去 可是 如果不用多态的话就要写无数个重载函数 又费时又费力 维护起来还麻烦
	//于是就有了多态继承 让我们一举多得~
	void Put(const Animal &animal) const;
};
