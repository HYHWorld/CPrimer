#include "Window_mgr.h"
#include"Screen.h"
#include <string>
//���������
//		������������,��ͨ���ݺͺ�����Աֻ�������·���:
//			1.����
//			2.����
//			3.ָ��
//������Ͷ��������ⲿ�ĳ�Ա
//		���ⲿ,��Ա�����ֱ�����
//		���ڲ�����ֱ�ӷ���
void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.getContents() = std::string(s.getHight()*s.getWidth(), ' ');
}

//����ֵ����������ǰ��,��ʵ������λ�����������֮���,������ȷָ���ĸ��ඨ������
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
	screens.push_back(s);
	return screens.size() - 1;
}
