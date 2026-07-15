#include <iostream>
#include <stack>
using namespace std;
int evaluatePrefix(string exp)
{
    stack<int> s;
    for(int i = exp.length() - 1; i >= 0; i--)
    {
        if(isdigit(exp[i])) // operand
            s.push(exp[i] - '0');
        else // operator
        {
            int op1 = s.top(); s.pop();
            int op2 = s.top(); s.pop();
            int result;
            switch(exp[i])
            {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
            }
            s.push(result);
        }
    }

    return s.top();
}
int main()
{
    string exp = "-+7*45+20";
    cout << "Result = " << evaluatePrefix(exp);
}