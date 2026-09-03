class Solution {
public:
    string toLowerCase(string s)
    {
        for(int c=0;c<s.size();c++)
            if(s[c]>='A' && s[c]<='Z')
                s[c]=s[c]+32;
        return s;   
    }
};