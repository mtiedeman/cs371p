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
    ASSERT_FALSE(is_prime(6));}

TEST(MyUnitTests, test_7) {
    ASSERT_TRUE(is_prime(7));}

TEST(MyUnitTests, test_8) {
    ASSERT_FALSE(is_prime(8));}

TEST(MyUnitTests, test_9) {
    ASSERT_TRUE(is_prime(9));}

TEST(MyUnitTests, test_10) {
    ASSERT_FALSE(is_prime(10));}

TEST(MyUnitTests, test_11) {
    ASSERT_TRUE(is_prime(11));}

/*
% g++-4.7 -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall IsPrime.c++ -o IsPrime -lgtest -lgtest_main -pthread
Running main() from gtest_main.cc
[==========] Running 11 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 11 tests from MyUnitTests
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
[ RUN      ] MyUnitTests.test_10
[       OK ] MyUnitTests.test_10 (0 ms)
[ RUN      ] MyUnitTests.test_11
[       OK ] MyUnitTests.test_11 (0 ms)
[----------] 11 tests from MyUnitTests (1 ms total)

[----------] Global test environment tear-down
[==========] 11 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 11 tests.



% gcov -b IsPrime.c++
File 'IsPrime.c++'
Lines executed:100.00% of 29
Branches executed:55.33% of 197
Taken at least once:26.40% of 197
No calls
IsPrime.c++:creating 'IsPrime.c++.gcov'
...



% cat IsPrime.c++.gcov
...
*/
