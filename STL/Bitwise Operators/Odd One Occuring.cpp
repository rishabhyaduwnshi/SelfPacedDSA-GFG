//Given an array, return the number which appears only once in array

#include <bits/stdc++.h>
using namespace std;

int oddOneOccuring(vector<int> numbers)
{
    int oddOccuring = 0;
    for(int i=0;i<numbers.size();i++)
        oddOccuring = oddOccuring^numbers[i];
        
    return oddOccuring;
}

int main()
{   
    vector<int> numbers = {2,2,4,4,5,5,7,7,1};
    cout<<oddOneOccuring(numbers);
    
}
