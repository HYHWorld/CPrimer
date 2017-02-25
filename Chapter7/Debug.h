#pragma once
class Debug {
public :
	//字面值常量类
	//		数据成员都是字面值类型的聚合类
	//		或者以下要求也是字面值常量类:
	//			1.数据成员必须都是字面值常量类型
	//			2.至少含有一个constexpr构造函数
	//			3.如果一个数据成员含有类内初始值,则内置类型成员的初始值必须是一条常量表达式,或者如果成员属于某种类类型,则初始值必须使用成员自己的constexpr
	//			4.类必须使用析构函数的默认定义,该成员负责销毁类的对象

	//constexpr构造函数
	//		既符合构造函数的要求,又符合constexpr函数的要求
	constexpr Debug(bool b = true) :hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
	constexpr bool any() { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;
	bool io;
	bool other;
};