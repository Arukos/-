#include"residential.h"
#include <iostream>

residential::residential() {
	arr = { {"Тип","   кв-ры","  ЖП","Адрес   "," Цена","   Площадь"}, {"Частный","        8","300","Ул23 кв3","1000000","430"},{"Квартира","3","100","Ул21 кв6","1000000","430"} ,{"Квартира","2","65","Ул63 кв1","1000000","430"} };
};
residential::~residential() {

};
/*void residential::add() {
	int ves = arr.size() + 1;
	int weg = 4;
	string k = "";
	arr.resize(ves);
	cout << "Введите по очереди тип дома, количество комнат, жилая площадь:"<<endl;
	for (int i = arr.size() - 1; i < arr.size(); i++) {
		arr.resize(weg);
		for (int j = 0; j < arr[i].size(); j++) {
			std::cin >> k;
			arr[i][j] = k;
		}
	}
};*/