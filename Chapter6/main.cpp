#include<iostream>
using namespace std;
int main() {
	//����

	//��������
	//		��д����
	//		���ú���
	//			��������:main
	//			���ú���ʱ���������ж�
	//		�������β�ʵ��:û�й涨ʵ�ε���ֵ˳��
	//		�������β��б�:�β��б��ö��ŷָ�
	//		������������:����ֵ����Ϊ����,������ָ��
	
	//�ֲ�����
	//		������
	//		��������
	//�ֲ���������ȫ�ֱ���,�������������ڶ���ķ�ʽ
	//
	//�Զ�����:ֻ�����ڿ�ִ���ڼ�Ķ���
	//�ֲ���̬����:��ֲ��������������ڹᴩ�������ü�֮���ʱ��
	//		����ֲ���̬����û����ʽ�ĳ�ʼֵ,����ִ��ֵ��ʼ��,�������͵ľֲ���̬�����ĳ�ʼ��Ϊ0
	
	//��������
	//		������ʹ��֮ǰ����
	//		�����������
	//		����ֻ������
	//		Ҳ��Ϊ����ԭ��
	//��ͷ�ļ������Ӻ�������
	
	//����ʽ����
	//		��������Ӷ��ļ�

	//��������
	//		�βε����;������βκ�ʵ�ν����ķ�ʽ
	//		���β�����������ʱ,����˵����Ӧ��ʵ�α����ô��ݻ��ߺ��������õ���
	//		��ʵ�ε�ֵ���������β�ʱ,�βκ�ʵ��ʱ�����໥�����Ķ���,����˵������ʵ�α�ֵ���ݻ��ߺ�������ֵ����
	
	//��ֵ����
	//		���������ͱ����ĸ���ʱ,����Ӱ��ԭֵ
	//ָ���β�
	//		ͨ��ָ������޸�ԭֵ����
	
	//�����ò���
	//		ͨ�������β�,���������ı�һ������ʵ�ε�ֵ
	//
	//���ñ��⿽��
	//		������������͵Ķ����������Ч�ʵ�,��ĳ�����Ͳ�֧�ֿ�������ʱ,ʹ��const���÷���
	//ʹ�������βη��ض�����Ϣ

	//const�βκ�ʵ��
	//		���Զ���const,ע�⺯����������
	//
	//ָ��������β���const
	//		�����÷ǳ�����ʼ���ײ�const����,����������
	//		��ͨ���ñ�����ͬ���͵Ķ����ʼ��
	//����ʹ�ó�������

	//�����β�
	//		��������:��������������,ʹ������ʱ,�Ὣ��ת��Ϊָ��
	//		���ݵ��������ָ��
	//		���԰��β�д�������������ʽ
	//
	//		��Ϊ����ʱָ�����ʽ���ݸ�������,����һ��ʼ��������֪������ȷ�еĳߴ�,��������ָ��ͨ�������ֳ��õļ���
	//		1.ʹ�ñ��ָ�����鳤��
	//		2.ʹ�ñ�׼��淶:����Ԫ�غ�β��Ԫ�ص�ָ��
	//		3.��ʽ����һ�������С���β�
	//
	//�����βκ�const:������Ҫ������Ԫ��ִ��д����ʱ,�����β�Ӧ��Ϊconst
	//���������β�:������������������������
	//���ݶ�ά����
	//		���ݶ�ά������׵�ַ

	//main����������ѡ��
	//		ͨ��main������ȡ
	
	//���пɱ�����ĺ���
	//		1.����һ����Ϊinitializer_list�ı�׼������
	//		2.���ʵ�����Ͳ�ͬ,���Ա�дһ�����⺯��,Ҳ���ǿɱ����ģ��
	//		3.ʡ�Է��β�
	//
	//initializer_list�β�
	//		Ӧ��:ʵ������δ֪����ȫ��ʵ��������ͬ
	//		1.��һ��ģ������
	//		2.Ԫ����Զ�ǳ���
	//		3.��initializer_list�β��д���һ��ֵ����,��������з���һ�Ի�������
	//
	//ʡ�Է��β� 
	//		ʹ������Ϊvarargs��c��׼�⹦��

	//�������ͺ�return���:����ֵ���ύִ��Ȩ
	//
	//�޷���ֵ����:void
	//		������ʽ������return
	//		�������ǰ�˳�,����ʹ��return
	//
	//�з���ֵ����
	//		���뷵��һ��ֵ
	//		ȷ����·���з���ֵ
	//
	//ֵ����α����ص�
	//		����ֵ���ڳ�ʼ�����õ��һ����ʱ��,����ʱ�����Ǻ������ý��
	//		1.ֵ����:��ʱ���󸱱�
	//		2.���÷���:���Ǹ���,���Ƕ�����
	//
	//��Ҫ���ؾֲ����������
	//		������ɺ�,����ռ�õĴ洢�ռ�Ҳ��֮���ͷ�
	//		ͬ���ֲ������ָ��Ҳ����
	//
	//���������͵ĺ����͵��������:����������
	//���÷�����ֵ:����Ϊ�ǳ������õĽ����ֵ
	//�б���ʼ������ֵ:�����û����Ű�Χֵ���б�
	//main��������ֵ
	//		������ƴﵽ��main�����Ľ�β������û��return,����ʽ����һ��return 0;
	//		����ֵ������״ָ̬ʾ��
	//�ݹ�:
	//		��������������,������ֱ�ӵĻ��Ǽ�ӵĶ���Ϊ�ݹ�
	//		��Ҫ�еݹ���ֹ����

	//��������ָ��
	//		using arrT = int[10];
	//		arrT* func(int i);
	//����һ����������ָ��ĺ���
	//		Type (*func(int i))[10];
	//ʹ��β�÷���ֵ
	//		auto func(int i) -> int(*)[10];
	//ʹ��decltype
	//		���֪���������ص�ָ�뽫ָ���ĸ�����,ʹ����
	//		int odd[] = {1,3,5,7,9};
	//		int even[] = {0,2,4,6,8};
	//		decltype(odd) *arrPtr(int i){
	//			return (i%2)? &add : &even;
	//		}
	
	//��������
	//		����������ͬ���ǲ����б���ͬ
	//�������غ���
	//		����������ʵ������ȷ��Ӧ�õ����ĸ�����
	//		Ӧ�����β��������β�������������ͬ
	//		����������ֵ��ͬ��������ͬ�ĺ���
	//�ж������βε������Ƿ�����
	//���غ�const�β�:
	//		���Ӷ���const,�޷�������const��Ϊ��������
	//			Record lookup(phone);
	//			Record lookup(const phone);
	//			Record lookup(phone*);
	//			Record lookup(phone*const);
	//		�����ײ�const
	//			Record lookup(phone&);
	//			Record lookup(const phone&);
	//			Record lookup(phone*);
	//			Record lookup(const phone*);
	//
	//const_cast������
	//		������ֵ��ԭ����const�汾תΪ��Ӧ�ķ�const�汾
	//�������صĺ���
	//		����ƥ��ָһ������,����������аѺ���������һ�����غ����е�ĳ����������,Ҳ�к���ȷ��
	//		1.�ҵ����ƥ��
	//		2.�Ҳ���ƥ��,������ƥ��
	//		3.�ҵ�����һ������ƥ��,���������Ե���
	
	//������������
	//		�ֲ����������������ⲿ��������
	//		�ֲ��������������ⲿ������

	//������;���Ե�����
	//		Ĭ��ʵ��
	//		��������
	//		constexpr����
	//
	//Ĭ��ʵ��
	//		ע��:һ��ĳ���βα�������Ĭ��ֵ,������������βζ�������Ĭ��ֵ
	//
	//ʹ��Ĭ��ʵ�ε��ú���
	//		����ʡ��β��ʵ��
	//
	//Ĭ��ʵ������
	//		ͨ������ͷ�ļ���,ֻ����һ��
	//		ֻ��Ϊ֮ǰ��Щû��Ĭ��ֵ���β�����Ĭ��ʵ��
	//
	//Ĭ��ʵ�γ�ʼֵ
	//		�ֲ�����������ΪĬ��ʵ��
	//		ֻҪ����ʽ������ת�����β����������,�ñ���ʽ������ΪĬ��ʵ��
	
	//����������constexpr����
	//		���⺯�����õĿ���
	//		������ʹ������
	//		����ǰ����inline�ؼ���ʹ���Ϊ����
	//
	//constexpr����
	//		�����ڳ�������ʽ�ĺ���
	//		1.�������ͼ������βε����Ͷ���������ֵ����
	//		2.�����б���ֻ��һ��return
	//		����ʽ��ָ��Ϊ��������
	//		��������б��ǳ���,����ֵ����Ҳ�ǳ���
	//		����������constexpr��������ͷ�ļ���
	
	//���԰���
	//		������������Դ���,����ֻ�ڵ���ʱʹ��,׼������ʱ���ε��Դ���,ʹ�õ�Ԥ������������
	//		1.assert:ͷ�ļ�cassert
	//			Ԥ������,��Ԥ��������,��������
	//				assert(expr);
	//			�ж�expr�����,���˳�
	//			�����ڼ�鲻�ܷ���������
	//		2.NDEBUG
	//			������һ����ΪNDEBUG��Ԥ��������״̬
	//			���������NDEBUG��assertʲô������
	//			ʹ��#define����NDEBUG
	//			��#ifndef��#endif�����ж�
	
	//����ƥ��
	//		1.ȷ����ѡ�����Ϳ��к���
	//			ѡ�����ε��ö�Ӧ�����غ�����
	//			���챾�ε����ṩ��ʵ��,Ȼ��Ӻ�ѡ������ѡ���ܱ�����ʵ�ε��õĺ���
	//		2.Ѱ�����ƥ��
	//			�ӿ��к�����ѡ���뱾�ε�����ƥ��ĺ���,����Խ�ӽ�ƥ��Խ��
	//
	//���ж���βε�ƥ��
	//		1.ÿ��ʵ�ε�ƥ�䶼�������������к�����Ҫ��ƥ��
	//		2.������һ������ƥ�������������к����ṩ��ƥ��
	
	//ʵ������ת��
	//		ȷ�����ƥ��
	//		1.��׼ƥ��
	//			ʵ���β�������ͬ
	//			ʵ�δ��������ͻ��ߺ�������ת��Ϊ��Ӧ��ָ������
	//			��ʵ�����Ӷ���const����ɾ��const
	//		2.ͨ��constת��ʵ�ֵ�ƥ��
	//		3.ͨ����������ʵ�ֵ�ƥ��
	//			ע�������
	//		4.ͨ����������ת����ָ��ת��ʵ�ֵ�ƥ��
	//		5.ͨ��������ת��ʵ�ֵ�ƥ��
	//
	//����ƥ���constʵ��:�ó���������Ϊ��������
	
	//����ָ��
	//		����ָ��ָ����Ǻ���,���������ķ���ֵ���ͺ��β����͹�ͬ����
	//			bool (*pf)(const string &,const string &);
	//
	//ʹ�ú���ָ��
	//		bool b1 = pf("","");
	//		bool b2 = (*pf)("","");
	//
	//���غ�����ָ��:ע������ƥ��
	//
	//����ָ���β�
	//		�βο����Ǻ���ָ��
	//		ʹ��typedef�����Լ�������
	//		decltype���غ�������,��Ҫ����*��Ϊ����ָ��
	//
	//����ָ������ָ��
	//		���ܷ��غ���,���ܷ��غ���ָ��
	//			using PF = int(*)(int*,int);
	//			PF f1(int);
	//			auto fi(int) ->int(*)(int*,int);
	//
	//auto��decltype���ں���ָ������
	//		�����ȷ֪�����غ������ĸ�,ʹ��decltype����д
}