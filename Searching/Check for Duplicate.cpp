#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int array[], int length)
{
    bool tempArray[10];
    
    for(int i=0;i<10;i++)
        tempArray[i] = false;
        
    for(int i=0;i<length;i++)
    {
        if(tempArray[array[i]] == true)
            return array[i];
        tempArray[array[i]] = true;
    }
    
    return -1;
}


int main()
{
    int array[] = {0,1,2,3,3,4,5};
    int length = sizeof(array)/sizeof(int);
    
    cout<<findDuplicate(array,length);
}
