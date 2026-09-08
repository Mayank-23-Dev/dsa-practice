class Solution {
public:
    string largestOddNumber(string num)
    {
        for(int ch=num.size()-1;ch>=0;ch--)
        {
            if(int(num[ch])%2==0)
                num.pop_back();
            if(int(num[ch])%2!=0)
                return num.substr(0,ch+1);
        }
        return "";
    }
};