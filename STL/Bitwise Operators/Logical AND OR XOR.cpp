#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    //bitwise AND (&)
    int x = 2; //binary of 2 -> 010
    int y = 4; //binary of 4 -> 101
    int z = (x&y); //result will be 0
    cout<<z<<endl;
    
    
    //bitwise OR (|)
    int xy = 2; //binary of 2 -> 010
    int yx = 4; //binary of 4 -> 101
    int zx = (xy|yx); //result will be 6
    cout<<zx<<endl;
    
    //bitwise XOR (^) if both the inputs bits are different, then output is 1 else 0
    int xyy = 2; //binary of 2 -> 010
    int yxx = 4; //binary of 4 -> 101
    int zxy = (xyy^yxx); //result will be 6
    cout<<zxy<<endl;
}
