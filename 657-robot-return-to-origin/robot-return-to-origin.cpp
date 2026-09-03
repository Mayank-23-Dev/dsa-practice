class Solution {
public:
    bool judgeCircle(string moves)
    {
        int sumh=0;
        int sumv=0;
        for(char i:moves)
        {
            if(i=='U')
                sumv++;
            else if(i=='D')
                sumv--;
            else if(i=='L')
                sumh--;
            else if(i=='R')
                sumh++;
        }
        bool flag=false;
        if(sumh==0 && sumv==0)
            flag=true;
        return flag;
    }
};