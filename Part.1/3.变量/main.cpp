//第三节 变量

/*
* 在C++中 变量有很多很多种类型 它们占用的字节不同
* 查看一个类型所占用的空间大小可以用 sizeof 函数来查看
*
*/

#include <iostream>

//使用关键词using 可以免去麻烦的前缀 用法如下
using std::cout;
using std::endl;

int main() {
	//由于不同操作系统下 所使用的字节大小不一定是一样的 所以需要用到sizeof来查看
	//使用方法如下
	cout << "char类型所占用的字节数为:" << sizeof(char) << endl;				//1
	cout << "bool类型所占用的字节数为:" << sizeof(bool) << endl;				//1
	cout << "short类型所占用的字节数为:" << sizeof(short) << endl;				//2
	cout << "int类型所占用的字节数为:" << sizeof(int) << endl;					//4
	cout << "long类型所占用的字节数为:" << sizeof(long) << endl;				//4
	cout << "long long类型所占用的字节数为:" << sizeof(long long) << endl;		//8

	//当然 你也可以查询一个变量/对象在内存中占了多少字节 使用方法如下
	//首先 定义一个变量  变量的定义方法如下:
	//int(变量的类型) i(变量的名称); 即可定义一个变量 当然你也可以在定义的时候直接给他初始值 如下:
	int i = 0;
	//需要注意的事 如果你声明变量后不给它赋初始值 那么它的缺省(默认)值就会变成程序运行时的垃圾数据 所以一定一定一定在使用前确保你的变量已经初始化赋值过了

	//查询
	cout << "i所占用的字节数为:" << sizeof(i) << endl;							//4
	//由于它是int类型的 所以也是4字节

	return 0;
}