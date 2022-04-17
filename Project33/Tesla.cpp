#include "Tesla.h"

Tesla::Tesla() {
	name = "no name";
	age = 0;
	kost = 0;
	condition = 'n';
}

Tesla::Tesla(string name, int age, double kost, char condition) {
	this->name = name;
	this->age = age;
	this->kost = kost;
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

double Tesla::getKost() {
	return kost;
}

void Tesla::setKost(double kost) {
	if (kost >= 0 && kost <= 10) {
		this->kost = kost;
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
		+ "; kost  = " + to_string(kost) + "sousen dollars"
		+ "; condition = " + (condition == 'n' ? "now" : "isn't now");
}