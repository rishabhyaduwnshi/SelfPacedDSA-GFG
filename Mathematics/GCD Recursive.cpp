#include <bits/stdc++.h>
using namespace std;

//iterative approach
int gcdRecursive(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    cout<<gcdRecursive(20,30);
}
