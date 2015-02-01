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

int main () {
    using namespace std;
    cout << "IsPrime2.c++" << endl;

    assert(!is_prime( 1));
    assert(!is_prime( 2));
    assert( is_prime( 3));
    assert(!is_prime( 4));
    assert( is_prime( 5));
    assert(!is_prime( 6));
    assert( is_prime( 7));
    assert(!is_prime( 8));
    assert( is_prime( 9));
    assert(!is_prime(10));
    assert( is_prime(11));

    cout << "Done." << endl;
    return 0;}

/*
% g++-4.7 -fprofile-arcs -ftest-coverage -pedantic -std=c++11 -Wall IsPrime.c++ -o IsPrime -lgtest -lgtest_main -pthread
IsPrime
IsPrime.c++
Done.



% gcov -b IsPrime.c++
File 'IsPrime.c++'
Lines executed:100.00% of 21
Branches executed:100.00% of 32
Taken at least once:59.38% of 32
No calls
IsPrime.c++:creating 'IsPrime.c++.gcov'
...



% cat IsPrime.c++.gcov
...
*/
