#include <bits/stdc++.h>
using namespace std;

int lastOccurence(int array[], int low, int high, int key, int size)
{
    if(low > high)
        return -1;
        
    int mid = (low+high)/2;
    
    if(array[mid] > key)
        return lastOccurence(array,low,mid-1,key,size);
    else if(array[mid] < key)
        return lastOccurence(array,mid+1,high,key,size);
    else
    {
        if(mid == size-1 || array[mid] != array[mid+1])
            return mid;
        else
            return lastOccurence(array,mid+1,high,key,size);
    }
}


int main()
{
    int array[] = {1,2,3,3,3,4,5,6,7,8,8,8,9,10};
    int size = sizeof(array)/sizeof(int);
    int key = 3;
    int result = lastOccurence(array,0,size-1,key,size);
    
    if(result != -1)
        cout<<"Element is present at index "<<result;
    else
        cout<<"Not Present";
}
