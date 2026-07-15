#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int>& nums) 
{
    for(int i=0;i<nums.size();i++)
    {
        int num=nums[i]%nums.size();
        if(nums[num]<nums.size())
            nums[num]+=nums.size();
        else
            return num;
    }
    return -1;
}
int main() {
    vector<int> nums={1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;
}