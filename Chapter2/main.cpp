#include<iostream>
constexpr int size();
void main() {
	//bool b = true;
	//char ch = 'h';
	//wchar_t wch = 'h';
	//char16_t ch1 = 'h';
	//char32_t ch3 = 'h';
	//short sh = 10;
	//int i = 10;
	//long l = 10l;
	//long long ll = 10ll;
	//float f = 10.4f;//f��������Ϊfloat����double
	//double d = 10.4;
	//long double ld = 10.4l; 
	//std::cout
	//	<< b << ",type:bool,len:" << sizeof(bool) << "\n"
	//	<< ch << ",type:char,len:" << sizeof(char) << "\n"
	//	<< wch << ",type:wchar_t,len:" << sizeof(wchar_t) << "\n"
	//	<< ch1 << ",type:char16_t,len:" << sizeof(char16_t) << "\n"
	//	<< ch3 << ",type:char32_t,len:" << sizeof(char32_t) << "\n"
	//	<< sh << ",type:short,len:" << sizeof(short) << "\n"
	//	<< i << ",type:int,len:" << sizeof(int) << "\n"
	//	<< l << ",type:long,len:" << sizeof(long) << "\n"
	//	<< ll << ",type:long long,len:" << sizeof(long long) << "\n"
	//	<< f << ",type:float,len:" << sizeof(float) << "\n"
	//	<< d << ",type:double,len:" << sizeof(double) << "\n"
	//	<< ld << ",type:long double,len:" << sizeof(long double)
	//	<< std::endl;

	//ǰ�÷�����ʾ�����ֵ��unsigned=2signed+1;*���ı�ԭ�����ڴ��С
	//ʹ��char���������ǰ�÷�����ʾ�� signed��unsigned	bool b = true;
	//ǿתʱsigned->unsigned

	//int i = 20; //ʮ����
	//i = 024;	//�˽���
	//i = 0x14;	//ʮ������
	//��������ֵ��e;
	//ת��\n,\r,\t,\a,\v,\b,\",\',\f
	//����ֵǰ׺:u,U,L,u8
	//����ֵ��׺:	
	//		����	u��U��l��L,ll��LL
	//		������	f��F,l��L

	//��ʼ���͸�ֵ������������
	//ȫ�ֱ���Ĭ�ϳ�ʼ�������������г�ʼ��

	//double d = 3.1415926;
	//int i = d;	//����ͨ�� waring
	//int j = { d };	//���벻ͨ�� error C11������

	//extern ���ļ�ʹ��ͬһ������������

	//::����ȫ��������
	//��������:
	//		1.����
	//		2.ָ��:δ��ʼ����ָ����Ұָ��;��ָ��ʹ��nullptr;void*�ܹ�ָ���������
	
	//�������͵�����:
	//		1.����������
	//		2.ָ��ָ���ָ��
	//		3.ָ��ָ�������:���������

	//const�޶�:ֵ�޷��ı�final
	//		1.��ʼ���޹غ�const
	//		2.ͨ��externʹ�ù�ͬ��const

	//const����:
	//		1.�����ð���const��,���ñ���Ϊconst
	//		2.const���ÿ��԰󶨷�const����
	//		3.const���ð����������͵ı�����ʵ���ǰ���ǿת����ʱ������,��const��Ϊ�Ƿ�

	//constָ��:
	//		1.��ָ�����const��,ָ�����Ϊconst
	//		2.constָ����԰󶨷�const����
	//		3.constָ�������constָ��:const x *const y = zz;

	//����/�ײ�const:
	//		1.����:ָ�뱾���Ǹ�����(ָ�����):һ�����Ա���
	//		2.�ײ�:ָ��Ķ����Ǹ�����:һ�����ָ���ֵ

	//constexpr�����ı�������һ���Ǹ��������ʽ
	//constexpr int mf = 20;
	//constexpr int re = size(); //��constexpr����
	
	//constexprָ��:�Ա�����Ч,��ָ��ָ���ֵ��Ч,Ϊ����const

	//��������:
	//		1.���ͱ���:typedef,using
	//		2.ָ������ͱ���
	//			typedef char* pstring;
	//			char ch = 'h';
	//			const pstring cstr = &ch;
	//			*cstr = 'y';
	//			char p = 'z';
	//			cstr = &p; //����,����const pstring�Ǹ�����const
	//		3.auto����˵����:�ñ�������������,�����㸳ֵ,һ�����ֻ����ͬһ������
	//			auto����Ե�����const,����ҪҪ��������
	//			auto����:������ֵʱ�ǳ������ö��󶨳���ʱ�ǳ�������
	//		4.decltype������ʾ:ֻ�ƶ�����,������ֵ
	//			decltype�����Զ���const
	//			decltype���������ͺ��ƶ�,��ֻ�ھ�һ��
	//			decltype��һ�����ž�������
}
constexpr int size() {
	return 10;
}