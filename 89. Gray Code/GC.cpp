#include <iostream>
#include <vector>
using namespace std;
vector<int> grayCode(int n) 
{
    vector<int> ans;
    for (int i=0;i<(1<<n);i++)
        ans.push_back(i^(i>>1));
    return ans;
}
int main() 
{
    int n=2;
    vector<int> ans=grayCode(n);
    for (int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
}