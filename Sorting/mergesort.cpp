#include<bits/stdc++.h>

using namespace std;
void mergeIt(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        cout<<arr[i-low]<<" "<<endl;
        arr[i] = temp[i - low];
    }
    
    
}

void mergeSort(vector<int>&arr, int low, int high)
{
    if(low == high) return;
    int mid = (low + high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeIt(arr,low,mid,high);

}


int main()
{   
    vector<int>arr = {7, 6, 5, 4, 3, 2, 1};
    int n = 7;
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


/*
    Time complexity
    O(nlogn) -> Worst , Average , Best
*/