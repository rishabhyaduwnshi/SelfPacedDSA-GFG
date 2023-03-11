#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int low, int high, int key)
{
    if(low > high)
        return -1;
        
    int mid = (low+high)/2;
    if(array[mid] == key)
        return mid;
    
    if(array[mid] > key)
        return binarySearch(array,low,mid-1,key);
    else
        return binarySearch(array,mid+1,high,key);
}


int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(int);
    int key = 11;
    int result = binarySearch(array,0,size-1,key);
    
    if(result != -1)
        cout<<"Element is present at index "<<result;
    else
        cout<<"Not Present";
}
