#include <bits/stdc++.h>
using namespace std;

void maximumDifference(vector<int> array)
{
    int result = array[1]-array[0];
    int currentMinimum = array[0];
    
    for(int i=1;i<array.size();i++)
    {
        result = max(result,array[i] - currentMinimum);
        currentMinimum = min(currentMinimum,array[i]);
    }
    
    cout<<result;
    
}

int main()
{
    vector<int> array = {2,3,10,6,4,8,1};
    maximumDifference(array);
}
