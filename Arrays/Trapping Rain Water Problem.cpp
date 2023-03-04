#include <bits/stdc++.h>
using namespace std;

int trappingRainWater(int array[], int size)
{
    int totalWater = 0;
    int leftMax[size] = {0};
    int rightMax[size] = {0};
    
    leftMax[0] = array[0];
    for(int i=1;i<size;i++)
        leftMax[i] = max(leftMax[i-1],array[i]);
        
    rightMax[size-1] = array[size-1];
    for(int i=size-2;i>=0;i--)
        rightMax[i] = max(rightMax[i+1],array[i]);
        
    
    for(int i=0;i<size;i++)
        totalWater += (min(leftMax[i],rightMax[i])-array[i]);
    
    return totalWater;
    
}

int main()
{
    int array[] = {5,0,6,2,3};
    int size = sizeof(array)/sizeof(int);

    cout<<trappingRainWater(array,size);
}
