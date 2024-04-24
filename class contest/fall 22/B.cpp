#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count_even = 0;
    int count_odd = 0;
    while (--n)
    {
        int num;
        cin>>num;

        if (num % 2 == 0)
        {
            count_even++;
        }
        else 
        {
            count_odd++;
        }
        
    }
    
    if(count_even == n || count_odd == n)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}