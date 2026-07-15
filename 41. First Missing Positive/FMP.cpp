#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int firstMissingPositive(vector<int>& nums) 
{
    for(int i=0;i<nums.size();i++)
    {
        if (nums[i]<=0||nums[i]>nums.size())
            nums[i]=0;
    }
    for(int i=0;i<nums.size();i++)
    {
        int num=nums[i]%(nums.size()+1);
        if(num>0)
            nums[num-1]+=(nums.size()+1);
    }
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<=nums.size())
        {
            ans=i+1;
            break;
        }
    }
    return ans;
}
int main() {
    vector<int> nums={7,8,9,11,12};
    cout<<firstMissingPositive(nums);
    return 0;
}