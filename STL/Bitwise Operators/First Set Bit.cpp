#include <bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    if(n == 1 || n == 0)
        return n;
            
    unsigned int position = 0;
    while(n != 0)
    {
        position++;
        if(n&1)
            return position;
        n >>= 1;
    }
}

int main()
{
    cout<<getFirstSetBit(18);
}
