//第八节 for循环语句

/*
* for循环语句 也是一种循环语句
* 他可以被while语句所替代
* 那么有一些小伙伴就要问了
* 为什么可以被替代还要有for呢 我用while不就好了
* 别着急 且听我一一道来
*/

#include<iostream>
using std::cout;
using std::endl;

int main() {
	//for循环分为三个部分 每个部分使用分号隔开
	//第一部分(init):一般用作声明循环体内的局部变量
	//第二部分(condition):循环继续的条件语句
	//第三部分(increment):循环执行完毕后执行的语句 一般用来增加变量的值
	for (int i = 0; i < 10; i++) {
		cout << "i的值为:" << i << endl;
	}

	//当然你可以写成这样 不要某部分的条件 三个部分都是非必须的
	int i = 0;
	for (; i < 10;) {
		i++;
		cout << "i的值为:" << i << endl;
	}

	//当三个条件都为空时 这个for循环等价于while(true) 无限循环 需要在合适的位置跳出循环
	i = 0;
	for (;;) {
		i++;
		//当i大于10时 跳出循环
		if (i > 10) break;
	}

	//for循环还有一个很重要的功能：遍历数组(数组请看第二章)
	//首先 我们定义一个数组
	int arr[] = { 0,1,2,3,4,5 };
	//变量类型 变量名称 冒号 数组
	//例子如下
	for (int j : arr) {
		cout << "j当前的值为:" << j << endl;
	}

	//注意 在C++11之后可以使用关键词auto代替变量类型 使用如下
	//auto会进行类型推导 自动判断j的类型是什么
	for (auto j : arr) {
		cout << "j当前的值为:" << j << endl;
	}

	//所以说for循环和while循环是取长补短 有时候for更方便 有时候while更方便
	//各有所长 各有所短 怎么方便怎么来就好啦

	return 0;
}