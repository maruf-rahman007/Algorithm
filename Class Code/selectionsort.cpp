#include<bits/stdc++.h>

using namespace std;

void selection_sort(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for(j=i;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
            
        }
        swap(arr[min_index],arr[i]);
    }
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Minimum value :"<<arr[0]<<endl<<"Maximum value :"<<arr[n-1]<<endl;
    cout<<endl;
    
    return 0;
}