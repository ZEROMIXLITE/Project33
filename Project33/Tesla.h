#pragma once
#include "Header.h"

class Tesla {
private:
	string name;
	int age;
	double mark;
	char condition;

public:
	Tesla();
	Tesla(string name, int age, double mark, char condition);
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getMark();
	void setMark(double mark);
	char getcondition();
	void setcondition(char condition);

	string getInfo();
};
