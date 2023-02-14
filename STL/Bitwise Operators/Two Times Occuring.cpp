//Given an array of integers, find the two numbers which appear odd times

#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoOddOccuring(vector<int> numbers)
{
    int oddOccuring = 0;
    for(int i=0;i<numbers.size();i++)
        oddOccuring = oddOccuring^numbers[i];
        
    int k = (oddOccuring & (~(oddOccuring-1)));
    int result1 = 0, result2 = 0;
    
    for(int i=0;i<numbers.size();i++)
    {
        if(numbers[i] & k != 0)
            result1 = result1^numbers[i];
        else
            result2 = result2^numbers[i];
    }
    
    pair<int,int> result;
    result.first = result1;
    result.second = result2;
    
    return result;
}

int main()
{   
    vector<int> numbers = {5,6,10,6,10,6,3,3};
    pair<int,int> result = twoOddOccuring(numbers);
    cout<<result.first<<" "<<result.second;
}
