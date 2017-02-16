#include<iostream>
#include<string>
//using 声明
using namespace std;

int main() {
	//string 类
	//string s(10, 'c'); //10个c

	//直接初始化:不适用等号的初始化
	//拷贝初始化:使用等号的初始化

	//string str;
	//getline(cin,str); 由此和main函数可见c++不是完全面向对象

	//可以用empty来判断读取是否空行

	//string str = "hehe";
	//auto len = str.size();
	//cout << len << endl; //c++不支持反射
	//
	//getchar();

	//string::size_type s = -1; 本机为unsigned int
	//cout << s << endl;
	//getchar();

	//比较用普通比较符,按字典比较
	//赋值用等号,加法追加内容但不能直接将字面值相加

	//处理string对象中的字符:
	//		1.使用范围for+引用
	//			string  s("HelloWorld!!!");
	//			for (auto &c : s) {
	//				c = toupper(c);
	//			}
	//			cout << s << endl;
	//		2.对与一部分使用下标或迭代
	//**确保下标有效

	//标准库类型vector
	//
}