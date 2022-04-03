#pragma once
#include<iostream>

using namespace std;

class Tesla {
private:
	string model;
	string color;
	int capacity;
	int speed;


public:
	Tesla();
	Tesla(string model, string color, int capacity, int speed);
	string getInfo();
};




