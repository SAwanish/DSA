#include<vector.h>

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    if (n>0){
        if(n==nums.size()) nums.pop_back();
        cout<<*(nums.end())<<" ";
        nums.pop_back();
        reverseArray(n-1, nums);
    }
    return {};
}