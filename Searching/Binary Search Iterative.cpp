#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int size, int key)
{
    int low = 0;
    int high = size-1;
    
    while(low <= high)
    {
        int mid = (low+high)/2;
        
        if(array[mid] == key)
            return mid;
        
        if(array[mid] > key)
            high = mid-1;
        else
            low = mid+1;
    }
    
    return -1;
}


int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(int);
    int key = 1;
    
    int result = binarySearch(array,size,key);
    
    if(result != -1)
        cout<<"Element is present at index "<<result;
    else
        cout<<"Not Present";
}
