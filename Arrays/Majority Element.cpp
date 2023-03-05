#include <bits/stdc++.h>
using namespace std;

int majorityElement(int array[], int length)
{
    int result = 0;
    int count = 1;
    
    for(int i=1;i<length;i++)
    {
        if(array[result] == array[i])
            count++;
        else
            count--;
        
        if(count == 0)
        {
            result = i;
            count = 1;
        }
    }
    
    count = 0;
    for(int i=0;i<length;i++)
    {
        if(array[i] == array[result])
            count++;
    }
	
	if(count <= length/2)
	    result = -1;
	 if(result != -1)
	    return array[result];
	 else
	    return -1;
}

int main()
{
	int array[] = {6,8,4,8,8,4,4,4,4,4};
	int length = sizeof(array)/sizeof(int);
	cout<<majorityElement(array,length);
	return 0;
}
