#include <iostream>
#include <string>
#include <vector>
using namespace std;
int dayOfYear(string date) 
{
    vector<int> calend={0,31,28,31,30,31,30,31,31,30,31,30};
    int year=stoi(date.substr(0,4));
    int month=stoi(date.substr(5,2));
    int day=stoi(date.substr(8));
    if((year%4==0 && year%100!=0)||year%400==0)
        calend[2]++;
    int ans=0;
    for(int i=1;i<month;i++)
        ans+=calend[i];
    return ans+day;
}
int main() 
{
    string date="2004-03-01";
    cout << dayOfYear(date);
}