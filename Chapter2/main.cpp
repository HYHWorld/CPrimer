#include<iostream>
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

	int i = 10;

}