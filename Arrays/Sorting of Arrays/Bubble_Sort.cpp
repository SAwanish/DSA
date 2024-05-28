#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    if(n==1) return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return bubbleSort(arr, n-1);
}