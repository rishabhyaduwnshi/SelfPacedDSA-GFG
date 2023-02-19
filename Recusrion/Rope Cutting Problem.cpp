#include <bits/stdc++.h>
using namespace std;

int ropeCuttingProblem(int length, int a, int b, int c)
{
    if(length == 0)
        return 0;
        
    if(length <= -1)
        return -1;
    
    int result = max(max(ropeCuttingProblem(length-a,a,b,c),ropeCuttingProblem(length-b,a,b,c)),ropeCuttingProblem(length-c,a,b,c));
    
    if(result == -1)
        return -1;
        
    return result+1;
}

int main()
{
    cout<<ropeCuttingProblem(23,11,9,12);
}
