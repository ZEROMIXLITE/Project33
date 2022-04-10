#include "Factory.h"

Factory::Factory() {
	name = "no group name";
	size = 0;
	list = NULL;
}

Factory::Factory(string name) {
	this->name = name;
	size = 0;
	list = NULL;
}

Factory::Factory(string name, Tesla* list, int size) {
	this->name = name;
	this->size = size;
	this->list = list;
}

Factory::~Factory() {
	if (list != NULL) {
		delete[] list;
	}
}

string Factory::getName() {
	return name;
}

void Factory::setName(string name) {
	this->name = name;
}

int Factory::getSize() {
	return size;
}

Tesla Factory::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Tesla("", 0, 0, ' ');
	}
	else {
		return list[index];
	}
}

void Factory::set(int index, Tesla tesla) {
	if (list != NULL && index >= 0 && index < size) {
		list[index] = tesla;
	}
}

void Factory::add(Tesla tesla) {
	if (list == NULL) {
		list = new Tesla[1];
		size = 1;
		list[0] = tesla;
	}
	else {
		Tesla* temp = new Tesla[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = tesla;
		size++;
		delete[] list;
		list = temp;
	}
}

string Factory::getInfo() {
	if (list == NULL) {
		return "Factory " + name + " is empty.";
	}
	else {
		string msg = "Tesla of Factory " + name + ":\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].getInfo() + "\n";
		}

		return msg;
	}
}