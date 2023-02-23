//https://leetcode.com/problems/ipo/description/
int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) 
{
    //creating a vector of pairs where we will store capital[i] mapped to its profit[i]
    vector<pair<int, int>> totalProjects;
    for(int i=0; i<profits.size(); i++)
        totalProjects.push_back({capital[i],profits[i]});

    //sorting on the basis of capital
    sort(totalProjects.begin(),totalProjects.end());
    int i=0;
    
    //
    priority_queue<int> finalCapital;

    while(k--)
    {
        //check if current project can be completed with the capital we have as of now, if it can be then push the profit
        while(i<profits.size() && totalProjects[i].first <= w)
        {
            finalCapital.push(totalProjects[i].second); 
            i++;
        }

        if(finalCapital.empty())
            break;
        
        //add the curret capital to finql capital
        w += finalCapital.top();
        finalCapital.pop();
    }

    return w;
}
