#include <iostream>
#include "task2+task4+task5.h"
#include <vector>

int main() {
    vector<int> v = {11, 23, 45, 89};
    vector<int> a = {1,5,4,2,6,4};
    print_vector(a);

    // task 4.1 //
    test_isprime();

    //task 4.2 
    test_factorize();
 //task 4.3
    test_prime_factorize();

//task 5
    int n = 5; // Number of rows to print
    printPascalsTriangle(n);

    return 0;
}