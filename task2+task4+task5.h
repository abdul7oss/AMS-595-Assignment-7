#ifndef MYFUNCTIONS_H 
#define MYFUNCTIONS_H 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void print_vector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to check if a number is prime
bool isprime(int n) {
    if (n <= 1) return false; // Numbers <= 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; // If divisible by any number other than 1 and itself
    }
    return true; // Otherwise, it's prime
}

// Test cases for the isprime function
void test_isprime() {
    cout << "isprime(2) = " << isprime(2) << endl;
    cout << "isprime(10) = " << isprime(10) << endl;
    cout << "isprime(17) = " << isprime(17) << endl;
}

// Function to find all factors of a number
vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // Check if i is a factor
            factors.push_back(i);
        }
    }
    return factors;
}

// Test the factorize function
void test_factorize() {
    cout << "Factors of 72: ";
    print_vector(factorize(72));
    cout << "Factors of 196: ";
    print_vector(factorize(196));
}


// Function to perform prime factorization
vector<int> prime_factorize(int n) {
    vector<int> prime_factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) { // Check if divisible by i
            prime_factors.push_back(i); // Add i to the prime factors
            n /= i; // Divide n by i
        }
    }
    return prime_factors;
}

// Test the prime_factorize function
void test_prime_factorize() {
    cout << "Prime factors of 72: ";
    print_vector(prime_factorize(72));
    cout << "Prime factors of 196: ";
    print_vector(prime_factorize(196));
}

void printPascalsTriangle(int n) {
    if (n <= 0) return; // No rows to print for non-positive input

    vector<vector<int>> triangle; // To store the rows of Pascal's Triangle

    // Generate Pascal's Triangle
    for (int i = 0; i < n; ++i) {
        vector<int> row(i + 1, 1); // Create a row with all elements initialized to 1
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // Compute middle elements
        }
        triangle.push_back(row); // Add the row to the triangle
    }

    // Print Pascal's Triangle
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}




#endif 