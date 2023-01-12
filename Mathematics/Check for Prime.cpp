#include <bits/stdc++.h>
using namespace std;

bool checkForPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
            return false;
    }
    
    return true;
}


int main()
{
    if(checkForPrime(19))
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
