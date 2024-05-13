// Problem statement
// You are given an integer ‘n’.



// Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



// Example:
// Input: ‘n’ = 5

// Output: 1 2 3 4 5

// Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].

// Solution:
#include<vector>
#include<iostream>

using namespace std;

vector<int> printNos(int x, int n =1) {
    // Recursive code:
    if (n<=x){
        std::cout<<n<<" ";
        printNos(x,n+1);
    }
    return {};
}