#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int computePowerRecursive(int base, int power)
{
    if(power == 0)
        return 1;
        
    if(power%2 == 0)
        return computePowerRecursive(base,power/2)*computePowerRecursive(base,power/2);
        
    return base*computePowerRecursive(base,power-1);
}


int main()
{
    cout<<computePowerRecursive(10,5);
}


void computePower(int base, int power)
{
    int result = 1;
    for(int i=0; i<power; i++)
        result = result*base;
        
    cout<<result;
}


int main()
{
    computePower(2,3);
}
