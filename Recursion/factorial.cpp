#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    int ans = fact(n);
    cout<< ans<<endl;
    return 0;
}

/*
Time Complexity -> O(n)
Auxilary Space Complexity -> O(n) 
*/