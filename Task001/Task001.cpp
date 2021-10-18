#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C"
{
#include "main.h"
}

namespace Task001
{
	TEST_CLASS(Task001)
	{
	public:
		
		TEST_METHOD(get_Perimeter) //Unit Test for getPerimeter
		{
			int x = 3;
			int y = 3;
			int result;

			result = getPerimeter(&x, &y);
			Assert::AreEqual(12, result);
		}
		
		TEST_METHOD(get_Area) //Unit Test for getArea
		{
			int a = 5;
			int b = 10;
			int result;

			result = getArea(&a, &b);
			Assert::AreEqual(50, result);
		}

		TEST_METHOD(set_Length1) //Unit Test for setLength (outside lower limit: 0)
		{
			int n = 0;
			int m;
			setLength(n, &m);
			Assert::AreNotEqual(n, m);
		}

		TEST_METHOD(set_Width1) //Unit Test for setWidth (outside lower limit: 0)
		{
			int c = 0;
			int d;
			setWidth(c, &d);
			Assert::AreNotEqual(c, d);
		}

		TEST_METHOD(set_Length2) //Unit Test for setLength (inside lower and upper bound)
		{
			int n = 10;
			int m;
			setLength(n, &m);
			Assert::AreEqual(n, m);
		}

		TEST_METHOD(set_Width2) //Unit Test for setWidth (inside lower and upper bound)
		{
			int c = 10;
			int d;
			setWidth(c, &d);
			Assert::AreEqual(c, d);
		}

		TEST_METHOD(set_Length3) //Unit Test for setLength (outside upper limit: 100)
		{
			int n = 100;
			int m;
			setLength(n, &m);
			Assert::AreNotEqual(n, m);
		}

		TEST_METHOD(set_Width3) //Unit Test for setWidth (outside upper limit: 100)
		{
			int c = 100;
			int d;
			setWidth(c, &d);
			Assert::AreNotEqual(c, d);
		}
	};
}
