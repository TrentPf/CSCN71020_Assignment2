#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

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

		TEST_METHOD(SetLengthFunctionality)
		{
			//This is testing the setLength function using a valid length 5

			int temp = -1;
			int length = 5;
			int* ptrlength = &temp;

			setLength(length, ptrlength);

			Assert::AreEqual(length, *ptrlength);
		}

		TEST_METHOD(SetLengthTo100)
		{
			//This is testing the setLength function to see if a value is not set when the value is 100

			int temp = -1;
			int length = 100;
			int* ptrlength = &temp;

			setLength(length, ptrlength);

			Assert::AreNotEqual(length, *ptrlength);
		}

		TEST_METHOD(SetLengthTo0)
		{
			//This is testing the setLength function to see if a value is not set when the value is 0

			int temp = -1;
			int length = 0;
			int* ptrlength = &temp;

			setLength(length, ptrlength);

			Assert::AreNotEqual(length, *ptrlength);
		}

		TEST_METHOD(SetWidthFunctionality)
		{
			//This is testing the setWidth function using a valid width 10

			int temp = -1;
			int width = 10;
			int* ptrwidth = &temp;

			setWidth(width, ptrwidth);

			Assert::AreEqual(width, *ptrwidth);
		}

		TEST_METHOD(SetWidthTo100)
		{
			//This is testing the setWidth function to see if a value is not set when the value is 100

			int temp = -1;
			int width = 100;
			int* ptrwidth = &temp;

			setWidth(width, ptrwidth);

			Assert::AreNotEqual(width, *ptrwidth);
		}


		TEST_METHOD(SetWidthTo0)
		{
			// This is testing the setWidth function to see if a value is not set when the value is 0

			int temp = -1;
			int width = 0;
			int* ptrwidth = &temp;

			setWidth(width, ptrwidth);

			Assert::AreNotEqual(width, *ptrwidth);
		}
		
	};
}