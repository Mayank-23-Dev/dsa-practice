#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) 
            return true;
        bool allUpper = true, allLower = true;
        for(char c : word) 
        {
            if(isupper(c)) 
                allLower = false;
            else 
                allUpper = false;
        }
        if(allUpper || allLower) 
            return true;
        if(isupper(word[0])) 
        {
            for(int i = 1; i < word.size(); i++) {
                if(isupper(word[i])) 
                    return false;
            }
            return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.detectCapitalUse("USA") << endl; // true
    cout << s.detectCapitalUse("FlaG") << endl; // false
    cout << s.detectCapitalUse("leetcode") << endl; // true
}