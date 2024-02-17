#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {7,6,5,4,3,2,1};
    int n = 7;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}

/*
    Time complexity
    O(n^2) -> Best , worst , Average
*/