#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int array[], int low, int high, int key)
{
    if(low > high)
        return -1;
        
    int mid = (low+high)/2;
    
    if(array[mid] > key)
        return firstOccurence(array,low,mid-1,key);
    else if(array[mid] < key)
        return firstOccurence(array,mid+1,high,key);
    else
    {
        if(mid == 0 || array[mid-1] != array[mid])
            return mid;
        else
            return firstOccurence(array,low,mid-1,key);
    }
}


int main()
{
    int array[] = {1,2,3,3,3,4,5,6,7,8,8,8,9,10};
    int size = sizeof(array)/sizeof(int);
    int key = 8;
    int result = firstOccurence(array,0,size-1,key);
    
    if(result != -1)
        cout<<"Element is present at index "<<result;
    else
        cout<<"Not Present";
}
