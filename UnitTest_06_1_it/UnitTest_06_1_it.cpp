#include "pch.h"
#include "CppUnitTest.h"
#include "../pr_06_1_i/pr_06_1_i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestIterative
{
	TEST_CLASS(UnitTestIterative)
	{
	public:

		TEST_METHOD(TestSumOfElements)
		{
			int testArray[] = { -2, -3, -4, 5, 6, 7 };
			int result = SumOfElements(testArray, 6);
			Assert::AreEqual(-6, result);
		}

		TEST_METHOD(TestCountOfElements)
		{
			int testArray[] = { -2, -3, -4, 5, 6, 7 };
			int result = CountOfElements(testArray, 6);
			Assert::AreEqual(2, result);
		}

		TEST_METHOD(TestReplaceWithZeros)
		{
			int testArray[] = { 0, -2, -4, -6 };
			ReplaceWithZeros(testArray, 4);

			int expectedArray[] = { 0, 0, 0, 0 };
			Assert::IsTrue(memcmp(testArray, expectedArray, sizeof(testArray)) == 0);
		}
	};
}
