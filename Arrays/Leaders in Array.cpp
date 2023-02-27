#include <bits/stdc++.h>
using namespace std;

void printLeaders(vector<int> array)
{
    int size = array.size();
    int currentLeader = array[size-1];
    
    cout<<currentLeader<<" ";
    
    for(int i=size-2;i>=0;i--)
    {
        if(array[i] > currentLeader)
        {
            cout<<array[i]<<" ";
            currentLeader = array[i];
        }
    }
}

int main()
{
    vector<int> array = {7,10,4,3,6,5,2};
    printLeaders(array);
}
