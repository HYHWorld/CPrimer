#include "Account.h"

//���徲̬��Ա
//		�ȿ������ڲ�����Ҳ�������ⲿ����
//		�ⲿ���岻�ظ�static
//		��̬��Ա���ǹ��캯����ʼ����,����������ⲿ����ͳ�ʼ��ÿ����̬��Ա
//		��̬��Ա��������������������
double Account::interestRate = initRate();

void Account::rate(double newRate)
{
	interestRate = newRate;
}
