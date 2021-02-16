//第五节 构造函数与析构函数

#include <iostream>
//这期我们用到字符串 要注意 string也是一个类型哦！
using std::string;
using std::cout;
using std::endl;

/* 什么是构造函数
* 构造函数 即在实例化时调用的函数
* 他是一种特殊的函数 没有返回值类型 函数名称必须与类名相同
* 如果我们不写构造函数 C++默认会帮我们生成一个无参数的构造函数
*/

class Student {
	//用string存储姓名
	string name_;
public:
	//注意 构造函数一般是公有的
	//如果设为私有切没有设置无参构造的话
	//IDE会提示没有默认的构造函数 不允许你实例化
	Student(string name) {
		//它和普通的函数一样 也能执行一些代码 只不过这些代码会在对象创建的时候就执行
		this->name_ = name;
		cout << "我叫" << name << endl;
	}
	//在这里我们自定义了构造函数 如果不声明无参构造函数的话 他是不允许直接初始化的
};

class Student2 {
	string name_;
public:
	Student2(string name) {
		this->name_ = name;
		cout << "我叫" << name << endl;
	}
	//如果需要使用默认构造 可以让他直接=default即可 这样就会创建默认的无参构造函数了
	Student2() = default;
};

/* 什么是析构函数
* 析构函数也很简单 只需要在构造函数的前面加上波浪号(~)即可
* 析构函数是指一个对象在即将要消亡的时候调用的函数
* 可以用来处理一些没有删除的对象 回收指针等操作
* 俗称：善后工作
*/

class Student3 {
public:
	//注意 析构函数应该设置为共有 否则将无法进行delete操作
	~Student3() {
		cout << "awsl" << endl;
	}
};

int main() {
	//这样子我们就初始化了一个学生 并且使用了我们自定义的构造函数
	Student xiao_ming = Student("小明");

	//当我们尝试直接声明时 会出现错误
	//错误:类"Student”不存在默认构造函数
	//Student xiao_ming;

	//而我们的student2 有默认构造函数 所以是允许这样写的
	Student2 wang_fang;

	//同样 我们也可以调用自己的构造函数(涉及到函数重载的知识 请看第三章)
	Student2 xiao_li = Student2("小李");

	Student3 zhang_san;

	//删除对象时会调用析构函数
	delete &zhang_san;
}