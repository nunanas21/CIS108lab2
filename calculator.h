#pragma once

namespace calculator
{
	double currentValue();

	double add(double left, double right);
	
	double subtract (double left, double right);

	double multiply (double left, double right);

	double divide(double left, double right);

	double pow(double left, double right);
	
	double invert();

	void memory_store(double);

	void memory_recall(double);

	double memory_clear; 



	
}
