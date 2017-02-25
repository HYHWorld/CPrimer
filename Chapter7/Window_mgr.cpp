#include "Window_mgr.h"
#include"Screen.h"
#include <string>
//类的作用域
//		在类作用域外,普通数据和函数成员只能由以下访问:
//			1.对象
//			2.引用
//			3.指针
//作用域和定义在类外部的成员
//		类外部,成员的名字被隐藏
//		类内部可以直接访问
void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.getContents() = std::string(s.getHight()*s.getWidth(), ' ');
}

//返回值类型在类名前面,事实上它是位与类的作用域之外的,必须明确指定哪个类定义了它
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
	screens.push_back(s);
	return screens.size() - 1;
}
