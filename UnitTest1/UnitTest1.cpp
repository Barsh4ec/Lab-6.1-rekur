#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 3;
			int a[] = { 3, 5 };
			int s = 0;
			int size = 2;
			int i = 0;
			if (a[i] > 0 && a[i] % 3 == 0)
				s += a[i];
				actual = s;
				Assert::AreEqual(actual, expected);
			}
		};
	}
