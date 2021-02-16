#include "Dog.h"

Dog::Dog() {
    this->set_type("狗");
}

Dog::Dog(const string &name) {
    this->set_type("狗");
    this->set_name(name);
}