#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void RotateArray(vector<int>& nums, int k) 
{
    k=k%nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.begin()+k);
}
int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    RotateArray(nums,k);
    for(int i : nums)
    {
        cout<<i<<" ";
    }
    return 0;
}