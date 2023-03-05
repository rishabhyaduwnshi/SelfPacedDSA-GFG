#include <bits/stdc++.h>
using namespace std;

//Using Kaden's Algorithm
int maxEvenOddLength(int array[], int length)
{
    int result = 1;
    int current = 1;
    for(int i=1;i<length;i++)
    {
        if((array[i]%2 == 0 && array[i-1]%2 == 1) || (array[i]%2 == 1 && array[i-1]%2 == 0))
        {
            current++;
            result = max(current,result);
        }
        else
            current = 1;
    }
    return result;
}


//O(n*n) complexity
int maxEvenOddLength(int array[], int length)
{
    int result = 1;
    for(int i=0;i<length;i++)
    {
        int current = 1;
        for(int j=i+1;j<length;j++)
        {
            if((array[j]%2 == 0 && array[j-1]%2 == 1) || (array[j]%2 == 1 && array[j-1]%2 == 0))
                current++;
            else
                break;
        }
        
        result = max(current,result);
    }
    
    return result;
}

int main()
{
    int array[] = {10,12,14,7,18};
    int length = sizeof(array)/sizeof(int);
    cout<<maxEvenOddLength(array,length);
}
