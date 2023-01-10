#include <bits/stdc++.h>
using namespace std;

//iterative approach
int gcdRecursive(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcdRecursive(b, a%b); // this will swap the values for first function call
    
    
}

int main()
{
    cout<<gcdRecursive(20,30);
}
