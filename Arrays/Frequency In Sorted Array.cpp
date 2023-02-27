#include <bits/stdc++.h>
using namespace std;

void printFrequencies(vector<int> array)
{
    map<int,int> frequency;
    for(int i=0;i<array.size();i++)
        frequency[array[i]]++;
        
    for(auto it : frequency)
        cout<<it.first<<" "<<it.second<<endl;
    
}

int main()
{
    vector<int> array = {10,10,10,25,30,30};
    printFrequencies(array);
}
