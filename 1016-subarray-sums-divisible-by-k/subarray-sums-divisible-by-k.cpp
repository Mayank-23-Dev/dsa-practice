class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int prefixsum=0;
        int count=0;
        mp[0]=1;
        for(int i:nums)
        {
            prefixsum+=i;
            if(mp.find(((prefixsum%k)+k)%k)!=mp.end())
                count+=mp[((prefixsum%k)+k)%k];
            mp[((prefixsum%k)+k)%k]++;
        }
        return count;
    }
};