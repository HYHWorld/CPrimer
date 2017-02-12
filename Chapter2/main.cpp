#include<iostream>
constexpr int size();
void main() {
	//bool b = true;
	//char ch = 'h';
	//wchar_t wch = 'h';
	//char16_t ch1 = 'h';
	//char32_t ch3 = 'h';
	//short sh = 10;
	//int i = 10;
	//long l = 10l;
	//long long ll = 10ll;
	//float f = 10.4f;//f表明此数为float不是double
	//double d = 10.4;
	//long double ld = 10.4l; 
	//std::cout
	//	<< b << ",type:bool,len:" << sizeof(bool) << "\n"
	//	<< ch << ",type:char,len:" << sizeof(char) << "\n"
	//	<< wch << ",type:wchar_t,len:" << sizeof(wchar_t) << "\n"
	//	<< ch1 << ",type:char16_t,len:" << sizeof(char16_t) << "\n"
	//	<< ch3 << ",type:char32_t,len:" << sizeof(char32_t) << "\n"
	//	<< sh << ",type:short,len:" << sizeof(short) << "\n"
	//	<< i << ",type:int,len:" << sizeof(int) << "\n"
	//	<< l << ",type:long,len:" << sizeof(long) << "\n"
	//	<< ll << ",type:long long,len:" << sizeof(long long) << "\n"
	//	<< f << ",type:float,len:" << sizeof(float) << "\n"
	//	<< d << ",type:double,len:" << sizeof(double) << "\n"
	//	<< ld << ",type:long double,len:" << sizeof(long double)
	//	<< std::endl;

	//前置符号提示词最大值：unsigned=2signed+1;*不改变原类型内存大小
	//使用char运算请带上前置符号提示词 signed、unsigned	bool b = true;
	//强转时signed->unsigned

	//int i = 20; //十进制
	//i = 024;	//八进制
	//i = 0x14;	//十六进制
	//浮点字面值带e;
	//转义\n,\r,\t,\a,\v,\b,\",\',\f
	//字面值前缀:u,U,L,u8
	//字面值后缀:	
	//		整型	u或U，l或L,ll或LL
	//		浮点型	f或F,l或L

	//初始化和赋值操作是两码事
	//全局变量默认初始化，其他不进行初始化

	//double d = 3.1415926;
	//int i = d;	//编译通过 waring
	//int j = { d };	//编译不通过 error C11新特性

	//extern 多文件使用同一变量进行申明

	//::访问全局作用域
	//复合类型:
	//		1.引用
	//		2.指针:未初始化的指针是野指针;空指针使用nullptr;void*能够指向任意对象
	
	//复合类型的申明:
	//		1.定义多个变量
	//		2.指向指针的指针
	//		3.指向指针的引用:从右向左读

	//const限定:值无法改变final
	//		1.初始化无关乎const
	//		2.通过extern使用共同的const

	//const引用:
	//		1.将引用绑定在const上,引用必须为const
	//		2.const引用可以绑定非const变量
	//		3.const引用绑定在其他类型的变量上实质是绑定在强转的临时变量上,非const归为非法

	//const指针:
	//		1.将指针绑定在const上,指针必须为const
	//		2.const指针可以绑定非const变量
	//		3.const指针变量和const指针:const x *const y = zz;

	//顶层/底层const:
	//		1.顶层:指针本身是个常量(指针变量):一般的针对变量
	//		2.底层:指向的对象是个常量:一般针对指向的值

	//constexpr申明的变量或函数一定是个常量表达式
	//constexpr int mf = 20;
	//constexpr int re = size(); //非constexpr报错
	
	//constexpr指针:对变量有效,对指针指向的值无效,为顶层const

	//处理类型:
	//		1.类型别名:typedef,using
	//		2.指针的类型别名
	//			typedef char* pstring;
	//			char ch = 'h';
	//			const pstring cstr = &ch;
	//			*cstr = 'y';
	//			char p = 'z';
	//			cstr = &p; //报错,所以const pstring是个顶层const
	//		3.auto类型说明符:让编译器分析类型,并运算赋值,一语句中只能用同一种类型
	//			auto会忽略掉顶层const,如需要要另行申明
	//			auto引用:绑定字面值时非常量引用而绑定常量时是常量引用
	//		4.decltype类型提示:只推断类型,不赋初值
	//			decltype不忽略顶层const
	//			decltype先运算类型后推断,且只挖掘一次
	//			decltype多一层括号就是引用
}
constexpr int size() {
	return 10;
}