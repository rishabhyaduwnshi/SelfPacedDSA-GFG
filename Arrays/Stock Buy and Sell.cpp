#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int size)
{
    int profit = 0;
    for(int i=1;i<size;i++)
    {
        if(prices[i] > prices[i-1])
            profit += (prices[i] - prices[i-1]);
    }
    
    return profit;
    
}

int main()
{
    int prices[] = {1,5,3,8,12};
    int size = sizeof(prices)/sizeof(int);

    cout<<maxProfit(prices,size);
}
