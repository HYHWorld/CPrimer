#include<iostream>
//#define CLASS_VERSION
//#include"Sales_data.h"
#include"Screen.h"
#include"Sales_data.h"
using namespace std;
int main() {
	//��
	//		��Ļ���˼��������ݳ���ͷ�װ
	//		���ݳ���:һ�������ڽӿں�ʵ�ַ���ı�̼���
	//			�ӿ�:�����û�����ִ�еĲ���
	//			ʵ��:����������ݳ�Ա,����ӿ�ʵ�ֵĺ������Լ�����������ĸ���˽�к���
	//		��װ:ʵ������Ľӿں�ʵ�ֵķ���,���������ʵ��
	//		��Ҫʵ�����ݳ���ͷ�װ,��Ҫ���ȶ���һ��������������

	//���������������
	//���Sales_data��
	//		Ŀ��:��Sales_data֧����Sales_item����ȫһ���Ĳ�������
	//		Sales_data�Ľӿ�Ӧ�ð������²���:
	//			1.һ��isbn��Ա����,���ڷ��ض����ISBN���
	//			2.һ��combine��Ա����,���ڽ�һ��Sales_data����ӵ���һ��������
	//			3.һ����Ϊadd�ĺ���,ִ������Sales_data����ļӷ�
	//			4.һ��read����,�����ݴ�istream���뵽Sales_data������
	//			5.һ��print����,��Sales_data�����ֵ�����ostream
	
	////ʹ�øĽ���Sales_data��
	//Sales_data total;
	//if (read(cin, total)) {
	//	Sales_data trans;
	//	while (read(cin, trans)) {
	//		if (total.isbn() == trans.isbn) {
	//			total.combine(trans);
	//		}
	//		else {
	//			print(cout, total) << endl;
	//			total = trans;
	//		}
	//	}
	//	print(cout, total) << endl;
	//}
	//else {
	//	cerr << "No data?" << endl;
	//}



	//��ʽ��������ת��
	//		Ϊ�ඨ����ʽת������
	//		������캯��ֻ����һ��ʵ��,����ʵ���϶�����ת��Ϊ�������͵���ʽת������(ת�����캯��)
	//Sales_data sd = "hehe";	//explicit֮����Ч
	//		ֻ����һ����������ת��
	//		������ת������������Ч


	//�ۺ���(struct)
	//		1.���г�Ա����public
	//		2.û�ж����κι��캯��
	//		3.û�����ڳ�ʼֵ
	//		4.û�л���,Ҳû���麯��
	//ʹ����ʽ���б��ʼ�������

}