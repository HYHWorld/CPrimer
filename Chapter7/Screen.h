#pragma once
#include<string>
#include<vector>
#include"Window_mgr.h"

//成员定义中的普通块作用域的名字查找
//		只有在函数使用前出现的名字声明被考虑
//		如果在成员函函数内没有找到,在类内查找
//		如果在类内也没找到,在函数定义之前的作用域内继续查找

//不建议的代码
int height;
//定义Scanner类
class Screen {
	//友元再探
	//类之间的友元关系
	//		如其他类想要操作此类的私有字段,将类声明成友元
	//		友元无传递性
	//friend class Window_mgr;

	//令成员函数友元
	//		Screen可以只为clear提供权限
	friend void Window_mgr::clear(ScreenIndex);

	//函数重载和友元
	//		如果一个类想把一组重载函数声明成 它的友元,它需要对这组函数中每一个分别声明
	//友元声明和作用域
	//		类的非成员函数的声明不是必须在它们的友元声明之前
	//		友元本身不一定在当前作用域下
	//		即使我们仅仅是用友元声明友元类的成员调用该友元函数,它也必须是被声明过的

	//类的其他特性
	//		1.类型成员
	//		2.类的成员的类内初始值
	//		3.可变数据成员
	//		4.内联成员函数
	//		5.从成员函数返回*this
	//		6.关于如何定义并使用类类型及友元类
public:
	//类成员再探
	//定义一个类型成员
	//可以自定义某种类型在类中的别名
	//用来定义类型的成员必须先定义后使用
	typedef std::string::size_type pos;
	//using pos = std::string:size_type

	////不建议的代码
	////成员函数中的名字不应该隐藏同名成员
	//void dummy_fcn(pos height) {
	//	//全局height
	//	cursor = width * ::height;
	//	//隐藏状况下,获取成员的方式
	//	cursor = width * this->height;
	//	cursor = width * Screen::height;
	//	//height为参数
	//	cursor = width * height;
	//}

	//在文件中名字的出现处对其进行解析

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	//可变数据成员
	//		希望const成员函数内可以修改某数据的值
	//		添加mutable
	mutable size_t access_ctr; //所有成员函数都能改变它的值

	void do_diaplay(std::ostream &os) const{
		os << contents;
	}

public:
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}

	std::string &getContents() {
		return this->contents;
	}

	pos &getHight() {
		return this->height;
	}

	pos &getWidth() {
		return this->width;
	}

	//重载成员函数
	char get() const {
		return contents[cursor];
	}
	//令成员作为内联函数
	//		可以在类内部把inline作为声明的一部分显式地声明成员函数,也可以在类的外部用inline关键字修饰函数定义
	//		最好只在类外部定义的地方说明inline
	inline char get(pos ht, pos wd) const;

	Screen &move(pos r, pos c);
	void some_member() const {
		++this->access_ctr;
	}

	//返回*this的成员函数
	//		函数返回对象本身而非对象的副本
	Screen &set(char);
	Screen &set(pos, pos, char);

	//基于const的重载
	//		通过区分成员函数是否是const重载
	//		非常量版本的函数对于常量版本是不可用的
	Screen &display(std::ostream &os) {
		//*this提升为const,传入do_display()
		do_diaplay(os); 
		return *this;
	}
	//尾后表示提升*this为const,头部const表示返回值为const
	const Screen &dislpay(std::ostream &os) const {
		do_diaplay(os);
		return *this;
	}

	
};