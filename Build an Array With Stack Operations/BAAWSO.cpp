#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> buildArray(vector<int>& target, int n) 
{
    vector<string> ans;
    int index=0;
    for (int i=1;i<=n;i++)
    {
        if(i==target[index])
        {
            ans.push_back("Push");
            index++;
        }
        else
        {
            ans.push_back("Push");
            ans.push_back("Pop");
        }
        if(index==target.size())
            break;
    }
    return ans;
}
int main() 
{
    vector<int> target={1,3};
    int n=3;
    vector<string> ans=buildArray(target,n);
    for (int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
}