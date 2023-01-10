#include <bits/stdc++.h>
using namespace std;

int countDigits(int number)
{
    return floor(log10(number) + 1);
}

int main()
{
    cout<<countDigits(125);
}
