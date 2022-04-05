#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR 3.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int i = 1;
			Student s[i];

			s[0].spec = CS;
			s[0].physics = 4;
			s[0].math = 4;
			s[0].informatik = 4;
			double ExpValue = 4;
			double ActValue = avgGrade(s, 0);

			Assert::AreEqual(ExpValue, ActValue);
		}
	};
}

