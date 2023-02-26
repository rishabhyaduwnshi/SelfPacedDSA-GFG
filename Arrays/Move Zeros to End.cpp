#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long> vc = {8,5,0,10,0,20,15,8};
    int nonZeroCount = 0;
    
    for(int i=0;i<vc.size();i++)
    {
        if(vc[i] != 0)
        {
            swap(vc[i],vc[nonZeroCount]);
            nonZeroCount++;
        }
    }
    
    
    for(auto x : vc)
        cout<<x<<" ";
}
