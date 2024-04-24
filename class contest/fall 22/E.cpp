#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int change = k-n;
    bool happpy = false;
    while (change >= 25)
    {
        change-=25;
    }
    while (change >= 13)
    {
        change-=13;
    }
    while (change >= 9)
    {
        change-=9;
        happpy = true;
    }
    while (change >= 7)
    {
        change-=7;
        happpy = true;
    }
    while (change >= 2)
    {
        change-=2;
    }
    while (change >= 1)
    {
        change-=1;
    }

    if(happpy)
        cout<<"Happy"<<endl;
    else 
        cout<<"Sad"<<endl;
    return 0;
}