#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int start, int end)
{
    if(start >= end)
        return 0;
    
    int profit = 0;
    
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<end;j++)
        {
            if(prices[j] > prices[i])
            {
                int current_profit = prices[j]-prices[i]+maxProfit(prices,start,i-1)+maxProfit(prices,j+1,end);
                profit = max(profit,current_profit);
            }
        }
    }
    
    return profit;
}

int main()
{
    int prices[] = {1,5,3,8,12};
    int size = sizeof(prices)/sizeof(int);
    int start = 0;
    
    cout<<maxProfit(prices,start,size);
}
