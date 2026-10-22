class Solution {
public:
    int reverseNumber(int x)
    {
        int reversed=0;
        while(x>0)
        {
            reversed=reversed*10+(x%10);
            x/=10;
        }
        return reversed;
    }
    bool sumOfNumberAndReverse(int num)
    {
        for (int x=0;x<=num;x++)
            if (x+reverseNumber(x)==num)
                return true;
        return false;
    }
};