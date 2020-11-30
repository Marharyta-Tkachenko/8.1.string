#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.1-2string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string c;
			string str = "SQqq";
			c = change(str);
			Assert::AreEqual(str[1], '*');
		}
	};
}
