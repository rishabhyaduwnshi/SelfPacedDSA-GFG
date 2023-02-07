#include <bits/stdc++.h>
using namespace std;

//This uses the idea that divisors of a number appear in pairs
// and one of the divisors in the pairs is always less than sqrt(number)
void printDivisors(int number)
{
    int i;
    for(i=1;i<=sqrt(number);i++)
    {
        if(number%i == 0)
            cout<<i<<" ";
    }
    
    for(; i>=1; i--)
    {
        if(number%i == 0)
            cout<<number/i<<" ";
    }
}


int main()
{
    printDivisors(450);
}
