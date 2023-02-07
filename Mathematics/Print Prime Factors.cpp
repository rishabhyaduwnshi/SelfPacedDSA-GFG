#include <bits/stdc++.h>
using namespace std;


void printPrimeDivisors(int number)
{
    if(number <= 1)
        return;

    for(int i=2;i<=sqrt(number);i++)
    {
        while(number%i == 0)
        {
            cout<<i<<" ";
            number = number/i;
        }
    }
    
    if(number > 1)
            cout<<number<<" ";
}


int main()
{
    printPrimeDivisors(450);
}
