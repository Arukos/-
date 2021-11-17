#include<iostream>
#include<vector>
#include<string>
#include "Baza.h"

using namespace std;

Baza::Baza() {
	
}
Baza::~Baza() {

}

void Baza::add() {
	int ves = this ->arr.size() + 1;
	int i = 0;
	int weg = arr[i].size();
	string k = "";
	arr.resize(ves);
	
	for (i = arr.size() - 1; i < arr.size(); i++) {
		arr[i].resize(weg);
		for (int j = 0; j < arr[i].size(); j++) {
			cin >> k;
			arr[i][j] = k;
		}
	}
};
void Baza::show() {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
}
void Baza::clear(int nom) {
	for (int i = nom; i  <= nom; i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			arr[i][j] = "";
		}
	}
	
}
