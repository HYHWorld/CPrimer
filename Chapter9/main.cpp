#include<iostream>
#include <list>
#include <deque>
#include <vector>
#include<forward_list>
#include<string>
using namespace std;
int main() {
	//顺序容器
	//		容器:一些特定类型对象的集合
	//		定义:为程序员提供了控制元素存储和访问顺序的能力,这种顺序不依赖于元素的值,而是与元素加入容器时的位置相对应
	
	//顺序容器概述
	//		所有顺序容器都提供了快速顺序访问的能力
	//		但在以下方面都有不同的性能折中:
	//			1.向容器添加或从容器中删除元素的代价
	//			2.非顺序访问容器中元素的代价
	//		列举顺序容器:
	//			1.vector:可变大小数组
	//			2.deque:双端队列
	//			3.list:双向列表
	//			4.forward_list:单项列表
	//			5.array:固定大小数组
	//			6.string:与vector类似,专用于字符
	//		固定大小array外,其他容器都提供高效,灵活的内存管理
	//		容器保存元素的策略对容器操作的效率有着固有的,有时是重大的影响,有时会影响到是否支持某些操作
	//
	//		list和forward_list两个容器设计目的是令容器任何位置添加和删除操作都很快,但不支持元素的随机访问,与vector,deque,array相比内存开销也大
	//		deque与string和vector类似,支持快速顺序访问,中间位置添加或删除元素的代价很高,但deque的两端添加或删除元素都是很快的
	//		forward_list和array是C++11新类型.
	//			array:
	//				1.与内置相比更容易使用
	//				2.不支持添加删除元素以及更改容器大小的操作
	//			forward_list:
	//				1.目标是达到与最好手写的单向链表数据结构相当的性能
	//				2.没有size,减小开销
	//
	//确定使用哪种顺序容器
	//		规则:
	//			1.优先选择vector
	//			2.如果程序有很小的元素,且空间的额外开销很重要,则不要使用list或forward_list
	//			3.如果程序要求随机访问使用vector或deque
	//			4.如果程序要求在容器的中间插入删除元素使用list或forward_list
	//			5.如果程序需要在头尾插入删除元素,但不会在中间插入删除元素使用deque
	//			6.如果程序只有在读取输入时才需要在容器中间位置插入元素,随后需要随机访问元素则:
	//				1.确定是否需要在容器中间添加元素,通常使用vector追加元素,然后用sort重排
	//				2.如果必须在中间添加,使用list后拷贝到vector
	//总结:根据程序中占主导地位的操作,选择相应的容器
	
	//容器库概览
	//		容器类型上的操作形成了层次
	//			1.某些操作是所有容器类型都提供的
	//			2.另外一些操作仅针对顺序容器,关联容器或无序容器
	//			3.只适用于一些部分容器
	//
	//		一般容器定义在一个头文件中,文件名与类名相同

	
	//list<int> intList(); //为容器提供额外的信息

	//容器可以保存几乎任意类型
	//但某些容器操作对元素类型有其自己的特殊要求
	//		比如接受容器大小的版本不支持无默认构造函数的类型
	//deque<vector<int>> douDeque();

	//迭代器
	//		迭代器有着公共接口:如果一个迭代器提供某个操作,那么所有提供相同操作的迭代器对这个操作的实现方式是相同的
	//		除了forward_list迭代器不支持--
	//		string,vector,deque,array支持的算术运算:
	//			* -> ++ -- == !=
	//		迭代器范围使用begin和end(first和last)表示
	//			begin:起始位置
	//			end:尾后位置
	//		范围:[begin,end)
	//		假定begin和end构成一个合法的迭代器范围:
	//			1.如果begin==end,则范围为空
	//			2.如果beign!=end，则范围至少包含一个元素,且begin指向第一个元素
	//			3.我们可以对begin递增若干次,使begin==end
	//				vector<int> intVector(10);
	//				auto begin = intVector.begin();
	//				auto end = intVector.end();
	//				while (begin != end) {
	//						cout << *begin<< endl;
	//						begin++;
	//				}

	//容器类型成员
	//		列:
	//			1.size_type
	//			2.iterator
	//			3.const_iterator
	//			4.反向迭代器
	//			5.类型别名
	
	//begin和end成员
	//		用途:形成一个包含容器所有元素的迭代器范围
	//		多个版本:
	//			1.带r版本(rbegin/rend)返回反向迭代器
	//			2.带c版本(cbegin/cend)返回const迭代器
	//			3.不以c开头的函数(begin/end)是被重载过的
	//				1.一个const成员,返回const_iterator
	//				2.一个非常量成员,返回iterator
	//					iterator->const_iterator
	//		c版本是C++11引入的,为了与auto一起使用

	//容器定义和初始化
	//		每个容器都定义了一个默认构造函数,除array外,其他容器的默认构造函数都会创建一个指定类型的空容器,且都可以接受指定容器大小和元素初始值参数
	//
	//将容器初始化为另一个容器的拷贝
	//		方法:
	//			1.直接拷贝整个容器
	//			2.拷贝由一个迭代我对指定的元素范围
	//		要求:
	//			使用直接拷贝:两容器的类型及其元素类型必须匹配
	//			使用迭代器指定元素范围拷贝:元素类型匹配  //可以拷贝某容器的子序列
	//				vector<const char*> articles = { "a","an","the" };
	//				forward_list<string> words(articles.begin(), articles.end());
	//				for (auto x : words) {
	//					cout << x <<endl;
	//				}
	//
	//列表初始化
	//		新标准下可以对一个容器进行列表初始
	//			list<string> authors = { "Militon","Shakespeare","Austen" };
	//		对array之外的容器类型初始化列表还隐含地指定了容器的大小
	//
	//与顺序容器相关的构造函数
	//		接受一个容器大小和一个元素初始值(可选)
	//		如果类类型没有默认构造需要显式的元素初始值
	//
	//array有固定的大小
	//		定义一个array时需要指定容器大小
	//			array<string, 10> arr;
	//		使用array的类型也需要指定大小
	//			array<string,10>::size_type
	//		不支持普通的构造函数,一个默认构造的array是非空的,元素执行默认构造,如果使用列表初始化,没有默认构造的情况下,元素个数应该与array大小相同
	//			array<string,10> arr = {"h"};
	//		支持对象拷贝或赋值
	
	//赋值和swap
	//		
	return 0;
}