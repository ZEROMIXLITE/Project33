#pragma once
#include "Tesla.h"
#include "Factory.h"

class Manager
{

private:
	string name;
public:
	Manager(string name);

	double calculateAvgMark(Factory group);
	double calculateAvgAge(Factory group);
	int getCountOfcondition(Factory group);
	int getCountOfconditionX(Factory group);

};

