#include<bits/stdc++.h>

using namespace std;

int partitionn(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while (arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
    
}


void quickSort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int partitionindex = partitionn(arr,low,high);
        quickSort(arr , low,partitionindex-1);
        quickSort(arr , partitionindex+1,high);
    }
}

int main()
{
    vector<int>arr = {7, 6, 5, 4, 3, 2, 1};
    int n = 7;
    quickSort(arr,0,n-1);
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