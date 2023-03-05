#include <bits/stdc++.h>
using namespace std;


bool isSum(int array[], int length, int sum)
{
    int start = 0;
    int currentSum = 0;
    
    for(int end=0;end<length;end++)
    {
        currentSum += array[end];
        while(sum < currentSum)
        {
            currentSum -= array[start];
            start++;
        }
        
        if(currentSum == sum)
            return true;
    }
    return false;
}


int main()
{
    int array[] = {4,8,12,5};
    int length = sizeof(array)/sizeof(int);
    int sum = 17;
    if(isSum(array,length,sum))
        cout<<"Yes";
    else
        cout<<"No";
}
