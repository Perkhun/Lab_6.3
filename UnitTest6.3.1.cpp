#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[3];
			Create(A, 3, 10, 10);
			Assert::AreEqual(A[0], 10);

		}
	};
}
