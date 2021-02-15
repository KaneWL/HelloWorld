//第六节 switch case语句

/* 学了上期的if 那我们来看看它的兄弟 switch case
* switch case 一般会在你需要判断一个值有很多种可能性的时候用
* 用法很简单 如下
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
	//首先 定义一个变量
	int a = 0;

	//然后把a放进去
	switch (a) {
	case 0:
		cout << "a是0" << endl;
		//如果是0 就执行这一段 并跳出switch
		break;
	case 1:
		cout << "a是1" << endl;
		//如果是1 就执行这一段 并跳出switch
		break;
	case 2:
		cout << "a是2" << endl;
		//如果是2 就执行这一段 并跳出switch
		break;
	default:
		//如果都不是 那么执行默认这一段 并跳出switch
		//注意 default可以没有 但是如果有 必须放在switch的最下面
		cout << "a是其他值" << endl;
		break;
	}

	//需要注意的是 如果不写break的话 会导致流程继续下去 执行下方的语句

	a = 1;
	switch (a) {
	case 1:
		cout << "a是1" << endl;
		//执行完毕后没有碰到break 继续向下执行了
	case 2:
		cout << "a是2" << endl;
		//它无视了这个条件 继续执行了这一句 并且碰到break 就此跳出switch
		break;
	default:
		cout << "a是其他值" << endl;
		//不会被执行
		break;
	}

	return 0;
}