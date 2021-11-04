#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[3];
			Create(A, 3, 10, 10, 0);
			Assert::AreEqual(A[0], 10, 0);

		}
	};
}
