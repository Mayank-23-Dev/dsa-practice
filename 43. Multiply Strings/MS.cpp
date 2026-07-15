#include <iostream>
#include <vector>
#include <string>
using namespace std;
string multiply(string num1, string num2) 
{
    vector<int> pos(num1.size()+num2.size(),0);
    for(int i=num1.size()-1;i>=0;i--)
    {
        for(int j=num2.size()-1;j>=0;j--)
        {
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int sum=mul+pos[i+j+1];
            pos[i+j]+=sum/10;
            pos[i+j+1]=sum%10;
        }
    }
    string result="";
    for(int i=0;i<pos.size();i++)
    {
        if(!(result.empty() && pos[i]==0))
            result+=to_string(pos[i]); 
    }
    if (result.empty())
        return "0";
    return result;
}
int main() {
    string num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    string result = multiply(num1, num2);
    cout << "Product: " << result << endl;
    return 0;
}