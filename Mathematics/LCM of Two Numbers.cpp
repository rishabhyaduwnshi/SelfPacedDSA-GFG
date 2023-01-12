#include <bits/stdc++.h>
using namespace std;

int findLCM(int a, int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    cout<<findLCM(4,6);
}

