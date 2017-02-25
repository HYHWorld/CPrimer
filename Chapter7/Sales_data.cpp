#include "Sales_data.h"
#ifdef CLASS_VERSION || STRUCT_VERSION
//������ⲿ���幹�캯��
//��istreamΪ�����Ĺ��캯����Ҫִ��һЩʵ�ʲ���
//����ָ���ù��캯�����ĸ���ĳ�Ա
//û�г����ڳ�ʼֵ�б�ĳ�Ա����Ĭ�ϳ�ʼ���������ڳ�ʼֵ��ʼ��
Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}

//����һ������this����ĺ���
//		�����Ƕ���ĺ���������ĳ�����������ʱ
//		Ӧ����ú�������Ϊ����ģ����������
//		���õĸ�ֵ��������������������󵱳���ֵ����
//		Ϊ�˱���һ����,���뷵����������
Sales_data & Sales_data::combine(const Sales_data & rhs)
{
	this->units_sold += rhs.units_sold;
	this->revenue += rhs.revenue;
	return *this;
}

//�����ⲿ�����Ա����
//		������ⲿ�����Ա����ʱ,��Ա�����Ķ����������������ƥ��
double Sales_data::avg_price() const
{
	if (this->units_sold) {
		return this->revenue / this->units_sold;
	}
	else {
		return 0;
	}
}

//��������صķǳ�Ա����
//		��������ڸ����������൫�ǲ�����������,��һ��Ӧ����������ͬһ���ļ���

//����add����
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

//����read��print����
//		1.read��print�ֱ����һ������IO���͵�������Ϊ�����,������ΪIO�����ڲ��ܱ�����������,�������ֻ��ͨ������������
//		2.print������������,ִ���������ĺ���Ӧ�þ������ٶԸ�ʽ�Ŀ���,��������ȷ�����û������������Ƿ���
std::ostream & print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

std::istream & read(std::istream & is, Sales_data & item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}
#endif
