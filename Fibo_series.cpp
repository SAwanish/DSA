// # Problem statement
// # Given an integer ‘n’, return first n Fibonacci numbers using a generator function.



// # Example:
// # Input: ‘n’ = 5

// # Output: 0 1 1 2 3

// # Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
// # Note:
// # You don't need to print anything. Just implement the given function.

// Solution :

#include<iostream>
#include<vector>

using namespace std;

vector<int> generateFibonacciNumbers(int n) {


    if(n==1) return{0} ;

    if(n==2)return {0, 1};

       vector<int> fibo = generateFibonacciNumbers(n - 1);

    fibo.push_back(fibo[fibo.size() - 1] + fibo[fibo.size() - 2]);

 

    return fibo;

}