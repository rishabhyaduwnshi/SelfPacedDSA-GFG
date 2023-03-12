#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int array[], int length)
{
    int slow = array[0];
    int fast = array[0];
    
    do
    {
        slow = array[slow];
        fast = array[array[fast]];
    }
    while(slow != fast);
    slow = array[0];
    
    while(slow != fast)
    {
        slow = array[slow];
        fast = array[fast];
    }
    
    return slow;
}


int main()
{
    int array[] = {1,2,3,3,4,5};
    int length = sizeof(array)/sizeof(int);
    
    cout<<findDuplicate(array,length);
}
