class Solution {
public:
    string minWindow(string s, string t) 
    {
        int left=0,right=0;
        unordered_map<char,int> map_t;
        unordered_map<char,int> window;
        for (int i=0;i<t.size();i++)
            map_t[t[i]]++;
        int required=map_t.size();
        int formed=0;
        int minLength=INT_MAX;
        int startIndex=0;
        while(right<s.size())
        {
            window[s[right]]++;
            if(map_t.find(s[right])!=map_t.end() && window[s[right]]==map_t[s[right]])
                formed++;
            right++;
            while(formed==required)
            {
                if(right-left<minLength)
                {
                    minLength=right-left;
                    startIndex=left;
                }
                if(map_t.find(s[left])!=map_t.end() && window[s[left]]>=map_t[s[left]])
                {
                    window[s[left]]--;    
                    if(window[s[left]]<map_t[s[left]])
                        formed--;
                    left++;
                }
                else
                    left++;
            }
        }
        if(minLength==INT_MAX)
            return "";
        else
            return s.substr(startIndex,minLength);
    }
};