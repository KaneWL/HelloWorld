//第七节 while循环语句

/*
* 众所周知 我们经常需要重复性的去做一件事情 比如说让程序从1加到100
* 我们手动去写是非常累的 要写1+2+3+4+5+6+7+8+9......
* 这样子也太麻烦了 这时候呢 就轮到我们的while循环语句出场了
* 用法很简单 如下:
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
	int i = 1;
	//while括号里填表达式 如果表达式的结果为真 那么他就会一直执行下去
	//当i小于100的时候 我们就让循环继续 同时我们定义一个变量存储结果
	int result = 0;
	while (i < 100) {
		//我们让result的结果+=i
		//等价于 result = result + i
		result += i;
	}
	//输出一下结果
	std::cout << "result的值是" << result << endl;

	i = 1;
	result = 0;

	//它还有一种形式 不过不常用 就是我们的 do while形式
	//这种模式下 无论如何它都会执行最少一次
	//使用方法如下

	do {
		result += i;
	} while (i < 100);

	i = 1;
	result = 0;

	//你也可以写一个无限循环 在适当的位置使用break关键词跳出循环
	while (true) {
		//让i自增
		i++;
		//如果i>10 就跳出循环
		if (i > 10) break;
	}

	i = 1;

	//同时 还有一个关键词名为continue
	//如果在循环体内碰到了continue 那么本次循环终止 直接进入下一次条件判断 如果条件成立 继续循环 如果不成立 结束循环

	while (i < 10) {
		if (i == 3) continue;

		//如果为3会直接跳过 不输出3
		cout << "当前i为" << i << endl;
	}

	i = 1;

	//当然 你也可以使用return来结束整个函数
	while (true) {
		i++;
		//如果i大于20了 我们就return 0 这样子主函数就结束了 程序也就退出了 他下面的语句都不会再被执行了
		if (i > 20) return 0;
	}

	//这条语句不会被执行
	cout << "我不会被输出" << endl;

	return 0;
}