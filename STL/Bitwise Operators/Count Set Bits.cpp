#include <bits/stdc++.h>
using namespace std;

int countSetBits(int number)
{
    int x = 1;
    int count = 0;
        
    while(number != 0)
    {
        if(number&1 != 0)
            count++;
            
        number >>= 1;
    }
    
    return count;
}

int main()
{
    int number = 4;
    cout<<countSetBits(number);
    
}
