class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        int curr=0;
        alt.push_back(curr);
        for(int i:gain)
        {
            curr+=i;
            alt.push_back(curr);   
        }
        int maxl=alt[0];
        for(int i:alt)
            maxl=max(i,maxl);
        return maxl;
    }
};