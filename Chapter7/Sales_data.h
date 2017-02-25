#pragma once
#include<string>
#define CLASS_VERSION
#ifdef STRUCT_VERSION //struct版本
//定义改进的Sales_data类
//		成员函数的方式与普通函数差不多
//		成员函数的声明必须在类的内部,定义可以在内部也可以在外部
//		定义在内部的函数隐式的inline函数
struct Sales_data {
	//构造函数
	//		定义对象的初始化方式
	//		类对象被创建就会执行构造函数
	//		特点:
	//			1.与类名相同
	//			2.没有返回值类型
	//			3.不能被声明成const
	//合成默认构造函数
	//		如果没有定义构造函数,创建对象执行默认初始化,调用默认构造函数(合成的默认构造函数)
	//		默认构造函数无任何实参
	//		规则:
	//			如果存在类内的初始值,用它来初始化成员
	//			否则,默认初始化该成员
	//
	//某些类不能依赖于合成的默认构造函数
	//		合成的默认构造函数只适用于非常简单的类
	//		普通类定义自己的默认构造:
	//			1.编译器只有发现类不包含任何构造函数的情况下才会替我们生成一个默认构造函数,如果我们定义了一些其他的构造函数,除非我们再定义一个默认构造函数,否则类将没有默认构造
	//			如果一个类在某种情况下需要控制对象初始化,那么该类很可能在所有情况下都需要控制
	//			2.对于默写类来说,合成构造可能执行错误操作
	//			在块中的内置类型或复合类型的对象被默认初始化,他们的值是未定义的
	//			3.有时候编译器不能为某些类型合成默认的构造函数
	//			如果类中包含一个其他的类类型的成员且这个成员的类型没有默认构造函数,那么编译器将无法初始化该成员

	//定义Sales_data的构造函数(4个)
	//default的含义
	//	定义此构造函数仅仅是因为我们既需要其他形式的构造函数,也需要默认的构造函数
	//c++11如果需要默认行为,可以通过在参数列表后面写上=defalut来要求编译器生成构造函数
	Sales_data() = default;

	//构造函数初始化列表
	//在:和{之间的称为初始值列表
	//当某个数据成员被构造函数初始值列表忽略是,它将以与合成默认构造函数相同的方式隐式初始化
	Sales_data(const std::string&s) :bookNo(s) {}
	Sales_data(const std::string&s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);


	//类作用域和成员函数
	//		首先编译成员的声明,然后才轮到成员函数体,所有调用没有先后次序
	std::string bookNo;
	//尾后const关键字,修改隐式this指针类型(常量成员函数)
	//		默认情况下this是指向类类型的非常量版本的常量指针
	//		这使我们不能在常量对象上调用普通成员函数
	//		const设置this为指向常量大的指针提高灵活性
	//		对象只能调用数据成员,而不能写入新值
	std::string isbn() const {
		//this:额外的隐式参数来访问调用它的那个对象
		//		在成员函数内部可以直接使用调用该函数的对象的成员,无须使用this
		//		是一个常量指针
		return bookNo; //隐式的使用this
		//return this->bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	unsigned units_sold = 0;
	double revenue = 0.0;

	//拷贝,赋值和析构
	//		1.当我们使用了赋值运算符是会发生对象的赋值操作
	//		2.当对象不再存在时执行销毁操作
	//		3.初始化变量以及以值的方式或返回一个对象
	//		一般来说,编译器生成的版本对对象的每个成员执行拷贝,赋值,和销毁操作
	//
	//某些类不能依赖于合成的版本
	//		对于某些类来说合成的版本无法正常工作,特别是当类需要分配对象之外的资源时,合成版本会失效
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif
#ifdef CLASS_VERSION
//使用class或struct关键字
//		类可以在它的第一个访问说明符之前定义尘缘,权限依赖于类定义的方式
//		struct:定义在第一个访问说明符之前的成员是public
//		class:定义在第一个访问说明符之前的成员是private
class Sales_data {
	//private 成员可以被类的成员函数访问,但是不能被使用该类的代码访问
private:
	double avg_price()const { return this->units_sold ? this->revenue / this->units_sold : 0; }
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	//public 成员可以在整个程序内被访问
public:
	//构造函数再探
	//构造函数初始值列表
	//		构造函数的初始值有事必不可少
	//			当const,引用,或者是类类型的成员,必须初始化
	//		成员初始化的顺序
	//			初始化顺序和构造函数的初始化列表顺序无关
	//			由成员定义的先后顺序初始化成员
	//			class X{
	//			private:
	//				int i;
	//				int j;
	//			public:
	//				//未定义的操作:i在j前初始化
	//				X(int val):j(val),i(j){};
	//			};
	
	//Sales_data() = default;
	//委托构造函数
	//		参数列表和另一个构造函数匹配
	Sales_data() :Sales_data("", 0, 0) {}

	Sales_data(const std::string&s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {};
	//默认实参和构造函数
	//		实际为默认构造函数
	//		默认构造函数的作用
	//			对于默认初始化:
	//				1.当我们在块作用域内不使用任何初始值定义一个非静态变量或者数组
	//				2.当一个类本身含有类类型的成员切使用合成的默认构造函数
	//				3.当类类型的成员没有在构造函数初始值列表中显式地初始化时
	//			对于值初始化:
	//				1.在数组初始化的过程中如果我们提供的初始值数量小于数组大小
	//				2.当我们不使用初始值定义一个局部静态变量
	//				3.当我们通过书写型如T()的表达式显式地请求值初始化
	//		以上情况使用默认构造函数

	//Sales_data(std::string s = "") :bookNo(s) {}
	

	//抑制构造函数定义的隐式转换：explicit
	//explicit构造函数只能用于直接初始化
	//为转换显式的使用构造函数
	//		Sales_data("hehe");
	//		static_cast<Sales_data>(cin);
	explicit Sales_data(const std::string&s) :bookNo(s) {}
	
	//Sales_data(std::string s) :Sales_data(s, 0, 0) {}

	explicit Sales_data(std::istream&);
	//std::string isbn() const { return this->bookNo; }
	std::string isbn()const{ return this->bookNo; }
	Sales_data &combine(const Sales_data&);
	
	//友元
	//		函数是类的接口的一部分,但它们不是类的成员
	//		类可以允许其他类或者函数访问它的非公有成员,方法是令其他类或者函数成为它的友元(friend)
	//		友元不是类的成员也不受它所在区域访问控制级别的约束
	//
	//友元的声明
	//		仅仅指定了访问的权限,而非一个通常意义上的函数声明
	//		需要在友元声明外再对函数进行声明
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif