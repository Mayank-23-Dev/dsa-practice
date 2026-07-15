#include <iostream>
#include <string>
#include <vector>
using namespace std;
int myAtoi(string s) 
{
    int key=0,index =0;
    for (int i=0;i<s.size();i++)
    {
        if(s[i]!=' ' && s[i]!='+' && s[i]!='-' && (s[i]<'0' || s[i]>'9') && key==0)
            return 0;
        if(s[i]=='+' || s[i]=='-' || (s[i]>='0' && s[i]<='9'))
        {            
            if(key==0)
                index=i;
            key++;
        }
        if((s[i]<'0' || s[i]>'9') && key>0)
            break;
    }
    for (int i=index;i<s.size();i++)
    {
        if(s[i]<'0' || s[i]>'9')
        {
            s=s.substr(index,i+1);
            break;
        }
    }
    if (s=="+"|| s=="-"||s=="")
        return 0;
    return stoi(s);  
}
int main() 
{
    string s=" -042";
    cout << myAtoi(s);  
    // myAtoi(s);
}