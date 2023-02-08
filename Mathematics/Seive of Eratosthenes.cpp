#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if(number == 0 || number == 1)
        return false;
        
    if(number == 2 || number == 3)
        return true;
        
    if(number%2 == 0 || number%3 == 0)
        return false;
        
    for(int i=5; i<=sqrt(number); i+=6)
    {
        if(number%i == 0 || (number%(i+2)) == 0)
            return false;
    }
    
    return true;
}

void printPrimes(int number)
{
    vector<int> primeNumbers(number+1, true);
    for(int i=2;i<=number;i++)
    {
        if(isPrime(i)) 
        {
            //if the current number is prime, it marks all of it's multiples as not prime
            cout<<i<<" ";
            for(int j=2*i;j<=number;j+=i)
                primeNumbers[j] = false;
        }
    }
}

int main()
{
    printPrimes(20);
}
