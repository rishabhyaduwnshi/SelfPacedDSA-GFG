#include <bits/stdc++.h>
using namespace std;

int peakElement(int array[], int length)
{
    int low = 0;
    int high = length-1;
    
    while(low <= high)
    {
        int mid = (low+high)/2;
        if((mid == 0 || array[mid-1] <= array[mid]) && (mid == length-1 || array[mid+1] <= array[mid]))
            return mid;
            
        if(mid > 0 && array[mid-1] >= array[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    
    return -1;
}

int main()
{
    int array[] = {5,20,40,30,20,50,60};
    int length = sizeof(array)/sizeof(int);
    cout<<peakElement(array,length);
}
