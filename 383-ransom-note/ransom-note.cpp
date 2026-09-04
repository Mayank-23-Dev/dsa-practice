class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<int> freq(27,0);
        for(int i=0;i<magazine.size();i++)
        {
            if(freq[magazine[i]-'a'+1]==0)
                freq[magazine[i]-'a'+1]=1;
            freq[magazine[i]-'a'+1]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            if(freq[ransomNote[i]-'a'+1]<=1)
                return false;
            else
                freq[ransomNote[i]-'a'+1]--;
        }
        return true;
    }
};