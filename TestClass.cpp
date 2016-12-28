#include "TestClass.h"

bool TestClass::trySomething(IN int& input, OUT int& output)
{
	if (input < 0)
	{
		return false;
	}
	output = 2 * input;
	return true;
}

bool TestClass::trySomethingElse(INOUT int& value)
{
	if (value < 0)
	{
		return false;
	}
	value *= 2;
	return true;
}

