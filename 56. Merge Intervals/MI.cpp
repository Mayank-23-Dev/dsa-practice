#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    if (intervals.empty())
        return {};
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    for (int i=1;i<intervals.size();i++) 
    {
        if (merged.back()[1]>=intervals[i][0])
            merged.back()[1]=max(merged.back()[1],intervals[i][1]);
        else
            merged.push_back(intervals[i]);
    }
    return merged;
}
int main()
{
    vector<vector<int>> intervals1={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> intervals2={{1,4},{4,5}};
    vector<vector<int>> merged1=merge(intervals1);
    vector<vector<int>> merged2=merge(intervals2);
    for (const auto& interval : merged1) 
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    cout << endl;
    for (const auto& interval : merged2) 
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    cout << endl;
}