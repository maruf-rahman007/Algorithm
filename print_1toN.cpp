#include <bits/stdc++.h>

using namespace std;

void printSomething(int n , int i)
{
    if (i> n)
        return;
    cout<<i<<" ";
    printSomething(n,++i);
}

int main()
{
    int n;
    cin>>n;
    printSomething(n,1);

    return 0;
}

/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/