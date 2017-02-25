#include "Account.h"

//定义静态成员
//		既可以在内部定义也可以在外部定义
//		外部定义不重复static
//		静态成员不是构造函数初始化的,必须在类的外部定义和初始化每个静态成员
//		静态成员存在于整个生命周期中
double Account::interestRate = initRate();

void Account::rate(double newRate)
{
	interestRate = newRate;
}
