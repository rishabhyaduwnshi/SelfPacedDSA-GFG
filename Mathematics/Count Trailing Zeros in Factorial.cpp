#include <bits/stdc++.h>
using namespace std;

int trailingZerosInfactorial(int number)
{
    int result = 0;
    for(int i=5; i<=number; i*=5)
        result += number/i;
        
    return result;
}

int main()
{
    cout<<trailingZerosInfactorial(20);
}
