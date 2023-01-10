#include <bits/stdc++.h>
using namespace std;

//iterative approach
int gcdIterative(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a = a-b;
        else
            b = b-a;
    }
    
    return a;
    
}

int main()
{
    cout<<gcdIterative(20,30);
}
