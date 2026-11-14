class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        unordered_map<char,bool> mp;
        int maxLength=0,length=0;
        while(right<s.size())
        {
            while(mp[s[right]]==true)
            {
                mp[s[left]]=false;
                left++;
            }
            mp[s[right]]=true;
            length=right-left+1;
            maxLength=max(maxLength,length);
            right++;
        }
        return maxLength;
    }
};