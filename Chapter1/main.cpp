#include<iostream>
using std::cout;
using std::cerr;
using std::clog;
using std::endl;
using std::cin;

int  main() {
	//cout << "hehe" << endl;
	//cerr << "hh" << endl;
	//clog << "yy" << endl;
	
	/*
	�������
	int i;
	int j;
	cin >> i >> j;
	cout << i << "+" << j << "=" << i + j << endl;
	*/
	/*
	��ȡ��ȷ���������ݣ����
	int sum = 0;
	int temp = 0;
	while (cin >> temp) {
		sum += temp;
	}
	cout << sum << endl;
	*/

	/*
	ͳ��������ĳ���������ִ���
	int currVal = 0;
	int Val = 0;
	if (cin >> currVal) {
		int con = 1;
		while (cin >> Val) {
			if (currVal == Val) {
				con++;
			}
			else {
				cout << currVal << "����" << con << "��" << endl;
				con = 1;
				currVal = Val;
			}
		}
		cout << currVal << "����" << con << "��" << endl;
	}
	*/

	return 0;
}