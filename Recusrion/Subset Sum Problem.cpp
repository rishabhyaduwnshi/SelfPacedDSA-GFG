#include <bits/stdc++.h>
using namespace std;

int subsetSumProblem(int array[], int n, int sum)
{
    if(n == 0)
        return sum == 0 ? 1 : 0;
        
    return subsetSumProblem(array,n-1,sum)+subsetSumProblem(array,n-1,sum-array[n-1]);
}


int main()
{
    int array[] = {10,20,15};
    int sum = 25;
    int size = sizeof(array)/sizeof(int);
    
    cout<<subsetSumProblem(array,size,sum);
}
