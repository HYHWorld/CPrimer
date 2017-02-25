#pragma once
class Debug {
public :
	//����ֵ������
	//		���ݳ�Ա��������ֵ���͵ľۺ���
	//		��������Ҫ��Ҳ������ֵ������:
	//			1.���ݳ�Ա���붼������ֵ��������
	//			2.���ٺ���һ��constexpr���캯��
	//			3.���һ�����ݳ�Ա�������ڳ�ʼֵ,���������ͳ�Ա�ĳ�ʼֵ������һ���������ʽ,���������Ա����ĳ��������,���ʼֵ����ʹ�ó�Ա�Լ���constexpr
	//			4.�����ʹ������������Ĭ�϶���,�ó�Ա����������Ķ���

	//constexpr���캯��
	//		�ȷ��Ϲ��캯����Ҫ��,�ַ���constexpr������Ҫ��
	constexpr Debug(bool b = true) :hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
	constexpr bool any() { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;
	bool io;
	bool other;
};