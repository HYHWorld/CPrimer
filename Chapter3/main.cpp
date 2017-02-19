#include<iostream>
#include<string>
#include<vector>
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
	//vector:类模板
	//模板:不是类或函数，编译器根据模板创建类或函数称为实例化
	//vector能够容纳绝大多数"对象"

	//初始化vactor对象
	//		1.默认初始化
	//			vector<string> svec;
	//		2.拷贝初始化
	//			vector<string> ivec;
	//			vector<string> ivec1(ivec);
	//			vector<string> ivec2 = ivec;
	//		3.列表初始化
	//			vector<string> articles{"a","an","the"} //为大括号
	//		4.指定数量元素
	//			vector<int> ivec(10,-1)
	//		5.值初始化
	//			vector<string> svec(10)
	//使用花括号和括号区分列表初始值和元素数量

	//向vector中添加元素
	//创建空vector使用push_back将元素压入vector

	//vector改变所有元素可用引用+范围for
	//vector返回元素个数是vector::size_type
	//当容器容纳元素比较符被重载,vector可用元素比较符

	//vector对象索引:从零开始,类型为vertor:size_type
	//vector不能使用下标形式添加元素,下标只在元素存在后出现

	//迭代器介绍
	//容器通用机制:迭代器
	//迭代器提供了对对象的间接访问,和指针相似
	
	//使用迭代器:
	//		与指针的不同:获取迭代器不是使用取地址符,有迭代器的成员和拥有返回迭代器的成员
	//			1.begin end函数返回第一个元素的迭代器和尾迭代器
	//				vector<string> vc;
	//				auto begin = vc.begin();
	//				auto end = vc.end();
	//			2.解引用获取迭代器指向的元素
	//			3.迭代器++表示元素向后移一个位置

	//迭代器类型:
	//		使用iterator和const_iterator类型
	//			vector<string>::iterator vci;
	//			vector<string>::const_iterator vcci; //只读
	
	//begin和end运算符
	//		返回类型根据对象是否为常量决定(iterator/const_iterator)
	//		专门用于const_iterator的函数cbegin(),cend()
	
	//结合解引用和成员访问操作
	//		使用(*p).xxx()或者p->xxx()调用方法或属性
	
	//注意:某些对vector对象的操作会使迭代器失效
	//例如:push_back()

	//迭代器运算(vector,string)
	//		x+n,x-n,x+=n,x-=n,x-x,比较运算
	//		参与比较的迭代器必须指向同一容器
	//		两迭代器之间的距离为difference_type(带符号整形)类型
	//		典型运算:二分搜索

	//数组
	//		类似于vector,但在灵活性和性能上有所不同
	//		在特殊应用中性能较好,但无法添加元素,所以灵活性较差
	
	//定义和初始化内置数组
	//		1.数组[]内不许是常量表达式
	//		2.默认情况下数组执行默认初始化
	//		3.定义数组必须使用指定数组类型,不允许使用auto推断
	//		4.显示初始化数组元素(列表初始化)
	//		5.字符数组的特殊性:尾部的\0
	//		6.不允许拷贝和赋值
	
	//int (*p)[10] = &arr //指向一个含有10个整数的数组
	//int (&p)[10] = arr //引用一个含有10个整数的数组

	//数组下标通常定义为size_t类型
	//其他与vector基本相同
	
	//指针与数组
	//		1.auto推断出数组a的类型为该类型的指针
	//		2.指针也为迭代器
	//			可以使用begin,end函数推导出数组的迭代指针
	//		3.指针运算
	//		4.解引用合指针交互
	//		5.下标和指针:可以使用负值下标

	//C风格字符串:以\0结束
	//		使用字符串函数操控字符串:头文件:cstring
	//			strlen(p) 返回p的长度
	//			strcmp(p1,p2) 比较p1,p2
	//			strcat(p1,p2) p2附加到p1上返回p1
	//			strcpy(p1,p2) p2拷贝到p1上返回p1

	//与旧代码的接口
	//		1.使用c风格字符串初始化字符串对象
	//		2.使用c_str()将string转换为const char*
	//		3.允许使用数组初始化vector
	//			int int_arr[] = {0,1,2,3,4,5};
	//			vector<int> ivec(begin(int_arr)/*起始位置*/,end(int_arr)/*尾后位置*/);

	//多维数组:数组的数组
	//多维数组下标引用:int(&row)[4] = ia[1];	
	//使用范围for时注意外层变量声明为引用

	//指针和多维数组
	//		多使用auto或decltype避免在数组前加指针
	//		活用begin和end使代码更简洁

	//使用类型别名使工作变简洁
	//		typedef int int_type[4];
	//		int_type i; //i为4位整形数组
}