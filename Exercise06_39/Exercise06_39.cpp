/**
* Class: CSCI2490 C++ Programming
* Instructor: Y. Daniel Liang
* Description: Receives binary input and converts it to an integer. Displays the integer
* Due: 08/24/2016
* @author Shaun C. Dobbs
* @version 1.0

* I pledge by honor that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.

Sign here: Shaun C. Dobbs
*/

#include "stdafx.h"
#include <cmath> 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int bin2Dec(const string& bin);
int intCharToDecimal(char ch);

int main() {
	cout << "Enter binary : ";
	string bin;
	cin >> bin;

	cout << "The decimal value for the binary " << bin << " is " << bin2Dec(bin) << endl;

	return 0;
}

//Use the formula to convert the input to hexadecimal 
int bin2Dec(const string& bin) {
	double sum = 0;
	double hexW = 0;
	int size = bin.size() - 1;

	for (unsigned i = 0; i < bin.size(); i++) {
		sum += (intCharToDecimal(bin[i]) - 48) * pow(2, (bin.size() - i) - 1);
	}
		hexW = sum;

		return hexW;
}

//convert the string to an integer that the formula can use
	int intCharToDecimal(char ch) {
		
		if (ch == 1)
			return 1;
		if (ch == 0)
			return 0;
		
	}
