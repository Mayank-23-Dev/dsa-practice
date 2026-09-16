class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr=nums;
        for(int x:nums)
            arr.push_back(x);
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<2*n;j++) {
                if(arr[j]>arr[i]) {
                    ans[i]=arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};