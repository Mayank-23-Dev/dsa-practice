#include <iostream>
#include <vector>
using namespace std;
bool validAnagram(string s,string t) 
{
    if(s.length()!=t.length())
        return false;
    
    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int i=0;i<s.length();i++)
    {
        if(freq[s[i]-'a']) 
        return false;
    }
    return true;
}
int main() {
    string s= "anagram";
    string t= "nagaram";
    cout<<validAnagram(s,t);
    return 0;
}