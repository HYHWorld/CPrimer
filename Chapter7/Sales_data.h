#pragma once
#include<string>
#define CLASS_VERSION
#ifdef STRUCT_VERSION //struct�汾
//����Ľ���Sales_data��
//		��Ա�����ķ�ʽ����ͨ�������
//		��Ա��������������������ڲ�,����������ڲ�Ҳ�������ⲿ
//		�������ڲ��ĺ�����ʽ��inline����
struct Sales_data {
	//���캯��
	//		�������ĳ�ʼ����ʽ
	//		����󱻴����ͻ�ִ�й��캯��
	//		�ص�:
	//			1.��������ͬ
	//			2.û�з���ֵ����
	//			3.���ܱ�������const
	//�ϳ�Ĭ�Ϲ��캯��
	//		���û�ж��幹�캯��,��������ִ��Ĭ�ϳ�ʼ��,����Ĭ�Ϲ��캯��(�ϳɵ�Ĭ�Ϲ��캯��)
	//		Ĭ�Ϲ��캯�����κ�ʵ��
	//		����:
	//			����������ڵĳ�ʼֵ,��������ʼ����Ա
	//			����,Ĭ�ϳ�ʼ���ó�Ա
	//
	//ĳЩ�಻�������ںϳɵ�Ĭ�Ϲ��캯��
	//		�ϳɵ�Ĭ�Ϲ��캯��ֻ�����ڷǳ��򵥵���
	//		��ͨ�ඨ���Լ���Ĭ�Ϲ���:
	//			1.������ֻ�з����಻�����κι��캯��������²Ż�����������һ��Ĭ�Ϲ��캯��,������Ƕ�����һЩ�����Ĺ��캯��,���������ٶ���һ��Ĭ�Ϲ��캯��,�����ཫû��Ĭ�Ϲ���
	//			���һ������ĳ���������Ҫ���ƶ����ʼ��,��ô����ܿ�������������¶���Ҫ����
	//			2.����Ĭд����˵,�ϳɹ������ִ�д������
	//			�ڿ��е��������ͻ򸴺����͵Ķ���Ĭ�ϳ�ʼ��,���ǵ�ֵ��δ�����
	//			3.��ʱ�����������ΪĳЩ���ͺϳ�Ĭ�ϵĹ��캯��
	//			������а���һ�������������͵ĳ�Ա�������Ա������û��Ĭ�Ϲ��캯��,��ô���������޷���ʼ���ó�Ա

	//����Sales_data�Ĺ��캯��(4��)
	//default�ĺ���
	//	����˹��캯����������Ϊ���Ǽ���Ҫ������ʽ�Ĺ��캯��,Ҳ��ҪĬ�ϵĹ��캯��
	//c++11�����ҪĬ����Ϊ,����ͨ���ڲ����б����д��=defalut��Ҫ����������ɹ��캯��
	Sales_data() = default;

	//���캯����ʼ���б�
	//��:��{֮��ĳ�Ϊ��ʼֵ�б�
	//��ĳ�����ݳ�Ա�����캯����ʼֵ�б������,��������ϳ�Ĭ�Ϲ��캯����ͬ�ķ�ʽ��ʽ��ʼ��
	Sales_data(const std::string&s) :bookNo(s) {}
	Sales_data(const std::string&s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);


