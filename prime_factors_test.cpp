#include "gmock/gmock.h"
#include "prime_factors.cpp"

using namespace testing;

class PrimeFixture : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, of1) {
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, of2) {
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, of3) {
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, of4) {
	vector<int> expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, of6) {
	vector<int> expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, of9) {
	vector<int> expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}