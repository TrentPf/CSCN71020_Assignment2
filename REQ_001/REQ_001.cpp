#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(GetPerimeterFunctionality)
		{
			//This is testing the getPerimeter function using length 5 and width 10
			int Result = 0;

			int length = 5;
			int* ptrlength = &length;

			int width = 10;
			int* ptrwidth = &width;


			Result = getPerimeter(ptrlength, ptrwidth);

			Assert::AreEqual(30, Result);

		}

		TEST_METHOD(GetAreaFunctionality)
		{
			//This is testing the getArea function using length 5 and width 10
			int Result = 0;

			int length = 5;
			int* ptrlength = &length;

			int width = 10;
			int* ptrwidth = &width;


			Result = getArea(ptrlength, ptrwidth);

			Assert::AreEqual(50, Result);
		}


	};
}