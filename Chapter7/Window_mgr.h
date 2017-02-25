#pragma once
#include<vector>
#include"Screen.h"
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);

	ScreenIndex addScreen(const Screen&);
private:
	//�����ݳ�Ա�ĳ�ʼֵ
	//		Ĭ���������Ҫһ����׼�ߴ�Ŀհ�Screen
	//		���ڳ�ʼֵ����ʹ��=�ĳ�ʼ����ʽ��������������ֱ�ӳ�ʼ����ʽ
	std::vector<Screen> screens{ Screen(24,80,' ') };
};
