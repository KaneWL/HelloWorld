#pragma once

#include "Animal.h"

//大象的类 它继承与动物类
class Elephant :
        public Animal {
    //在这里 我们只需要大象的构造即可
public:
    Elephant();

    explicit Elephant(const string &name);
};

/*
* 继承的方式很简单 用冒号 访问权限 父类名称 即可继承
* 访问权限分为三个 public protected private
* public表示公有 外部能看到public的属性和函数
* protected表示保护 外部无法访问 但是它的子类可以访问
* private表示私有 只有自己可以访问
*
* 一般情况下使用public即可
*/