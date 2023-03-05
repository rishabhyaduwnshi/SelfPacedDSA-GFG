int maxSubArray(vector<int>& nums) 
{
    int currentMaxEnd = nums[0];
    int sum = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        currentMaxEnd = max(nums[i],currentMaxEnd+nums[i]);
        sum = max(sum,currentMaxEnd);
    }
        
    return sum;
}
