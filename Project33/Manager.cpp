#include "Manager.h"


Manager::Manager(string name) {
	this->name = name;
}

double Manager::calculateAvgMark(Factory group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getMark();
	}

	avg /= group.getSize();

	return avg;
}

double Manager::calculateAvgAge(Factory group) {
	double avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(i).getAge();
	}

	avg /= group.getSize();

	return avg;
}

int Manager::getCountOfcondition(Factory group) {
	int count = 0;
	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(i).getcondition() == 'n') {
			count++;
		}
	}

	return count;
}

int Manager::getCountOfconditionX(Factory group) {
	int count = getCountOfconditionX(group);
	return group.getSize() - count;
}