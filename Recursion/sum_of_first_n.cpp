#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cin>>n;
    int ans = sum(n);
    cout<< ans<<endl;
    return 0;
}

/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/