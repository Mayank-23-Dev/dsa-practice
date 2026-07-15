#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reverseWords(string s) 
{
    reverse(s.begin(),s.end());
    int i=0;
    while (i<s.length()) 
    {
        if (s[i]!=' ') 
        {
            int j = i;
            while (j < s.length() && s[j] != ' ') 
                j++;
            reverse(s.begin() + i, s.begin() + j);
            i=j;
        } 
        else
            i++;
    }
    int i_ptr=0,j_ptr=0;
    while (j_ptr<s.length()) 
    {
        while (j_ptr<s.length() && s[j_ptr]==' ')
            j_ptr++;
        while (j_ptr<s.length() && s[j_ptr]!=' ')
            s[i_ptr++]=s[j_ptr++];
        while (j_ptr<s.length() && s[j_ptr]==' ')
            j_ptr++;
        if (j_ptr<s.length())
            s[i_ptr++]=' ';
    }
    s.resize(i_ptr);
    return s;
}
int main()
{
    cout << reverseWords("Hello World") << endl;
    cout << reverseWords("  Hello   World  ") << endl;
    cout << reverseWords("a good   example") << endl;
}
