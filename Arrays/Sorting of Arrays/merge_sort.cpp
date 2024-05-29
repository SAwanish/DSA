
#include <vector>

using namespace std;

/////////////////////////////////for vectors/////////////////////////////////////////////

void merge(vector<int>&arr, int low, int mid, int high){
    vector<int> res;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            res.push_back(arr[left]);
            left++;
        }
        else{
            res.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        res.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        res.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = res[i-low];
    }
}
 
void mergeSort(vector<int>&arr, int low, int high) {
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high);
}

//////////////////////////////////////for arrays//////////////////////////////////////////////
void merge(int arr[], int low, int mid, int high){
    vector<int> res;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            res.push_back(arr[left]);
            left++;
        }
        else{
            res.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        res.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        res.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = res[i-low];
    }
}
void mergeSort(int arr[], int low, int high) {
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,mid,high);
}