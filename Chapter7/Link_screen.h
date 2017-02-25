#pragma once
#include"Screen.h"

//类类型
//		每个类定义了唯一的类型,对于两个类来说,即使成员相同,两个类也是不同的类型
//		可以把类名当类型名用.也可以把类名放在class或struct后面
//
//类的声明
//		我们可以仅声明,不定义(前向声明)
//			class Screen;(不完全类型)
//		知道Screen是个类类型,但不知道里面的成员
//		创建对象之前必须定义过,不仅仅是声明
//		一旦一个类的名字出现后,就被认为是声明过了,因此允许包含指向自身的指针
class Link_screen {
	Screen window;
	Link_screen *next;
	Link_screen *prev;
};