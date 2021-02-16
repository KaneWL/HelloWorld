#include "Elephant.h"

Elephant::Elephant() {
	//由于我们的动物类型变成了大象 所以我们调用一下设置类型的函数 修改类型为大象
	//可以看到 由于我们继承了父类 我们拥有了父类的函数
	this->SetType("大象");
}

Elephant::Elephant(const string &name) {
	this->SetType("大象");
	this->SetName(name);
}