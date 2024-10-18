#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Nativetesting
{
	TEST_CLASS(Nativetesting)
	{
	public:
		
		TEST_METHOD(getPerimeter_Test)
		{
			int l = 10;
			int w = 11;
			int expectedresult = 42;
			int actualresult = getPerimeter(&l, &w);
			Assert::AreEqual(expectedresult, actualresult);
		}

		TEST_METHOD(getArea_Test)
		{

			int l = 10;
			int w = 10;
			int expectedresult = 100;
			int actualresult = getArea(&l, &w);
			Assert::AreEqual(expectedresult, actualresult);

		}
	};
}
