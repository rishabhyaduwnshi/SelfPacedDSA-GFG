#include <bits/stdc++.h>
using namespace std;


int maximumSum(int array[], int k, int length)
{
    int currentSum = 0;
    for(int i=0;i<k;i++)
        currentSum += array[i];
        
    int maxSum = currentSum;
    for(int i=k;i<length;i++)
    {
        currentSum = currentSum+array[i]-array[i-k];
        maxSum = max(currentSum,currentSum);
    }
    
    return maxSum;
}


int main()
{
    int array[] = {1,8,30,-5,20,7};
    int length = sizeof(array)/sizeof(int);
    int k = 4;
    cout<<maximumSum(array,k,length);
}
