#include <bits/stdc++.h>
using namespace std;

int prefixSum(int array[], int length)
{
    int prefixSumArray[length] = {0};
    prefixSumArray[0] = array[0];
    
    for(int i=1;i<length;i++)
        prefixSumArray[i] = prefixSumArray[i-1]+array[i];
        
    for(int i=0;i<length;i++)
        cout<<prefixSumArray[i]<<" ";
    return 0;
}


int main()
{
    int array[] = {4,8,12,10};
    int length = sizeof(array)/sizeof(int);
    prefixSum(array,length);
    
}
