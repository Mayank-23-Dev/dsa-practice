#include <iostream>
#include <vector>
#include <string>
using namespace std;
int compress(vector<char>& chars) 
{
    vector<char> res;
    int count=1;
    for(int i=0;i<chars.size();i++)
    {
        if(i==chars.size()-1)
        {
            res.push_back(chars[i]);
            if(count>1 && count<10)
                res.push_back(count+'0');
            else if(count>=10)
            {
                string s=to_string(count);
                for(int j=0;j<s.size();j++)
                    res.push_back(s[j]);
            }
        }
        else if(chars[i]!=chars[i+1])
        {
            res.push_back(chars[i]);
            if(count>1 && count<10)
                res.push_back(count+'0');
            else if(count>=10)
            {
                string s=to_string(count);
                for(int j=0;j<s.size();j++)
                    res.push_back(s[j]);
            }
            count=1;
        }
        else
            count++;
    }
    while(chars.size()>0)
        chars.pop_back();
    for(int i=0;i<res.size();i++)
        chars.push_back(res[i]);
    chars.shrink_to_fit();
    return chars.size();
}
int main() {
    vector<char> chars={'a','a','b','b','c','c','c'};
    cout << compress(chars);
    // vector<char> ans=compress(chars);
    // for(int i=0;i<ans.size();i++)
    //     cout << ans[i];
    return 0;
}