#include <bits/stdc++.h>
using namespace std;

int searchInRotatedArray(int array[], int size, int key)
{
    int low = 0;
    int high = size-1;
    
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(array[mid] == key)
            return mid;
            
        if(array[low] < array[mid])
        {
            if(key >= array[low] && key < array[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else
        {
            if(key > array[mid] && key <= array[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    
    
    return -1;
    
}


int main()
{
    int array[] = {10,20,40,60,5,8};
    int size = sizeof(array)/sizeof(int);
    int key = 10;
    
    cout<<searchInRotatedArray(array,size,key);
}
