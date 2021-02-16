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
* public表示公有 也就是外部所有的人都能看到他父类的属性
* protected表示保护 表示父类的属性可以被看到 但是不能被修改
* private表示私有 只有自己可以看到属性
*
* 一般情况下使用public即可
*/