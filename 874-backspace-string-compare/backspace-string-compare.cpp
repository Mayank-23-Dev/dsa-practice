class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string se,te;
        int ch1=0,ch2=0;
        while(ch1<s.size())
        {
            if(s[ch1]=='#' && !(se.empty()))
                se.pop_back();
            else if(s[ch1]=='#' && se.empty());
            else
                se.push_back(s[ch1]);
            ch1++;
        }
        while(ch2<t.size())
        {
            if(t[ch2]=='#' && !(te.empty()))
                te.pop_back();
            else if(t[ch2]=='#' && te.empty());
            else
                te.push_back(t[ch2]);
            ch2++;
        }
        return (se==te);
    }
};