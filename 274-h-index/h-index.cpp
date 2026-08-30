class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        sort(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++)
        {
            int p=citations.size()-i;
            if(citations[i]>=p)
                return p;
        }
        return 0;
    }
};