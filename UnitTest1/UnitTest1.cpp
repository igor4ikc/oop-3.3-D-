#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3(D)/Time.h"
#include "../3.3(D)/Time.cpp"
#include "../3.3(D)/Triad.h"
#include "../3.3(D)/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			++a;
			Assert::AreEqual(a.getF(), 2);
		}
	};
}
