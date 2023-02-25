#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int array[], int n)
{
    int secondMaximum = INT_MIN;
    int maximum = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        if(array[i] > maximum)
        {
            secondMaximum = maximum;
            maximum = array[i];
        }
    }
    
    return secondMaximum;
}

int main()
{
    int array[] = {12,1,3,6,2,4,7,8,10,15};
    int size = sizeof(array)/sizeof(int);
    cout<<findSecondLargest(array,size);
    
}
