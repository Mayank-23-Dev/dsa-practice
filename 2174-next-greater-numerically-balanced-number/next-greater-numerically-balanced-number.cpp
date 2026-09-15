class Solution {
public:
    int nextBeautifulNumber(int n)
    {
        for(int x=n+1;;x++)
        {
            int y=x;
            vector<int> f(10,0);
            while(y)
            {
                f[y%10]++;
                y/=10;
            }
            bool ok=true;
            for(int i=0;i<10;i++)
            {
                if(f[i] && f[i]!=i)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
                return x;
        }
    }
};