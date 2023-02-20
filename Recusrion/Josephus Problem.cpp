#include <bits/stdc++.h>
using namespace std;

int josephusProbelm(int n, int k)
{
    if(n == 1)
        return 0;
        
    else
        return (josephusProbelm(n-1,k)+k)%n;
    
}

int jos(int n, int k)
{
    return josephusProbelm(n,k)+1;
}


int main()
{
    cout<<jos(12,5);
}
