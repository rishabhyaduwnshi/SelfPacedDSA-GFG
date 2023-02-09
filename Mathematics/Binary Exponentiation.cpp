#include <bits/stdc++.h>
using namespace std;

void binaryExponentation(int base, int power)
{
    int result = 1;
    while(power != 0)
    {
        if(power & 1) //check if current bit of power is 1 or 0
            result = result*base;
            
        base = base*base; //keep increasing the power
        power >>= 1; //right shift the bits by 1
        
    }
    
    cout<<result;
}


int main()
{
    binaryExponentation(3,5);
}
