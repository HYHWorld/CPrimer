#include<iostream>
using namespace std;
int main() {
	//函数

	//函数基础
	//		编写函数
	//		调用函数
	//			主调函数:main
	//			调用函数时主调函数中断
	//		函数的形参实参:没有规定实参的求值顺序
	//		函数的形参列表:形参列表用逗号分隔
	//		函数返回类型:返回值不能为数组,可以是指针
	
	//局部对象
	//		作用域
	//		生命周期
	//局部变量隐藏全局变量,生命周期依赖于定义的方式
	//
	//自动对象:只存在于块执行期间的对象
	//局部静态对象:令局部变量的生命周期贯穿函数调用及之后的时间
	//		如果局部静态变量没有显式的初始值,它将执行值初始化,内置类型的局部静态变量的初始化为0
	
	//函数声明
	//		必须在使用之前声明
	//		可以声明多次
	//		可以只有声明
	//		也称为函数原型
	//在头文件中添加函数声明
	
	//分离式编译
	//		编译和链接多文件

	//参数传递
	//		形参的类型决定了形参和实参交互的方式
	//		当形参是引用类型时,我们说他对应的实参被引用传递或者函数被引用调用
	//		当实参的值被拷贝给形参时,形参和实参时两个相互独立的对象,我们说这样的实参被值传递或者函数被传值调用
	
	//传值参数
	//		非引用类型变量的更改时,不会影响原值
	//指针形参
	//		通过指针可以修改原值内容
	
	//传引用参数
	//		通过引用形参,允许函数改变一个或多个实参的值
	//
	//引用避免拷贝
	//		拷贝大的类类型的对象或者容器效率低,当某种类型不支持拷贝操作时,使用const引用访问
	//使用引用形参返回额外信息

	//const形参和实参
	//		忽略顶层const,注意函数重载问题
	//
	//指针或引用形参与const
	//		可以用非常量初始化底层const对象,反过来不行
	//		普通引用必须用同类型的对象初始化
	//尽量使用常量引用

	//数组形参
	//		数组特性:不允许拷贝数组,使用数组时,会将其转换为指针
	//		传递的是数组的指针
	//		可以把形参写成类似数组的形式
	//
	//		因为数组时指针的形式传递给函数的,所以一开始函数并不知道数组确切的尺寸,管理这类指针通常用三种常用的技术
	//		1.使用标记指定数组长度
	//		2.使用标准库规范:传首元素和尾后元素的指针
	//		3.显式传递一个数组大小的形参
	//
	//数组形参和const:当不需要对数组元素执行写操作时,数组形参应该为const
	//数组引用形参:允许将变量定义成数组的引用
	//传递多维数组
	//		传递多维数组的首地址

	//main处理命令行选项
	//		通过main参数获取
	
	//含有可变参数的函数
	//		1.传递一个名为initializer_list的标准库类型
	//		2.如果实参类型不同,可以编写一种特殊函数,也就是可变参数模板
	//		3.省略符形参
	//
	//initializer_list形参
	//		应用:实参数量未知但是全部实参类型相同
	//		1.是一种模板类型
	//		2.元素永远是常量
	//		3.向initializer_list形参中传递一个值序列,必须把序列放在一对花括号内
	//
	//省略符形参 
	//		使用了名为varargs的c标准库功能

	//返回类型和return语句:返回值和提交执行权
	//
	//无返回值函数:void
	//		最后会隐式的添加return
	//		如果想提前退出,可以使用return
	//
	//有返回值函数
	//		必须返回一个值
	//		确保各路都有返回值
	//
	//值是如何被返回的
	//		返回值用于初始化调用点的一个临时量,改临时量就是函数调用结果
	//		1.值返回:临时对象副本
	//		2.引用返回:不是副本,而是对象本身
	//
	//不要返回局部对象的引用
	//		函数完成后,它所占用的存储空间也随之被释放
	//		同样局部对象的指针也不行
	//
	//返回类类型的函数和调用运算符:满足左结合律
	//引用返回左值:可以为非常量引用的结果赋值
	//列表初始化返回值:可以用花括号包围值的列表
	//main函数返回值
	//		如果控制达到了main函数的结尾处而且没有return,则隐式插入一条return 0;
	//		返回值看做是状态指示器
	//递归:
	//		函数调用了自身,不管是直接的还是间接的都成为递归
	//		需要有递归终止条件

	//返回数组指针
	//		using arrT = int[10];
	//		arrT* func(int i);
	//声明一个返回数组指针的函数
	//		Type (*func(int i))[10];
	//使用尾置返回值
	//		auto func(int i) -> int(*)[10];
	//使用decltype
	//		如果知道行数返回的指针将指向哪个数组,使用它
	//		int odd[] = {1,3,5,7,9};
	//		int even[] = {0,2,4,6,8};
	//		decltype(odd) *arrPtr(int i){
	//			return (i%2)? &add : &even;
	//		}
	
	//函数重载
	//		函数名字相同但是参数列表不同
	//定义重载函数
	//		编译器根据实参类型确定应该调用哪个函数
	//		应该在形参数量或形参类型上有所不同
	//		不允许返回值不同外其他相同的函数
	//判断两个形参的类型是否相异
	//重载和const形参:
	//		无视顶层const,无法将顶层const作为区分条件
	//			Record lookup(phone);
	//			Record lookup(const phone);
	//			Record lookup(phone*);
	//			Record lookup(phone*const);
	//		保留底层const
	//			Record lookup(phone&);
	//			Record lookup(const phone&);
	//			Record lookup(phone*);
	//			Record lookup(const phone*);
	//
	//const_cast和重载
	//		将返回值从原本的const版本转为对应的非const版本
	//调用重载的函数
	//		函数匹配指一个过程,在这个过程中把函数调用与一组重载函数中的某个关联起来,也叫函数确定
	//		1.找到最佳匹配
	//		2.找不到匹配,发出无匹配
	//		3.找到多于一个可以匹配,发生二义性调用
	
	//重载与作用域
	//		局部函数声明将隐藏外部函数声明
	//		局部变量名将隐藏外部函数名

	//特殊用途语言的特性
	//		默认实参
	//		内联函数
	//		constexpr函数
	//
	//默认实参
	//		注意:一旦某个形参被赋予了默认值,它后面的所有形参都必须有默认值
	//
	//使用默认实参调用函数
	//		可以省略尾部实参
	//
	//默认实参声明
	//		通常放在头文件中,只声明一次
	//		只能为之前那些没有默认值的形参添加默认实参
	//
	//默认实参初始值
	//		局部变量不能作为默认实参
	//		只要表达式类型能转换成形参所需的类型,该表达式就能作为默认实参
	
	//内联函数和constexpr函数
	//		避免函数调用的开销
	//		简单运算使用内联
	//		函数前添加inline关键字使其变为内联
	//
	//constexpr函数
	//		能用于常量表达式的函数
	//		1.返回类型及所有形参的类型都得是字面值类型
	//		2.函数中必须只有一条return
	//		被隐式的指定为内联函数
	//		如果参数列表非常量,返回值类型也非常量
	//		内联函数和constexpr函数放在头文件内
	
	//调试帮助
	//		程序里包含调试代码,但是只在调试时使用,准备发布时屏蔽调试代码,使用到预处理两个功能
	//		1.assert:头文件cassert
	//			预处理宏,即预处理变量,类似内联
	//				assert(expr);
	//			判断expr的真假,假退出
	//			常用于检查不能发生的条件
	//		2.NDEBUG
	//			依赖于一个名为NDEBUG的预处理变量状态
	//			如果定义了NDEBUG则assert什么都不做
	//			使用#define定义NDEBUG
	//			在#ifndef和#endif见做判断
	
	//函数匹配
	//		1.确定候选函数和可行函数
	//			选定本次调用对应的重载函数集
	//			考察本次调用提供的实参,然后从候选函数中选出能被这组实参调用的函数
	//		2.寻找最佳匹配
	//			从可行函数中选择与本次调用最匹配的函数,类型越接近匹配越好
	//
	//含有多个形参的匹配
	//		1.每个实参的匹配都不劣于其他可行函数需要的匹配
	//		2.至少有一个参数匹配优于其他可行函数提供的匹配
	
	//实参类型转换
	//		确定最佳匹配
	//		1.精准匹配
	//			实参形参类型相同
	//			实参从数组类型或者函数类型转换为对应的指针类型
	//			向实参添加顶层const或者删除const
	//		2.通过const转换实现的匹配
	//		3.通过类型提升实现的匹配
	//			注意二义性
	//		4.通过算术类型转换或指针转换实现的匹配
	//		5.通过类类型转换实现的匹配
	//
	//函数匹配和const实参:用常量引用作为重载条件
	
	//函数指针
	//		函数指针指向的是函数,类型有它的返回值类型和形参类型共同决定
	//			bool (*pf)(const string &,const string &);
	//
	//使用函数指针
	//		bool b1 = pf("","");
	//		bool b2 = (*pf)("","");
	//
	//重载函数的指针:注意类型匹配
	//
	//函数指针形参
	//		形参可以是函数指针
	//		使用typedef定义自己的类型
	//		decltype返回函数类型,需要加上*变为函数指针
	//
	//返回指向函数的指针
	//		不能返回函数,但能返回函数指针
	//			using PF = int(*)(int*,int);
	//			PF f1(int);
	//			auto fi(int) ->int(*)(int*,int);
	//
	//auto和decltype用于函数指针类型
	//		如果明确知道返回函数是哪个,使用decltype简化书写
}