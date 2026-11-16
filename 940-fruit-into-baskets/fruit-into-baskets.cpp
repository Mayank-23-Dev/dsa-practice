class Solution {
public:
    int totalFruit(vector<int>& fruits)
    {
        int left=0,right=0;
        unordered_map<int,int> mp;
        int maxLength=0;
        while (right<fruits.size())
        {
            mp[fruits[right]]++;
            right++;
            while (mp.size()>2)
            {
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                    mp.erase(fruits[left]);
                left++;
            }
            maxLength=max(maxLength,right-left);
        }
        return maxLength;
    }
};