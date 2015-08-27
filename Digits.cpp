//============================================================================
// Name        : Digits.cpp
// Author      : Alex Mack
// Date/Time   : 2/17/2013 @ 8:21 PM
// Version     :
// Copyright   : (c) Mack Dev Prod 2013
// Description : Calculates the sum of digits in a number in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	 int num, digit, sum = 0;


	 cout << "Enter a value: ";
	 cin>>num;

	 while(num != 0){

		  digit = num % 10;
		  num = num / 10;

		  sum += digit;
	 }

	  cout<<"Sum of digits: "<<sum<<endl;

 return 0;
}
