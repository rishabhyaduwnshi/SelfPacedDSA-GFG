#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Leftshift operator ( << )
    int x = 3; //binary of 2 is 0110
    
    // binary of 3 is 0110, when we do Leftshift by 1, bits are shift one position towards Left
    // 0110 becomes 0110 and decimal of 0110 is 6
    cout<<(x<<1)<<endl; 
    
    // when we do Leftshift by 2, bits are shift two position towards Left
    // 0110 becomes 1100 and decimal of 1100 is 12
    cout<<(x<<2)<<endl;
    
    //in genral, if we do left shift of x by y, the result is x*(2^y);  
    
}
