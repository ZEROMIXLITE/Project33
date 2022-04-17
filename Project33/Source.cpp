#include<ctime>
#include "Tesla.h"
#include "Factory.h"
#include "Manager.h"

void changeKost(Tesla st) {

	srand(time(NULL));
	st.setKost(rand() % 7 + 4);
}

int main() {

	Factory Factory("1");
	Manager manager1("Ilon Mask");

	Tesla st1("KiberTrack", 14, 9, 'n');
	

	Factory.add(st1);


	cout << Factory.getInfo() << endl;

	int countnow = manager1.getCountOfcondition(Factory);
	int countnowt = manager1.getCountOfconditionX(Factory);

	cout << "Tesla is now" << Factory.getName()
		<< " = " << countnow << endl;

	cout << "Tesla isn't now " << Factory.getName()
		<< " = " << countnowt << endl;


	return 0;
}
