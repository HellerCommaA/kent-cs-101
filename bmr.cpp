// Create a project titled Lab5_BMR with a single file titled bmr.cpp
// The program should calculate the person's Basal Metabolic Rate -
// the number of calories per day a person's body needs to function.
// Then, on the basis of calculated BMR, your program should output how many
// bagels a person can consume. A medium-size bagel contains 354 calories.
// The BMR formula is as follows:
// for women:
//   655 + (4.3 x weight in pounds) + (4.7 x height in inches) - (4.7 x age in years)
// for men:
//   66 + (6.3 x weight in pounds) + (12.9 x height in inches) - (6.8 x age in years)
// Depending on gender, BMR should be calculated by functions bmrWomen() and bmrMen() 
// that both accept three parameters: "weight in pounds", "height in inches" and "age in years" 
//and return the BMR. Note that the BMR has a fractional part
// The main function should prompt the user for her gender, weight, height and age;
// compute the BMR and the number of bagels that can be consumed per day; and then 
// output both the BMR and the number bagels.

// The number of bagels is: BMR divided by the number of calories in a bagel. Fractional number 
// of bagels can be dropped. The number of calories per bagel (354) should be put in a named constant.

// On the basis of the user's gender, main() function should decide whether to invoke bmrWomen() or
//  bmrMen(). The user should input her height in feet and inches. The main() function should compute 
// the total number of inches (one foot has 12 inches) and pass it to the bmr functions.

// Make sure to use the bmr function prototypes and put the function definitions below the main function definition.


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using std::cin; using std::cout; using std::endl;

const int CALORIES = 354;
// CONST For number of calories in a bagel

// prototypes
double bmrWomen(int weight, int height, int years);
double bmrMen(int weight, int height, int years);
int numBagels(double bmr);
int heightConverter(int feet, int inches);
char sexConverter(char sex);
int bmrWomenCalc();
int bmrMenCalc();

int main()
{
	cout << "Enter your sex (M or F)" << endl;
	char sex;
	cin >> sex;
	sex = sexConverter(sex);
	if (sex == 'm') {
		// do stuff for male BMR
		bmrMenCalc();
	} else if (sex == 'f') {
		// do stuff for female BMR
		bmrWomenCalc();
	} else {
		// unknown input
		cout << "Unknown entry. Exiting ..." << endl;
		return 1;
	}
	return 0;
}

double bmrWomen (int weight, int height, int years) {
	/* 
	calculates the BMR index for women
	:param int weight: weight in pounds
	:param int height: height in inches
	:param int years: years in ... years
	:returns double: calculated BMR
	*/
	return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * years);
}

double bmrMen (int weight, int height, int years) {
	/*
	calculates the BMR index for men
	:param int weight: weight in pounds
	:param int height: height in inches
	:param int years: years in ... years
	:returns double: calculated BMR
	*/
	return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * years);
}

int numBagels(double bmr) {
	/*
	calculates the number of bagels to eat per day
	:param double bmr: calculated BMR of either sex
	:returns int: returns num. of bagels to eat, rounded down
	*/
	return floor(bmr / CALORIES);
}

int heightConverter(int feet, int inches) {
	/*
	converts height and feet to inches
	:param int feet: height in feet
	:param int inches: height in inches
	:returns int: calculated height in inches
	*/
	return (feet * 12) + inches;
}

char sexConverter(char sex) {
	/*
	converts edge case upper or lower case inputs to 'm' or 'f'
	returns 'x' on failure
	:param char sex: user inputted sex
	:returns char: returns a 'standard' sex to expect
	:returns: returns 'x' on failed input
	*/
	if (sex == 'm' || sex == 'M') {
		return 'm';
	} else if (sex == 'f' || sex == 'F') {
		return 'f';
	} else {
		return 'x';
	}
}

int bmrMenCalc() {
	// does all BMR calcs for men
	int weight;
	int feet;
	int inches;
	int years;
	cout << "Enter your weight in pounds." << endl;
	cin >> weight;
	cout << "Enter your height in feet and inches." << endl;
	cin >> feet >> inches;
	cout << "Enter your age in years." << endl;
	cin >> years;
	int height;
	height = heightConverter(feet, inches);
	double bmr;
	bmr = bmrMen(weight, height, years);
	int bagels;
	bagels = numBagels(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << bagels << " bagels per day." << endl;
	return 0;
}

int bmrWomenCalc() {
	// does all BMR calcs for women
	int weight;
	int feet;
	int inches;
	int years;
	cout << "Enter your weight in pounds." << endl;
	cin >> weight;
	cout << "Enter your height in feet and inches." << endl;
	cin >> feet >> inches;
	cout << "Enter your age in years." << endl;
	cin >> years;
	int height;
	height = heightConverter(feet, inches);
	double bmr;
	bmr = bmrWomen(weight, height, years);
	int bagels;
	bagels = numBagels(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << bagels << " bagels per day." << endl;
	return 0;
}



