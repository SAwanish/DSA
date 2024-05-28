#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr) {
    // Write your code here.
    for(int i=0;i<arr.size();i++){
        int m=i,t;
        for(int j=i+1;j<arr.size();j++){
            if (arr[j]<arr[m])  m=j;
            }
        t=arr[i];
        arr[i]=arr[m];
        arr[m]=t;
    }
}