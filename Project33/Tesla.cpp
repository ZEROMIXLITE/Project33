#include "Tesla.h"

Tesla::Tesla() {
	name = "no name";
	age = 0;
	mark = 0;
	condition = 'n';
}

Tesla::Tesla(string name, int age, double mark, char condition) {
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->condition = condition;
}

string Tesla::getName() {
	return name;
}

void Tesla::setName(string initName) {
	this->name = name;
}

int Tesla::getAge() {
	return age;
}

void Tesla::setAge(int age) {
	if (age >= 14 && age <= 80) {
		this->age = age;
	}
}

double Tesla::getMark() {
	return mark;
}

void Tesla::setMark(double mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}
char Tesla::getcondition() {
	return condition;
}

void Tesla::setcondition(char condition) {
	if (condition == 'n' || condition == 'X') {
		this->condition = condition;
	}
}

string Tesla::getInfo() {
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; condition = " + (condition == 'n' ? "now" : "isn't now");
}