#include "Sales_data.h"
#ifdef CLASS_VERSION || STRUCT_VERSION
//在类的外部定义构造函数
//以istream为参数的构造函数需要执行一些实际操作
//必须指明该构造函数是哪个类的成员
//没有出现在初始值列表的成员采用默认初始化或者类内初始值初始化
Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

//定义一个返回this对象的函数
//		当我们定义的函数类似于某个内置运算符时
//		应该令该函数的行为尽量模仿这个运算符
//		内置的赋值运算符把它的左侧运算对象当成左值返回
//		为了保持一致性,必须返回引用类型
Sales_data & Sales_data::combine(const Sales_data & rhs)
{
	this->units_sold += rhs.units_sold;
	this->revenue += rhs.revenue;
	return *this;
}

//在类外部定义成员函数
//		在类的外部定义成员函数时,成员函数的定义必须与它的声明匹配
double Sales_data::avg_price() const
{
	if (this->units_sold) {
		return this->revenue / this->units_sold;
	}
	else {
		return 0;
	}
}

//定义类相关的非成员函数
//		如果函数在概念上属于类但是不定义在类中,则一般应与类声明在同一个文件内

//定义add函数
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

//定义read和print函数
//		1.read和print分别接受一个各自IO类型的引用作为其参数,这是因为IO类属于不能被拷贝的类型,因此我们只能通过引用来传递
//		2.print函数不负责换行,执行输出任务的函数应该尽量减少对格式的控制,这样可以确保由用户代码来决定是否换行
std::ostream & print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

std::istream & read(std::istream & is, Sales_data & item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}
#endif
