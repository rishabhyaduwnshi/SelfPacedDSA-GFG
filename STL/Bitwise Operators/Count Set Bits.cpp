#include <bits/stdc++.h>
using namespace std;

//Brian Cunningham Solution
int countSetBits(int number)
{
    int count = 0;
    while(number != 0)
    {
        //this expression will make the last set bit in number from 1 to 0. The while loop will run only O(no of set bit) times.
        number = (number & (number-1));
        count++;
    }
    
    return count;
}

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
