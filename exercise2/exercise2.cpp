// exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>;
#include <string>;
using namespace std;


int main()
{

	string first_name;
	string last_name;
	int age;
	int dog_age = age * 7;
	float confidence;
	cout << ("Pleaase enter your first_name \n");
	cin >> first_name;
	cout << ("Please enter your last_name \n");
	cin >> last_name;
	cout << ("Please enter your age \n");
	cout << ("Please enter your confidence level in programmers between 1-100 \n");

	cout << ("Hello" + first_name + last_name + "nice to meet you! You might be" + age + "in human years, but in dog years you are" + dog_age + ". \n");

	double confidence;
	if (confidence < .5);
	cout << ("I agrre, programmers cant be trusted! \n");
	if (confidence > .5);
	cout << ("Writing good code takes hard work! \n");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
