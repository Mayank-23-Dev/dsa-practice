#include <iostream>
#include <vector>
using namespace std;
bool areIsomorphic(string s, string t)
{
    if(s.length()!=t.length())
        return false;
    vector<int> freq(256,0);
    vector<int> freq2(256,0);
    for(int i=0;i<s.length();i++)
    {
        int ch=t[i]-'a';
        if(freq[s[i]]!=0 && freq[s[i]]!=ch+1)
            return false;
        freq[s[i]]=ch+1;
    }
    for(int i=0;i<t.length();i++)
    {
        int ch=s[i]-'a';
        if(freq2[t[i]]!=0 && freq2[t[i]]!=ch+1)
            return false;
        freq2[t[i]]=ch+1;
    }
    return true;
}
int main()
{
    string s="paper";
    string t="title";
    cout<<areIsomorphic(s,t);
}