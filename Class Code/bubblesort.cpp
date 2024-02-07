#include<bits/stdc++.h>

using namespace std;


void bubblesort(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}



void optimizedBubblesort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag) break;
        
    }
    
}


void optimizedBubblesortdecending(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]<arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag) break;
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    optimizedBubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Decending order :"<<endl;
    optimizedBubblesortdecending(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}