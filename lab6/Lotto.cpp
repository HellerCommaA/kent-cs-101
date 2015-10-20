#include <iostream>
#include <ctime>
#include "Lotto.h"

using std::cin; using std::cout; using std::endl;



	int entry(int guess){
		cout << endl;
		cout << "Enter your best GUESS! \n";
		cin >> guess;
		cout << guess << "\n";
		return guess;
	}

	void fill_up(int wins[10], const int size) {
		srand(time(nullptr));
		int random;
		random = rand() % 100;
		random = wins[0];
		for (int i = 0; i < 10; i ++ ) {
			wins[i] = rand() % 100;
		}

		for (int i = 0; i < 10; i++ ) {
			cout << wins[i] << " ";
		}
		cout << "\n";

	}

	int check(int wins[], const int size, int guess) {

		bool correct = true;
		int i = 0;

		while (correct && i < size)
		{
			if (wins[i] != guess)
				correct = false;
			i++;
		}
		if (correct)
			cout << "You WIN!!! \n";
		else
			cout << " You LOSE!!! \n";

		return 0;
		}

	void printout(int wins[10], const int size, int guess) {
		cout << wins[size] << endl;
	}
