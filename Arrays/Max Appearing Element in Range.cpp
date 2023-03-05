#include <bits/stdc++.h>
using namespace std;

int maxAppearingElement(int leftArray[], int rightArray[], int length)
{
    int frequency[100] = {0};
    for(int i=0;i<length;i++)
    {
        for(int j=leftArray[i];j<=rightArray[i];j++)
        {
            frequency[j] += 1;
        }
    }
    
    int result = 0;
    for(int i=1;i<100;i++)
    {
        if(frequency[i] > frequency[result])
            result = i;
    }
    
    return result;
    
}


int main()
{
    int leftArray[] = {1,2,4};
    int rightArray[] = {4,5,7};
    int length = sizeof(leftArray)/sizeof(int);
    
   cout<<maxAppearingElement(leftArray,rightArray,length);
    
}
