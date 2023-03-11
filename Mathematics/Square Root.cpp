#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int number)
{
    int i=1;
    while(i*i <= number)
        i++;
    return i-1;
}

int main()
{
    int number = 14;
    cout<<findSquareRoot(number);
}
