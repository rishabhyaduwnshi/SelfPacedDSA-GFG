#include <bits/stdc++.h>
using namespace std;

bool equlibriumPoint(int array[], int length)
{
    int rightSum = 0;
    for(int i=0;i<length;i++)
        rightSum += array[i];
        
    int leftSum = 0;
    
    for(int i=0;i<length;i++)
    {
        rightSum -= array[i];
        if(leftSum == rightSum)
            return true;
        leftSum += array[i];
    }
    
    return false;
}


int main()
{
    int array[] = {3,4,8,9,-9,7};
    int length = sizeof(array)/sizeof(int);
    
    if(equlibriumPoint(array,length))
        cout<<"Yes";
    else
        cout<<"No";
    
}
