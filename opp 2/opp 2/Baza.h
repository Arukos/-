#pragma once

#include <iostream>
#include <string>
#include<vector>
#include <initializer_list>

using namespace std;

class Baza {
public:
	vector<vector<string>> arr;
public:
	Baza();
	~Baza();
	void show();
	void add();
	void clear(int nom);
};