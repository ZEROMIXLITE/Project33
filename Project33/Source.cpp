#include "Tesla.h"
#include "Factory.h"
#include "Manager.h"

int main() {

	Factory Factory("3");
	Manager manager1("Ilon Mask");

	Tesla st1("KiberTrack", 14, 9, 'n');
	Tesla st2("ModelX", 13, 8, 'X');
	Tesla st3("ModelS", 15, 4, 'X');

	Factory.add(st1);
	Factory.add(st2);
	Factory.add(st3);

	cout << Factory.getInfo() << endl;

	int countnow = manager1.getCountOfcondition(Factory);
	int countnowt = manager1.getCountOfconditionX(Factory);

	cout << "Tesla is now" << Factory.getName()
		<< " = " << countnow << endl;

	cout << "Tesla isn't now " << Factory.getName()
		<< " = " << countnowt << endl;


	return 0;
}
