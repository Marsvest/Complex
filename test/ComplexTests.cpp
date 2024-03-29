#include "gtest/gtest.h"
#include "complex_class.h"

// Get/Set real part
// Get/Set imaginary part
TEST(ComplexTest, ConstructorAndAccessors) {
Complex c(2.0f, 3.0f);
EXPECT_FLOAT_EQ(c.get_real_part(), 2.0f);
EXPECT_FLOAT_EQ(c.get_imaginary_part(), 3.0f);
}

// Addition
TEST(ComplexTest, Addition) {
Complex a(2.0f, 3.0f);
Complex b(4.0f, -2.0f);
Complex result = a + b;
EXPECT_FLOAT_EQ(result.get_real_part(), 6.0f);
EXPECT_FLOAT_EQ(result.get_imaginary_part(), 1.0f);
}

// Subtraction
TEST(ComplexTest, Subtraction) {
Complex a(2.0f, 3.0f);
Complex b(4.0f, -2.0f);
Complex result = a - b;
EXPECT_FLOAT_EQ(result.get_real_part(), -2.0f);
EXPECT_FLOAT_EQ(result.get_imaginary_part(), 5.0f);
}

// Multiplication
TEST(ComplexTest, Multiplication) {
Complex a(2.0f, 3.0f);
Complex b(4.0f, -2.0f);
Complex result = a * b;
EXPECT_FLOAT_EQ(result.get_real_part(), 14.0f);
EXPECT_FLOAT_EQ(result.get_imaginary_part(), 8.0f);
}

// Division
TEST(ComplexTest, Division) {
Complex a(2.0, 3.0);
Complex b(4.0, -2.0);
Complex result = a / b;
EXPECT_NEAR(result.get_real_part(), 0.2, 0.1);
EXPECT_NEAR(result.get_imaginary_part(), 1.4, 1);
}

// Comparison of 2 numbers
TEST(ComplexTest, ComparisonOperators) {
Complex c1(3.0, 4.0);
Complex c2(5.0, 12.0);
Complex c3(3.0, 4.0);

EXPECT_TRUE(c1 < c2);
EXPECT_FALSE(c1 > c2);
EXPECT_TRUE(c1 == c3);
EXPECT_TRUE(c1 != c2);
}

// Exponentiation
TEST(ComplexTest, Exponentiation){
Complex a(2.0f, 3.0f);

Complex powResult = a ^ 3;

EXPECT_FLOAT_EQ(powResult.get_real_part(), -46.0);
EXPECT_FLOAT_EQ(powResult.get_imaginary_part(), 9.0);
}

// Module
TEST(ComplexNumberTest, Magnitude) {
Complex a(2.0f, 3.0f);
Complex b(4.0f, -2.0f);

EXPECT_NEAR(a.get_length(), 3.605, 0.001);
EXPECT_NEAR(b.get_length(), 4.472, 0.001);
}