#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(array[i] > array[j])
            swap(array[i],array[j]);
        }
    }
}


int main()
{
    int array[] = {9,8,7,6,5,4,3,2,1};
    int length = sizeof(array)/sizeof(int);
    
    bubbleSort(array,length);
    
    for(int i=0;i<length;i++)
        cout<<array[i]<<" ";
}
