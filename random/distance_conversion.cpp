#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define 	INCHES 			1
#define 	FEET			2
#define 	METERS			3
#define 	CENTIMETERES	4 

double getValue(string input) {
	string value;

	int i = 0;
	for (i = 0; input[i] != '\0' && (isdigit(input[i]) || input[i] == '.') ;i++) {
		value[i] = input[i];
	}

	value[i] = '\0';

	return stod(value);
}

string getUnits(string input) {
	string units;
	int i = 0;
	for (i = 0; input[i] != '\0' && (isdigit(input[i]) || input[i] == '.' || input[i] == ' ') ;i++) {
	}

	units = input.substr (i, input.length());
	
	return units;
}

int getUnitType(string input) {
	if ((0 == input.compare("m") || (0 == input.compare("meters")))) {
		return METERS;
	}
	if ((0 == input.compare("ft") || (0 == input.compare("feet")))) {
		return FEET;
	}
	if ((0 == input.compare("in") || (0 == input.compare("inches")))) {
		return INCHES;
	}
	if ((0 == input.compare("cm") || (0 == input.compare("centimeteres")))) {
		return CENTIMETERES;
	}
	return 0;
}

void convert(string input, string conversionUnit) {
	double value = getValue(input);
	string units = getUnits(input);

	cout << "value: " << value << endl;
	cout << "units: " << units << endl;

	int inputUnit = getUnitType(units);
	int OutputUnit = getUnitType(conversionUnit);

	if(inputUnit == OutputUnit) {
		// no conversion as same units
		cout << "Result: " << input << endl;
		return;
	}

	if(inputUnit == INCHES && OutputUnit == FEET) {
		// 12 inches = 1 foot
		cout << "Result: " << (value / 12) << " ft" << endl;
		return;
	}

	if(inputUnit == FEET && OutputUnit == INCHES) {
		// 12 inches = 1 foot
		cout << "Result: " << (value * 12) << " in" << endl;
		return;
	}

	if(inputUnit == INCHES && OutputUnit == METERS) {
		// 1 inch = 0.0254 m 
		cout << "Result: " << (value * 0.0254) << " m" << endl;
		return;
	}

	if(inputUnit == METERS && OutputUnit == INCHES) {
		// 1 meter = 39.3701 in
		cout << "Result: " << (value * 39.3701) << " in" << endl;
		return;
	}

	if(inputUnit == INCHES && OutputUnit == CENTIMETERES) {
		// 1 inch = 2.54 cm
		cout << "Result: " << (value * 2.54) << " cm" << endl;
		return;
	}	
	
	if(inputUnit == CENTIMETERES && OutputUnit == INCHES) {
		// 1 cm = 0.393701 in 
		cout << "Result: " << (value * 0.393701) << " in" << endl;
		return;
	}

	if(inputUnit == FEET && OutputUnit == METERS) {
		// 1 foot = 0.3048 m
		cout << "Result: " << (value * 0.3048) << " m" << endl;
		return;
	}

	if(inputUnit == METERS && OutputUnit == FEET) {
		// 1 m = 3.28084 ft
		cout << "Result: " << (value * 3.28084) << " ft" << endl;
		return;
	}

	if(inputUnit == FEET && OutputUnit == CENTIMETERES) {
		// 1 ft = 30.48 cm
		cout << "Result: " << (value * 30.48) << " cm" << endl;
		return;
	}

	if(inputUnit == CENTIMETERES && OutputUnit == FEET) {
		// 1 cm = 0.0328084 ft
		cout << "Result: " << (value * 0.0328084) << " ft" << endl;
		return;
	}

	if(inputUnit == METERS && OutputUnit == CENTIMETERES) {
		// 1 m = 100 cm
		cout << "Result: " << (value * 100) << " cm" << endl;
		return;
	}

	if(inputUnit == CENTIMETERES && OutputUnit == METERS) {
		// 1 cm = 0.01 m
		cout << "Result: " << (value * 0.01) << " m" << endl;
		return;
	}
	return;
}

int main() {
	string input;
	string conversionUnit;
	
	cout << "Enter distance with units: ";
	getline(std::cin, input);

	cout << endl << "What do you want to convert this to ? ";
	cin >> conversionUnit;

	convert(input, conversionUnit);

	return 0;
}