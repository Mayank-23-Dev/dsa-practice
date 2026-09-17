class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty())
            return {};
        vector<int> c=arr;
        sort(c.begin(),c.end());
        vector<int> u;
        u.push_back(c[0]);
        for (int i=1;i<c.size();i++)
        {
            if (c[i] != c[i-1])
                u.push_back(c[i]);
        }
        vector<int> ans;
        for (int x:arr)
        {
            int idx=lower_bound(u.begin(),u.end(),x)-u.begin();
            ans.push_back(idx+1);
        }
        return ans;
    }
};
