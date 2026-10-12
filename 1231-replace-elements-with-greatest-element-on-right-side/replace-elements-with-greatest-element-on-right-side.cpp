class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        vector<int> ans;
        ans.push_back(-1);
        int maxRight=arr[arr.size()-1];
        for(int i=arr.size()-1;i>0;i--)
        {
            if(arr[i]>=maxRight)
                maxRight=arr[i];
            ans.push_back(maxRight);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};