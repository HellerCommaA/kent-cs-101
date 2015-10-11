#include <iostream>
#include <cstdlib>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

void typeMenu();

int main () {
	typeMenu();
	int figure;
	cin >> figure;
	cout << "select size: ";
	int size;
	cin >> size;
	cout << "filled or hollow [f/h]: ";
	char fillType;
	cin >> fillType;
	cout << endl;
	if (figure == 1) {
		square(size, fillType);
	} else if (figure == 2) {
		blTriangle(size, fillType);
	} else if (figure == 3) {
		trTriangle(size, fillType);
	} else {
		cout << "unknown input" << endl;
		return 1;
	}
	return 0;
}


void typeMenu(){
	cout << "1. square" << endl;
	cout << "2. bottom left triangle" << endl;
	cout << "3. top right triangle" << endl;
	cout << "Select a figure: ";
}