#include <iostream>
#include <vector>
#include <string>
using namespace std;
string longestPalindrome(string s) 
{
    if(s.size()==0)
        return "";
    vector<vector<int>> dp(s.size(),vector<int>(s.size(),0));
    string res="";
    for(int i=s.size()-1;i>=0;i--)
    {
        for(int j=i;j<s.size();j++)
        {
            if(s[i]==s[j] && (j-i<3 || dp[i+1][j-1]))
            {
                dp[i][j]=1;
                if(j-i+1>res.size())
                    res=s.substr(i,j-i+1);
            }
        }
    }
    res.shrink_to_fit();
    return res;
}
int main() {
    string s="babad";
    cout << longestPalindrome(s);
    return 0;
}