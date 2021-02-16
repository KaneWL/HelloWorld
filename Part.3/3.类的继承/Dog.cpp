#include "Dog.h"

Dog::Dog() {
    this->SetType("狗");
}

Dog::Dog(const string &name) {
    this->SetType("狗");
    this->SetName(name);
}