#pragma once
#include<string>
//名字查找与类的作用域
//		名字查找过程:
//			1.在名字所在的块中寻找其声明语句,只考虑在名字的使用之前出现的声明
//			2.如果没有找到,继续查找外层的作用域
//			3.如果最终没有找到匹配的声明,则程序报错
//		类内部的成员函数来说:
//			1.编译成员声明
//			2.直到全部可见后才编译函数体
//
//用于类成员声明的名字查找

typedef double Money;
std::string bal;
class Account {
public:

	//在整个类可见后才被处理
	Money balance() { return bal; }
private:
	//类型名要特殊处理
	//		内层作用域可以重新定义外层作用域中的名字,即使名字已经在内层作用域中使用过
	//		然而在类中,类不能重定义外层作用域中的类型名
	typedef double Money; //编译器不报错,然而是错的
	Money bal;
public:
	void calculate() { amount += amount*interestRate; }
	//类的静态成员
	//		与类本身直接相关,而不是与类的对象保持联系
	//声明静态成员(static)
	//		类静态成员存在于任何对象之外,对象中不包含任何与静态数据成员有关的数据
	//		静态成员函数不与任何对象绑定,不包含this指针,不能声明为const也不能在static函数体内用this指针
	//
	//使用类的静态成员
	//		虽然静态成员不绑定对象,依旧能用访问符访问
	//		成员函数不通过作用域运算符就能访问静态成员
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();

	//静态成员的类内初始化
	//		通常情况下,类的静态成员不应该内部初始化
	//		我们可以提供const整数类型的类内初始值,但静态成员必须是字面值常量
	static constexpr int period = 0;
	//如果某个静态成员的应用场景仅限于编译器可以替换它的值的情况,则一个初始化的const或constexpr不需要反别定义,相反,如果我们将它用于值不能替换的场景中,该成员必须有定义语句
};
constexpr int Account::period;

//静态能用于某些场景,普通成员不能
//		静态数据成员可以是不完整的类型
//			特别的静态数据成员可以是它所属的类类型
//		可以使用静态数据成员作为默认实参