	//��������ͳ�Ա����
	//		���ȱ����Ա������,Ȼ����ֵ���Ա������,���е���û���Ⱥ����
	std::string bookNo;
	//β��const�ؼ���,�޸���ʽthisָ������(������Ա����)
	//		Ĭ�������this��ָ�������͵ķǳ����汾�ĳ���ָ��
	//		��ʹ���ǲ����ڳ��������ϵ�����ͨ��Ա����
	//		const����thisΪָ�������ָ����������
	//		����ֻ�ܵ������ݳ�Ա,������д����ֵ
	std::string isbn() const {
		//this:�������ʽ���������ʵ��������Ǹ�����
		//		�ڳ�Ա�����ڲ�����ֱ��ʹ�õ��øú����Ķ���ĳ�Ա,����ʹ��this
		//		��һ������ָ��
		return bookNo; //��ʽ��ʹ��this
		//return this->bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	unsigned units_sold = 0;
	double revenue = 0.0;

	//����,��ֵ������
	//		1.������ʹ���˸�ֵ������ǻᷢ������ĸ�ֵ����
	//		2.�������ٴ���ʱִ�����ٲ���
	//		3.��ʼ�������Լ���ֵ�ķ�ʽ�򷵻�һ������
	//		һ����˵,���������ɵİ汾�Զ����ÿ����Աִ�п���,��ֵ,�����ٲ���
	//
	//ĳЩ�಻�������ںϳɵİ汾
	//		����ĳЩ����˵�ϳɵİ汾�޷���������,�ر��ǵ�����Ҫ�������֮�����Դʱ,�ϳɰ汾��ʧЧ
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif
#ifdef CLASS_VERSION
//ʹ��class��struct�ؼ���
//		����������ĵ�һ������˵����֮ǰ���峾Ե,Ȩ���������ඨ��ķ�ʽ
//		struct:�����ڵ�һ������˵����֮ǰ�ĳ�Ա��public
//		class:�����ڵ�һ������˵����֮ǰ�ĳ�Ա��private
class Sales_data {
	//private ��Ա���Ա���ĳ�Ա��������,���ǲ��ܱ�ʹ�ø���Ĵ������
private:
	double avg_price()const { return this->units_sold ? this->revenue / this->units_sold : 0; }
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	//public ��Ա���������������ڱ�����
public:
	//���캯����̽
	//���캯����ʼֵ�б�
	//		���캯���ĳ�ʼֵ���±ز�����
	//			��const,����,�����������͵ĳ�Ա,�����ʼ��
	//		��Ա��ʼ����˳��
	//			��ʼ��˳��͹��캯���ĳ�ʼ���б�˳���޹�
	//			�ɳ�Ա������Ⱥ�˳���ʼ����Ա
	//			class X{
	//			private:
	//				int i;
	//				int j;
	//			public:
	//				//δ����Ĳ���:i��jǰ��ʼ��
	//				X(int val):j(val),i(j){};
	//			};
	
	//Sales_data() = default;
	//ί�й��캯��
	//		�����б����һ�����캯��ƥ��
	Sales_data() :Sales_data("", 0, 0) {}

	Sales_data(const std::string&s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {};
	//Ĭ��ʵ�κ͹��캯��
	//		ʵ��ΪĬ�Ϲ��캯��
	//		Ĭ�Ϲ��캯��������
	//			����Ĭ�ϳ�ʼ��:
	//				1.�������ڿ��������ڲ�ʹ���κγ�ʼֵ����һ���Ǿ�̬������������
	//				2.��һ���౾���������͵ĳ�Ա��ʹ�úϳɵ�Ĭ�Ϲ��캯��
	//				3.�������͵ĳ�Աû���ڹ��캯����ʼֵ�б�����ʽ�س�ʼ��ʱ
	//			����ֵ��ʼ��:
	//				1.�������ʼ���Ĺ�������������ṩ�ĳ�ʼֵ����С�������С
	//				2.�����ǲ�ʹ�ó�ʼֵ����һ���ֲ���̬����
	//				3.������ͨ����д����T()�ı��ʽ��ʽ������ֵ��ʼ��
	//		�������ʹ��Ĭ�Ϲ��캯��

	//Sales_data(std::string s = "") :bookNo(s) {}
	

	//���ƹ��캯���������ʽת����explicit
	//explicit���캯��ֻ������ֱ�ӳ�ʼ��
	//Ϊת����ʽ��ʹ�ù��캯��
	//		Sales_data("hehe");
	//		static_cast<Sales_data>(cin);
	explicit Sales_data(const std::string&s) :bookNo(s) {}
	
	//Sales_data(std::string s) :Sales_data(s, 0, 0) {}

	explicit Sales_data(std::istream&);
	//std::string isbn() const { return this->bookNo; }
	std::string isbn()const{ return this->bookNo; }
	Sales_data &combine(const Sales_data&);
	
	//��Ԫ
	//		��������Ľӿڵ�һ����,�����ǲ�����ĳ�Ա
	//		�����������������ߺ����������ķǹ��г�Ա,����������������ߺ�����Ϊ������Ԫ(friend)
	//		��Ԫ������ĳ�ԱҲ����������������ʿ��Ƽ����Լ��
	//
	//��Ԫ������
	//		����ָ���˷��ʵ�Ȩ��,����һ��ͨ�������ϵĺ�������
	//		��Ҫ����Ԫ�������ٶԺ�����������
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif