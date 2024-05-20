// Problem statement

// Given an array 'v' of 'n' numbers.
// Your task is to find and return the highest and lowest frequency elements.
// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.

// Example:
// Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]
// Output: 1 2
// Explanation: The element having the highest frequency is '1', 
//              and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. 
//              Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].

#include<iostream>>
#include<vector>
#include<map>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    int mn=255,mx=-255,a=0,b=0;
    for(auto it:mp){
        if(it.second < mn){
            mn=it.second;
            b=it.first;
        }
        if(it.second > mx){
            mx=it.second;
            a=it.first;
        }
    }
    return {a,b};
}