#pragma once
#include<string>
#include<vector>
#include"Window_mgr.h"

//��Ա�����е���ͨ������������ֲ���
//		ֻ���ں���ʹ��ǰ���ֵ���������������
//		����ڳ�Ա��������û���ҵ�,�����ڲ���
//		���������Ҳû�ҵ�,�ں�������֮ǰ���������ڼ�������

//������Ĵ���
int height;
//����Scanner��
class Screen {
	//��Ԫ��̽
	//��֮�����Ԫ��ϵ
	//		����������Ҫ���������˽���ֶ�,������������Ԫ
	//		��Ԫ�޴�����
	//friend class Window_mgr;

	//���Ա������Ԫ
	//		Screen����ֻΪclear�ṩȨ��
	friend void Window_mgr::clear(ScreenIndex);

	//�������غ���Ԫ
	//		���һ�������һ�����غ��������� ������Ԫ,����Ҫ�����麯����ÿһ���ֱ�����
	//��Ԫ������������
	//		��ķǳ�Ա�������������Ǳ��������ǵ���Ԫ����֮ǰ
	//		��Ԫ����һ���ڵ�ǰ��������
	//		��ʹ���ǽ���������Ԫ������Ԫ��ĳ�Ա���ø���Ԫ����,��Ҳ�����Ǳ���������

	//�����������
	//		1.���ͳ�Ա
	//		2.��ĳ�Ա�����ڳ�ʼֵ
	//		3.�ɱ����ݳ�Ա
	//		4.������Ա����
	//		5.�ӳ�Ա��������*this
	//		6.������ζ��岢ʹ�������ͼ���Ԫ��
public:
	//���Ա��̽
	//����һ�����ͳ�Ա
	//�����Զ���ĳ�����������еı���
	//�����������͵ĳ�Ա�����ȶ����ʹ��
	typedef std::string::size_type pos;
	//using pos = std::string:size_type

	////������Ĵ���
	////��Ա�����е����ֲ�Ӧ������ͬ����Ա
	//void dummy_fcn(pos height) {
	//	//ȫ��height
	//	cursor = width * ::height;
	//	//����״����,��ȡ��Ա�ķ�ʽ
	//	cursor = width * this->height;
	//	cursor = width * Screen::height;
	//	//heightΪ����
	//	cursor = width * height;
	//}

	//���ļ������ֵĳ��ִ�������н���

private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	//�ɱ����ݳ�Ա
	//		ϣ��const��Ա�����ڿ����޸�ĳ���ݵ�ֵ
	//		���mutable
	mutable size_t access_ctr; //���г�Ա�������ܸı�����ֵ

	void do_diaplay(std::ostream &os) const{
		os << contents;
	}

public:
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}

	std::string &getContents() {
		return this->contents;
	}

	pos &getHight() {
		return this->height;
	}

	pos &getWidth() {
		return this->width;
	}

	//���س�Ա����
	char get() const {
		return contents[cursor];
	}
	//���Ա��Ϊ��������
	//		���������ڲ���inline��Ϊ������һ������ʽ��������Ա����,Ҳ����������ⲿ��inline�ؼ������κ�������
	//		���ֻ�����ⲿ����ĵط�˵��inline
	inline char get(pos ht, pos wd) const;

	Screen &move(pos r, pos c);
	void some_member() const {
		++this->access_ctr;
	}

	//����*this�ĳ�Ա����
	//		�������ض�������Ƕ���ĸ���
	Screen &set(char);
	Screen &set(pos, pos, char);

	//����const������
	//		ͨ�����ֳ�Ա�����Ƿ���const����
	//		�ǳ����汾�ĺ������ڳ����汾�ǲ����õ�
	Screen &display(std::ostream &os) {
		//*this����Ϊconst,����do_display()
		do_diaplay(os); 
		return *this;
	}
	//β���ʾ����*thisΪconst,ͷ��const��ʾ����ֵΪconst
	const Screen &dislpay(std::ostream &os) const {
		do_diaplay(os);
		return *this;
	}

	
};