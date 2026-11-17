class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        nums[0]=(nums[0]==0?1:-1);
        for(int i=1;i<nums.size();i++)
            nums[i]=(nums[i]==0?(nums[i-1]+1):(nums[i-1]-1));
        unordered_map<int,int> mp;
        int maxLength=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
                maxLength=max(maxLength,i-mp[nums[i]]);
            else
                mp[nums[i]]=i;
        }
        return maxLength;
    }
};