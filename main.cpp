#include "RAIIMutex.h"
#include "TestClass.h"
#include "common.h"

#include <iostream>
using namespace std;

int main(void)
{
	TestClass test;

	int value1 = 2;
	int value2 = 42;

	/*
	 * NOTE: Yes, I understand that we don't need to lock these variables. It is
	 *       for reference use only (after all there's only a single thread in
	 *       this application).
	 */
	{
		RAIIMutex value1Lock(&value1);
		RAIIMutex value2Lock(&value2);
		test.trySomething(value1, value2);
		cout << LVAL(value1) << " " << LVAL(value2) << endl;
	}

	{
		RAIIMutex value1Lock(&value1);
		RAIIMutex value2Lock(&value2);
		test.trySomethingElse(value2);
		cout << LVAL(value1) << " " << LVAL(value2) << endl;
	}
	return 0;
}
