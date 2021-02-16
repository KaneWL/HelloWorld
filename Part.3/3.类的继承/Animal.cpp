#include "Animal.h"

//我们在源文件里实现他的功能

Animal::Animal() :
	_type("动物"), _name("无名") {
}

Animal::Animal(const string &name) :
	_type("动物"), _name(name) {
}

void Animal::SetType(const string &type) {
	this->_type = type;
}

void Animal::SetName(const string &name) {
	this->_name = name;
}

string Animal::GetType() const {
	return this->_type;
}

string Animal::GetName() const {
	return this->_name;
}