#include <bits/stdc++.h>
using namespace std;

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
