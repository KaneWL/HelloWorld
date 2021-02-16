#include "Fridge.h"
#include <iostream>
using std::cout;
using std::endl;

//我们初始化冰箱门为关闭状态
Fridge::Fridge() :
	doorStatus(false) {
}

void Fridge::Open() {
	//我们判断一下冰箱门是否已经打开了 如果打开了就不用再次打开了 这里用到了我们的if条件语句
	if (this->doorStatus) {
		cout << "冰箱门已经打开，无需再次打开。" << endl;
	} else {
		//别忘记设置冰箱门的状态哦!
		this->doorStatus = true;
		cout << "打开了冰箱门。" << endl;
	}
}

void Fridge::Close() {
	//判断门的状态 在布尔值(bool)的前面加上感叹号代表取反
	//这句话的意思就是 如果门没有被打开(也就是关闭状态)
	if (!this->doorStatus) {
		cout << "冰箱门已经关上，无需再次关闭。" << endl;
	} else {
		this->doorStatus = false;
		cout << "关上了冰箱门。" << endl;
	}
}

void Fridge::Put(const Animal &animal) const {
	//依旧是判断冰箱门的状态
	if (this->doorStatus) {
		cout << "把名为\"" << animal.GetName() << "\"的" << animal.GetType() << "放入了冰箱里。" << endl;
	} else {
		cout << "冰箱的门还没有打开!请先打开冰箱门!!" << endl;
	}
}