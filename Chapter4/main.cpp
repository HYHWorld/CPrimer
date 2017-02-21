#include<iostream>
using namespace std;
int main() {
	//基础

	//运算符
	//		一元运算符,如(解引用)*,&
	//		二元运算符,如==,*(乘法)
	//		三元运算符,?:
	//注:如*是一元运算符或二元运算符由上下文决定
	//
	//组合运算符和运算对象:带括号运
	//
	//运行对象转换:小转大
	//重载运算符:优先级不改变,添加运算符的功能
	//
	//左值和右值
	//		左值表达式的求值结果是一个对象或者一个函数,然而以常量对象为代表的某些左值实际上不能作为赋值语句的左值运算符对象
	//
	//归纳:当对象被用作左值的时候用的是对象的身份,当一个对象被用作右值得时候,用的是对象的值
	//理解decltype(*p)和decltype(&p)的区别
	//
	//优先级与结合律:用于处理符合表达式,括号优先级最高后以优先级表和结合律从左向右进行运算
	//
	//求值顺序
	//		在表达式内指向并修改了同一个对象将引发错误并产生未定义的行为
	//			int i=0;
	//			cout<<i<<""<<++i<<endl;
	//		四种运算符明确规定了运算对象和求值顺序
	//			&& || ?: ,
	//求值顺序,优先级,结合律:运算对象的求值顺序与优先级和结合律无关

	//算术运算符
	//		运算符的运算对象和求值对象都是右值
	//		类型提升
	//		布尔值不应该参与运算
	//			bool b = true;
	//			bool b2 = -b; b被提升为int,-b为-1,b2为true
	//		商一律向零取整

	//逻辑和关系运算符
	//		策略:短路求值
	//
	//逻辑非运算符
	//关系运算符
	//相等性测试与布尔值字面值
	//		与1或0比较不要用bool值,而是直接写出1,0

	//赋值运算符
	//		必须是一个可修改的左值
	//		允许使用花括号括起来的初始值列表
	//		对类类型来时,赋值运算的细节由类本身决定
	//
	//赋值运算满足右结合律
	//		对于多重赋值语句中的每个对象,它的类型或者与右边对象的类型相同,或者可由右边对象的类型转换得到
	//赋值运算优先级较低
	//切勿混淆相等运算符和赋值运算符
	//符合赋值运算符

	//递增和递减运算符
	//		必要性:许多迭代器不支持算术运算
	//混用解引用合递增运算符
	//运算对象可按任意顺序求值

	//成员访问运算符:->
	//条件运算符
	//		当条件的两个表达式都是左值或者能够转换成同一种左值类型时,运算的结果是左值,否则运算的结果为右值
	//
	//嵌套条件运算符
	//		允许在条件运算符的内部嵌套另一个条件运算符
	//在输出表达式中使用条件运算符

	//位运算符
	//		作用于整数类型的运算对象,并把运算对象看成是二进制位的集合
	//		小整形会提升为较大的整数类型
	//		带符号整形左移是未定义行为
	//
	//移位运算符:>>,<<
	//		右侧运算对象不能为负
	//		右侧运算对象的值必须小于结果位数
	//		满足左结合律
	//
	//位求反运算符:~
	//位与,位或,位异或运算符:& | ^
	//

	//sizeof运算符
	//		返回一条表达式或一个类型名字所占的字节数
	//		类型为size_t
	//		满足右结合律并与*的级别相同
	//		sizeof运算符无须提供一个具体对象,因为想要知道类成员的大小无须真的获取该成员使用作用域运算符来获取类成员的大小
	//		对string,vector只返回固定部分的大小
	//		对数组需要将所有元素进行sizeof并相加

	//逗号运算符:按照从左向右的顺序依次求值,丢弃左侧结果

	//类型转换
	//		如果两种类型可以相互转换,那么他们是关联的
	//注意:隐式转换

	//算术转换
	//		一种算术类型转换为另一种算术类型
	//
	//整形提升:小整数转换为较大的整数
	//无符号类型的运算对象:
	//		依赖于各个整数类型的相对大小
	//		带符号转换为无符号的(无符号类型不小于带符号类型的情况)
	//		带符号大于无符号,结果依赖于机器

	//其他隐式类型转换
	//		数组转指针
	//		指针转换
	//		转换成bool
	//		转换成常量
	//		类类型定义的转换
	//
	//显示转换:强制类型转换
	//		static_cast
	//			任何具有明确定义的类型转换,类型一旦不符就报错
	//		dynamic_cast
	//		const_cast
	//			只能改变运算对象的底层const
	//			如果对象原为const使用它报错
	//			如果对象原不为const合法
	//		reinterpret_cast
	//			通常为运算对象的位模式提供较低层次的重新解释(危险)
	//			意思是不相联的类能够转换
}