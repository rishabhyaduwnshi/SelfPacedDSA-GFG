#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Bitwise NOT ( ~ )
    
    // considiring 32 bit architecture, unsigned int ranged from 0 to 2^32-1 -> 0 to 4294967295
    unsigned int x = 1; //00......0001 -> 31 0's in the begining
    cout<<(~x)<<endl; // all zeros are inverted to 1 and 1 to 0 this will result in  4294967295-1 = 4294967294
    
    unsigned int y = 5;
    cout<<(~y)<<endl; //4294967295-5 = 4294967290
    
    //For signed int
    
    int signedX = 1;
    cout<<(~signedX); //stored as 2's complement
  
    
}
