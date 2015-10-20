// the program attempts to sort three integers
// in increasing order, it is incomplete
// Jeremy Rininger
// 10/12/2015

#include <iostream>

using std::cin; using std::cout; using std::endl;

void getnumbers(int&, int&, int&);
void swap(int&, int&, int&);
void showResults(int, int, int);

int main() {

	int a, b, c;

	getnumbers(a, b, c);
	swap(a, b, c);
	showResults(a, b, c);
}

// inputs the numbers
void getnumbers(int& a, int& b, int& c) {
	cout << "Enter three numbers. \n";
	cin >> a >> b >> c;
}

// orders one, two and three in increasing order
void swap(int& a, int& b, int& c) {
	int tmp;
	tmp = 0;
	do {
		if (a < b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		if (b < c) {
			tmp = b;
			b = c;
			c = tmp;
		}
	} while ( a > b > c );
}


// outputs the sorted numbers in increasing order
void showResults(int a, int b, int c) {
	cout << "The sorted numbers are: ";
	cout << a << " " << b << " " << c << endl;
}