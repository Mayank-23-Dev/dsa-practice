#include <iostream>
#include <vector>
#include <string>
using namespace std;
string convertToBase7(int num) {
    if(num == 0) 
        return "0";
    int org_num=num;
    if (org_num<0)
        num=-num;
    string ans;
    while(num>0) 
    {
        ans=to_string(num%7)+ans;
        num/=7;
    }
    if(org_num<0)
        ans="-"+ans;
    return ans;
    int a=0;
        int b=0;
        a=1;
        while(a<=num)
        {
            a*=7;
            b++;
        }
        string ans;
        while(num>0)
        {
            ans=to_string(num%7)+ans;
            num/=7;
        }
        if(ans=="")
            ans="0";
        if(b%2==0)
            ans="-"+ans;
        return ans;
        
}
int main()
{
    cout << convertToBase7(100) << endl;
    cout << convertToBase7(-7) << endl;
    cout << convertToBase7(0) << endl;
}