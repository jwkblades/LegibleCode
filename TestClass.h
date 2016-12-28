#ifndef __TEST_CLASS_H
#define __TEST_CLASS_H

#include "common.h"

class TestClass
{
public:
	TestClass(void) {}
	~TestClass(void) {}

	bool trySomething(IN int& input, OUT int& output) THROWS();
	bool trySomethingElse(INOUT int& value);
};

#endif
