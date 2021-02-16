#include "Animal.h"

//我们在源文件里实现他的功能

Animal::Animal() :
	type_("动物"), name_("无名") {
}

Animal::Animal(const string &name) :
	type_("动物"), name_(name) {
}

void Animal::set_type(const string &type) {
	this->type_ = type;
}

void Animal::set_name(const string &name) {
	this->name_ = name;
}

string Animal::get_type() const {
	return this->type_;
}

string Animal::get_name() const {
	return this->name_;
}