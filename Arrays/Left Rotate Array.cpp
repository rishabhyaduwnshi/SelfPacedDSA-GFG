#include <bits/stdc++.h>
using namespace std;

void leftRotateArray(vector<int> vc, int roateBy)
{
    int size = vc.size();
    
    //first reverse from index 0 to index roateBy
    reverse(vc.begin(),vc.begin()+roateBy);
    
    //then reverse from index roateBy to end of vector
    reverse(vc.begin()+roateBy,vc.end());
    
    //reverse then entire vector
    reverse(vc.begin(),vc.end());
    
    for(int i=0;i<size;i++)
        cout<<vc[i]<<" ";
}


int main()
{
    vector<int> vc = {1,2,3,4,5};
    int roateBy = 2;
    leftRotateArray(vc,roateBy);
    
}
