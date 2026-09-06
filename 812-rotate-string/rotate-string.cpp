class Solution {
public:
    bool rotateString(string s, string goal)
    {
        if(s.size()!=goal.size())
            return false;
        if(s.size()==0)
            return true;
        else if(s.size()==1 && s[0]==goal[0])
            return true;
        int i=goal.size()-1;
        for(i;i>=0;i--)
        {
            if(goal[0]==s[0] && goal[goal.size()-1]==s[s.size()-1])
                return true;   
            if(goal[i]==s[s.size()-1] && goal[i+1]==s[0])
                return true;
        }
        return false;
    }
};