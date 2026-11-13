class Solution {
public:
    int maxVowels(string s, int k)
    {
        int right=0;
        int maxtot=0;
        int tot=0;
        for(right;right<k;right++)
        {
            if(s[right]=='a' ||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u')
                tot++;
        }
        maxtot=max(maxtot,tot);
        while(right<s.size())
        {
            if(s[right]=='a' ||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u')
                tot++;
            if(s[right-k]=='a' ||s[right-k]=='e'||s[right-k]=='i'||s[right-k]=='o'||s[right-k]=='u')
                tot--;
            maxtot=max(maxtot,tot);
            right++;
        }
        return maxtot;
    }
};