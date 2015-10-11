#include <iostream>
#include <cstdlib>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

void square(int size, char fillType) {
	int rows;
	int cols;
	rows = size;
	cols = size;

	for (int r = 0; r < rows; r++) {
		// for each row in the square
		for (int c = 0; c < cols; c++) {
			// for each colum in the row
			if (fillType == 'h') {
				// if we're in a hollow square
				if (r == 0 || r == rows - 1) {
					// if we're on the top or bottom line
					cout << "* ";
				} else {
					if (c == 0 || c == cols - 1) {
						// we're in empty space
						cout << "* ";
					} else {
						cout << "  ";
					}
				}
			} else {
				// we are not in a hollow square
				cout << "* ";
			}
		}
		cout << endl;
	}

}

void blTriangle(int size, char fillType) {
	cout << "bl Triangle" << endl;
}

void trTriangle(int size, char fillType) {
	cout << "tr triangle" << endl;
}