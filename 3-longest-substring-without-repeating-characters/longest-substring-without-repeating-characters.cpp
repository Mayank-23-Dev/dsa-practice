class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        unordered_map<char,int> mp;
        int maxLength=0,length=0;
        while(right<s.size())
        {
            if(mp.find(s[right])!=mp.end())
                left=max(left,mp[s[right]]+1);
            mp[s[right]]=right;
            length=right-left+1;
            maxLength=max(maxLength,length);
            right++;
        }
        return maxLength;
    }
};