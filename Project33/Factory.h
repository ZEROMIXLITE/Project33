#pragma once
#include "Tesla.h"

class Factory
{
private:
	string name;
	int size;
	Tesla* list;
public:
	Factory();
	Factory(string name);
	Factory(string name, Tesla* list, int size);
	~Factory();

	string getName();
	void setName(string name);
	int getSize();
	Tesla get(int index);
	void set(int index, Tesla tesla);
	void add(Tesla tesla);

	string getInfo();
};
