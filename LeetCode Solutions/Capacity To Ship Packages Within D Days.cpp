//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

//this function checks whether with current given capacity can we ship within given number of days
// if we can, then it means we need check on the lower side of maximumCapacity, which is why me make answer as mid if this returns true
// if not, then we should check on higher side of minimumCapacity
bool checkDays(vector<int> weights, int days, int capacity)
{
    int currentWeight = 0;
    int daysRequired = 1;

    for(int i : weights)
    {
        if(currentWeight+i > capacity)
        {
            daysRequired++;
            currentWeight = 0;
        }
        
        currentWeight += i;
    }

    if(daysRequired > days)
        return false;
    else
        return true;
}

    
int shipWithinDays(vector<int>& weights, int days) 
{
    int minimumCapacity = 0; //this will be maximum element of array
    int maximumCapacity = 0; //this will be total sum of array because we can ship entire array in one day

    for(int i : weights)
    {
        minimumCapacity = max(i,minimumCapacity);
        maximumCapacity += i;
    }

    int mid;
    int answer = maximumCapacity;

    while(minimumCapacity <= maximumCapacity)
    {
        mid = (minimumCapacity+maximumCapacity)/2; //mid is mid capacity 
        if(checkDays(weights,days,mid))
        {
            answer = mid;
            maximumCapacity = mid-1;
        }
        else
            minimumCapacity = mid+1;
        }
        
        return answer;
    }
