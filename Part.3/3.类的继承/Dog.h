#pragma once
#include "Animal.h"

class Dog :
	public Animal {
public:
	//狗狗和大象同理
	Dog();
	explicit Dog(const string& name);
};
