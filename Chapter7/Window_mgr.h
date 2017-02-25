#pragma once
#include<vector>
#include"Screen.h"
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);

	ScreenIndex addScreen(const Screen&);
private:
	//类数据成员的初始值
	//		默认情况下需要一个标准尺寸的空白Screen
	//		类内初始值必须使用=的初始化方式或花括号括起来的直接初始化方式
	std::vector<Screen> screens{ Screen(24,80,' ') };
};
