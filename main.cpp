#include <iostream>
#include <string>
#include <conio.h>
#include "calculator.h"
using namespace std;

std::string left_value; // value to teh left  of the operant
std::string right_value; // value to the right of the operant

void shiftLeftValue(char keycode)
{
	if (keycode == '.')
	{
		if (left_value.find('.') == string::npos)
		{
			left_value = left_value + keycode;
		}
		
	}
	else
	{
		right_value = right_value + keycode;
	}

}

int main()
{
	bool working_on_right = false;

	char op;

	bool should_exit = false;

	do
	{
		char keycode = _getche(); // waiting for a single key input from the user

		if ((keycode >= '0' && keycode <= '9') || keycode == '.')
		{
			if (working_on_right)
			{
				shiftRightValue(keycode);
			}
			else
			{
				shiftLeftValue(keycode);
			}
		}
		else
		{
			switch (keycode)
			{
			case 'x':
			case 'X':
			{
				should_exit = true;

			}break;

			case 'i':
			case 'I':
			{
				calculator::invert();
				cout << calculator::currentValue() << endl;
			}break;

			case '+':

			case '-':

			case '*':

			case '/':

			case '^':
			{
				op = keycode;
				working_on_right = true;
			}break;

			case 13:
			{
				cout << endl;

				switch (op)
				{
				case '+':
				{
					calculator::add(stod(left_value), stod(right_value));

				}break;

				case '-':
				{
					calculator::subtract(stod(left_value), stod(right_value));
				}break;

				case'*':
				{
					calculator::multiply(stod(left_value), stod(right_value)); //changing from string to double 
				}break;

				case '/':
				{
					calculator::divide(stod(left_value), stod(right_value)); //changing from string to double 
				}break;

				case '^':
				{
					calculator::pow(stod(left_value), stod(right_value));
				}break;

				case 's': // If anyone inputs a lower case s, do the following function below.
				case 'S': // If anyone inputs an upper case s, do teh following function below.
				{
					calculator::memory_store; // Hey calculator, I need you pull the memory store function from the calculator.


				}break;

				case 'r':
				case 'R':
				{
					calculator::memory_recall; // Hey calculator, I need you pull teh memory recall function from the calculator.

				}break;

				case 'c':
				case 'C':

					calculator::memory_clear; // Hey calculator, I need you to pull the memory clear function from the calculator.
				}break;
			}
			}
		} while (should_exit = false);

		return 0;
	}
