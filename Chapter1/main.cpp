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
	两数相加
	int i;
	int j;
	cin >> i >> j;
	cout << i << "+" << j << "=" << i + j << endl;
	*/
	/*
	读取不确定数量数据，求和
	int sum = 0;
	int temp = 0;
	while (cin >> temp) {
		sum += temp;
	}
	cout << sum << endl;
	*/

	/*
	统计输入中某数连续出现次数
	int currVal = 0;
	int Val = 0;
	if (cin >> currVal) {
		int con = 1;
		while (cin >> Val) {
			if (currVal == Val) {
				con++;
			}
			else {
				cout << currVal << "出现" << con << "次" << endl;
				con = 1;
				currVal = Val;
			}
		}
		cout << currVal << "出现" << con << "次" << endl;
	}
	*/

	return 0;
}