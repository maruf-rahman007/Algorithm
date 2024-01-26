#include <bits/stdc++.h>

using namespace std;

int fibonacchiNumber(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacchiNumber(n-1);
    int secondLast = fibonacchiNumber(n-2);
    return last + secondLast;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacchiNumber(n)<<endl; 
    return 0;
}

/*
Time Complexity -> O(2^n) exponential in nature
Space Complexity -> O(n)
*/