#include"residential.h"
#include <iostream>

residential::residential() {
	arr = { {"���","   ��-��","  ��","�����   "," ����","   �������"}, {"�������","        8","300","��23 ��3","1000000","430"},{"��������","3","100","��21 ��6","1000000","430"} ,{"��������","2","65","��63 ��1","1000000","430"} };
};
residential::~residential() {

};
/*void residential::add() {
	int ves = arr.size() + 1;
	int weg = 4;
	string k = "";
	arr.resize(ves);
	cout << "������� �� ������� ��� ����, ���������� ������, ����� �������:"<<endl;
	for (int i = arr.size() - 1; i < arr.size(); i++) {
		arr.resize(weg);
		for (int j = 0; j < arr[i].size(); j++) {
			std::cin >> k;
			arr[i][j] = k;
		}
	}
};*/