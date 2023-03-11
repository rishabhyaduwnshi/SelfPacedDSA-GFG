#include <bits/stdc++.h>
using namespace std;


bool isPairPresent(int array[], int length, int target)
{
    int i=0;
    int j=length-1;
    
    while(i < j)
    {
        if(array[i] + array[j] == target)
            return true;
            
        else if(array[i]+array[j] > target)
            j--;
        else
            i++;
    }
    
    return false;
}


int main()
{
    int array[] = {2,5,8,12,30};
    int length = sizeof(array)/sizeof(int);
    int target = 17;
    if(isPairPresent(array,length,target))
        cout<<"Yes";
    else
        cout<<"No";
    
}
