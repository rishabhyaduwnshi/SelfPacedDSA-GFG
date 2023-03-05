#include <bits/stdc++.h>
using namespace std;

void mimimumFlips(int array[], int length)
{
    int i;
    for(i=1;i<length;i++)
    {
        if(array[i] != array[i-1])
        {
            if(array[i] != array[0])
                cout<<"From "<<i<<" "<<"to ";
            else
                cout<<(i-1)<<endl;
        }
    }
    
    if(array[length-1] != array[0])
        cout<<(i-1)<<endl;
}


int main()
{
    int array[] = {0,0,1,1,0,0,1,1};
    int length = sizeof(array)/sizeof(int);
    
    mimimumFlips(array,length);
}
