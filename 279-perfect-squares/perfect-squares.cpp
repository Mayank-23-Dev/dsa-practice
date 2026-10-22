class Solution {
public:
    bool isPerfectSquare(int n)
    {
        for (int i=1; i*i<=n;i++)
            if (i*i==n)
                return true;
        return false;
    }
    int numSquares(int n)
    {
        if (isPerfectSquare(n))
            return 1;
        int reduced=n;
        while (reduced%4==0)
            reduced/=4;
        if (reduced%8==7)
            return 4;
        for(int a=1;a*a<=n;++a)
        {
            if(isPerfectSquare(n-a*a))
                return 2;
        }
        return 3;
    }
};