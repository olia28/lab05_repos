#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.01/lab05.01.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = f(1, 1, 1);
            Assert::AreEqual(t, 1.75636, 0.1);
        }
    };
}