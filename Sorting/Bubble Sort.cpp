#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int length)
{
    //since n-1 passes are to be done
    for(int i=0;i<length-1;i++)
    {
        //after evry ith iteration, one element gets sorted so n-1-i
        for(int j=0;j<length-1-i;j++)
        {
            if(array[j] > array[j+1])
            swap(array[j],array[j+1]);
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
