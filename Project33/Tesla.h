#pragma once
#include "Header.h"

class Tesla {
private:
	string name;
	int age;
	double kost;
	char condition;

public:
	Tesla();
	Tesla(string name, int age, double kost, char condition);
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getKost();
	void setKost(double kost);
	char getcondition();
	void setcondition(char condition);

	string getInfo();
};

