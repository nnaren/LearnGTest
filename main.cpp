#include <iostream>
#include <gtest/gtest.h>

int Foo(int a, int b)

{

    if (a == 0 || b == 0)

    {

        throw "don't do that";

    }

    int c = a % b;

    if (c == 0)

        return b;

    return Foo(b, c);

}



TEST(FooTest, HandleNoneZeroInput)
{
    EXPECT_EQ(2, Foo(4, 10));
    EXPECT_EQ(6, Foo(30, 18));
    EXPECT_EQ(3, 1+2) <<  "ok?";
}

//template <typename T> class FooType {
//public:
//    void Bar() { testing::StaticAssertTypeEq<int, T>(); }
//};
//class FooCalcTest:public testing::Test
//{
//protected:
//    virtual void SetUp()
//    {
//        m_foo.Init();
//    }
//    virtual void TearDown()
//    {
//        m_foo.Finalize();
//    }
//
//    FooCalc m_foo;
//};
//
//TEST_F(FooCalcTest, HandleNoneZeroInput)
//{
//    EXPECT_EQ(4, m_foo.Calc(12, 16));
//}
//
//TEST_F(FooCalcTest, HandleNoneZeroInput_Error)
//{
//    EXPECT_EQ(5, m_foo.Calc(12, 16));
//}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}