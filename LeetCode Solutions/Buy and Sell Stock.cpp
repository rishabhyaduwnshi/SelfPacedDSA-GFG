//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

int maxProfit(vector<int>& prices) 
{
    //make the initial buy prices as first element of array 
    int buyPrice = prices[0];
    
    //profit in starting is 0
    int profit = 0; 

    for(int i=1;i<prices.size();i++)
    {
        //check if current prices is less than initial buyPrice, if yes buy the stock
        if(prices[i] < buyPrice)
            buyPrice = prices[i];
        
        //check if we can maximize the profit buy selling today, then sell
        else if(prices[i] - buyPrice  > profit)
            profit = prices[i]-buyPrice;
    }

    return profit;
}
