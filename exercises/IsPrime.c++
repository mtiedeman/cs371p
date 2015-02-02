// -----------
// IsPrime.c++
// -----------

#include <cassert>  // assert
#include <cmath>    // sqrt
#include <iostream> // cout, endl

#include "gtest/gtest.h"

bool is_prime (int n) {
    assert(n > 0);
    if ((n < 2) || ((n % 2) == 0))
        return false;
    for (int i = 3; i < sqrt(n); ++i)
        if ((n % i) == 0)
            return false;
    return true;}

TEST(MyUnitTests, test_1) {
    ASSERT_FALSE(is_prime(1));}

TEST(MyUnitTests, test_2) {
    ASSERT_FALSE(is_prime(2));}

TEST(MyUnitTests, test_3) {
    ASSERT_TRUE(is_prime(3));}

TEST(MyUnitTests, test_4) {
    ASSERT_FALSE(is_prime(4));}

TEST(MyUnitTests, test_5) {
    ASSERT_TRUE(is_prime(5));}

TEST(MyUnitTests, test_6) {
    ASSERT_TRUE(is_prime(7));}

TEST(MyUnitTests, test_7) {
    ASSERT_TRUE(is_prime(9));}

TEST(MyUnitTests, test_8) {
    ASSERT_FALSE(is_prime(27));}

TEST(MyUnitTests, test_9) {
    ASSERT_TRUE(is_prime(29));}

/*
Running main() from gtest_main.cc
[==========] Running 9 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 9 tests from MyUnitTests
[ RUN      ] MyUnitTests.test_1
[       OK ] MyUnitTests.test_1 (0 ms)
[ RUN      ] MyUnitTests.test_2
[       OK ] MyUnitTests.test_2 (0 ms)
[ RUN      ] MyUnitTests.test_3
[       OK ] MyUnitTests.test_3 (0 ms)
[ RUN      ] MyUnitTests.test_4
[       OK ] MyUnitTests.test_4 (0 ms)
[ RUN      ] MyUnitTests.test_5
[       OK ] MyUnitTests.test_5 (0 ms)
[ RUN      ] MyUnitTests.test_6
[       OK ] MyUnitTests.test_6 (0 ms)
[ RUN      ] MyUnitTests.test_7
[       OK ] MyUnitTests.test_7 (0 ms)
[ RUN      ] MyUnitTests.test_8
[       OK ] MyUnitTests.test_8 (0 ms)
[ RUN      ] MyUnitTests.test_9
[       OK ] MyUnitTests.test_9 (0 ms)
[----------] 9 tests from MyUnitTests (0 ms total)

[----------] Global test environment tear-down
[==========] 9 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 9 tests.



gcov -b IsPrime.c++ | grep -A 5 "File 'IsPrime.c++'"
File 'IsPrime.c++'
Lines executed:100.00% of 25
Branches executed:55.83% of 163
Taken at least once:27.61% of 163
No calls
IsPrime.c++:creating 'IsPrime.c++.gcov'
*/
