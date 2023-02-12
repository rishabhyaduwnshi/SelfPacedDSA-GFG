#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Rightshift operator ( >> )
    int x = 12; //binary of 12 is 1100
    
    // binary of 12 is 1100, when we do Rightshift by 1, bits are shift one position towards right
    // 1100 becomes 0110 and decimal of 0110 is 6
    cout<<(x>>1)<<endl; 
    
    // when we do Rightshift by 2, bits are shift two position towards right
    // 1100 becomes 0011 and decimal of 0011 is 3
    cout<<(x>>2)<<endl;
    
    //in genral, if we do left shift of x by y, the result is x/(2^y);  
    
}
