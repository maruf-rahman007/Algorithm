#include <bits/stdc++.h>

using namespace std;

void printSomething(int n)
{
    if (n == 0)
        return;
    cout<<n<<" ";
    printSomething(--n);
}

int main()
{
    int n;
    cin>>n;
    printSomething(n);

    return 0;
}

/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/