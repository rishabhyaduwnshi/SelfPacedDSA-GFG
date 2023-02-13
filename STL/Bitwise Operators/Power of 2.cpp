#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n)
{
    if(n == 0)
        return false;
            
    if(ceil(log2(n)) == floor(log2(n)))
        return true;
    return false;
        
}

bool isPowerOfTwo(int number)
{
    if((number & (number-1)) == 0)
        return true;
    return false;
}

int main()
{
    if(isPowerOfTwo(255))
        cout<<"Yes";
    else
        cout<<"No";
    
}
