// exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std; 
int main()
{
	int age;
	std::cout <<"What is your age?";
	std::cin >> age;

	int old_you = (age + 10);
	std::cout << "In 10 years you will be " << old_you << "\n";

	float farenheit, celcius;

	cout << "Enter the temperature in farenheit :"; 
	cin >> farenheit; 
	celcius = (farenheit * 9.0) / 5.0 + 32;
	cout << "The temperature in farenheit :" << farenheit << "\n";
	cout << "The temperature in celcius : " << celcius << "\n";
	
	return 0; 



	

		

	

	  

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item >> create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
