#include "calculator.h"
#include <cmath>

namespace calculator

{
	double current_value = (0.0);
	void memory_store(double);
	double memoryStore;
	void memory_recall(double);
	double memoryRecall;
	double memory_clear;


	double currentValue()
	{
		return current_value;
	}


	double add(double left, double right)
	{
		current_value = left + right;
		return current_value;
	}

	double subract(double left, double right) //subtracting two numbers and returing the difference
	{
		current_value = left - right;
		return current_value;
	}

	double multiply(double left, double right) // multiplying two numbers and returning the product
	{
		current_value = left * right;
		return current_value;
	}

	double divide(double left, double right) // dividing two numbers and returning the quotiant
	{
		current_value = left / right;
		return current_value;
	}

	double pow(double left, double right)
	{
		current_value = left ^ right;
		return current_value;

	}

	void memory_store(double) //
	{
		memoryStore = currentValue;
	}

	void memory_recall(double) // recalling the value that was stored last. 
	{
		memoryRecall = memoryStore;

	}

	double memory_clear // clearing the screen to zero. 
	{
		memoryClear = 0;
	}
}

