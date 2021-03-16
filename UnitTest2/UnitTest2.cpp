#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/lab 1.3/Vector3D.h"
#include "../lab 1.3/lab 1.3/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector3D a, b, c;
			double scalar;

			a.Init(1, 2, 3);
			b.Init(1, 2, 3);
			c = c.Add(a, b);

			Assert::AreEqual(c.GetX(), 2.);
			Assert::AreEqual(c.GetY(), 4.);
			Assert::AreEqual(c.GetZ(), 6.);

			c = c.Subtruct(a, b);

			Assert::AreEqual(c.GetX(), 0.);
			Assert::AreEqual(c.GetY(), 0.);
			Assert::AreEqual(c.GetZ(), 0.);

			scalar = c.Scalar(a, b);

			Assert::AreEqual(scalar, 14.);
		}
	};
}

