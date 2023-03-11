#include <bits/stdc++.h>
using namespace std;


bool isPairPresent(int array[], int length, int target)
{
    int i,j;
    for(int k=0;k<length;k++)
    {
        i = k+1;
        j = length-1;
        while(i < j)
        {
            if(array[i] + array[j] + array[k] == target)
            {
                cout<<array[i]<<" "<<array[j]<<" "<<array[k]<<endl;
                return true;
            }
            
            else if(array[i] + array[j] + array[k] > target)
                j--;
            else
                i++;
        }
    }
    return false;
}


int main()
{
    int array[] = {2,3,4,8,9,20,40};
    int length = sizeof(array)/sizeof(int);
    int target = 62;
    if(isPairPresent(array,length,target))
        cout<<"Yes";
    else
        cout<<"No";
    
}
