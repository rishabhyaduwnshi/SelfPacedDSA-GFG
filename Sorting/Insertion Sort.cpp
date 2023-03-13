#include <bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int length)
{
    for(int i=1;i<length;i++)
    {
        int j=i-1;
        int x = array[i];
        
        while(j>-1 && array[j] > x)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = x;
    }
}


int main()
{
    int array[] = {9,8,7,6,5,4,3,2,1};
    int length = sizeof(array)/sizeof(int);
    
    insertionSort(array,length);
    
    for(int i=0;i<length;i++)
        cout<<array[i]<<" ";
}
