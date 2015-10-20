#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Lotto.h"

using std::cin; using std::cout; using std::endl;

int main()
{
	const int size = 10;
	int wins[size];	
	int guess;
	
	
	
	
	cout << "What is your favorite number? \n";
	cin >> guess;

	fill_up(wins, size);

	guess = entry(guess);
	cout << "GUESS RETURNED" << "\n";
	cout << guess << "\n";
	check(wins, size, guess);

	printout(wins, size, guess);


}