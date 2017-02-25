#include<iostream>
//#define CLASS_VERSION
//#include"Sales_data.h"
#include"Screen.h"
#include"Sales_data.h"
using namespace std;
int main() {
	//类
	//		类的基本思想就是数据抽象和封装
	//		数据抽象:一种依赖于接口和实现分离的编程技术
	//			接口:包括用户所能执行的操作
	//			实现:包括类的数据成员,负责接口实现的函数体以及定义类所需的各种私有函数
	//		封装:实现了类的接口和实现的分离,隐藏了类的实现
	//		想要实现数据抽象和封装,需要首先定义一个抽象数据类型

	//定义抽象数据类型
	//设计Sales_data类
	//		目的:令Sales_data支持与Sales_item类完全一样的操作集合
	//		Sales_data的接口应该包含以下操作:
	//			1.一个isbn成员函数,用于返回对象的ISBN编号
	//			2.一个combine成员函数,用于将一个Sales_data对象加到另一个对象上
	//			3.一个名为add的函数,执行两个Sales_data对象的加法
	//			4.一个read函数,将数据从istream读入到Sales_data对象中
	//			5.一个print函数,将Sales_data对象的值输出到ostream
	
	////使用改进的Sales_data类
	//Sales_data total;
	//if (read(cin, total)) {
	//	Sales_data trans;
	//	while (read(cin, trans)) {
	//		if (total.isbn() == trans.isbn) {
	//			total.combine(trans);
	//		}
	//		else {
	//			print(cout, total) << endl;
	//			total = trans;
	//		}
	//	}
	//	print(cout, total) << endl;
	//}
	//else {
	//	cerr << "No data?" << endl;
	//}



	//隐式的类类型转换
	//		为类定义隐式转换功能
	//		如果构造函数只接受一个实参,则它实际上定义了转换为次类类型的隐式转换机制(转换构造函数)
	//Sales_data sd = "hehe";	//explicit之后无效
	//		只允许一步步类类型转换
	//		类类型转换不是总是有效


	//聚合类(struct)
	//		1.所有成员都是public
	//		2.没有定义任何构造函数
	//		3.没有类内初始值
	//		4.没有基类,也没有虚函数
	//使用显式地列表初始化类对象

}