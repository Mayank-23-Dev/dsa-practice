class Solution {
public:
    string frequencySort(string s)
    {
        vector<int> freq(128,0);
        for(char c:s)
            freq[c]++;

        string ans;
        while(ans.size()<s.size())
        {
            int maxFreq=0;
            int maxChar=0;
            for(int i=0;i<128;i++)
            {
                if(freq[i]>maxFreq)
                {
                    maxFreq=freq[i];
                    maxChar=i;
                }
            }
            ans.append(maxFreq,char(maxChar));
            freq[maxChar]=0;
        }
        return ans;
    }
};