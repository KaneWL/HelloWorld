//第三节 类的继承

#include <iostream>
using std::cout;
using std::endl;

/* 终于到了多态相关的东西
* 这一节 我会讲一个很简单的例子——如何把大象装进冰箱
* 来解释什么是继承 继承有什么好处
*/

//首先 我们定义一个Animal类和Fridge类
//请先看头文件中的声明
#include "Animal.h"
#include "Fridge.h"

//其次 请看动物的声明
#include "Elephant.h"
#include "Dog.h"

//最后 我们来试一下

int main() {
	//我们买了一个冰箱
	Fridge fridge = Fridge();

	//我们先测试一下冰箱的基础功能 看看它正不正常
	//这时候我们还没有打开过冰箱门 这时候冰箱门应该是关着的 所以会给出提示
	fridge.Close();

	//我们连续打开了两次冰箱门 也会提示问题
	fridge.Open();
	fridge.Open();

	//最后我们关上 可以发现冰箱的功能是正常的
	fridge.Close();

	cout << "---------------" << endl;

	//接下去 我们弄头大象过来
	Elephant elephant = Elephant("小花");
	//我们不开冰箱门 看看装大象会怎么样
	fridge.Put(elephant);
	//发现这样是不行的 那我们接下去把冰箱门打开
	fridge.Open();
	fridge.Put(elephant);
	//最后我们再把冰箱门关上
	fridge.Close();

    cout << "---------------" << endl;

	//我现在不放大象了 我想放一只狗进去 那么同理
	//先初始化一只狗
	Dog dog = Dog("小白");
	fridge.Open();
	fridge.Put(dog);
	fridge.Close();
	//看 也是行得通的  这就是多态的好处！

	return 0;
}