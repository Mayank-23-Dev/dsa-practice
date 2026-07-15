#include <iostream>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) 
{
    vector<int> ans(matrix.size(),matrix[0].size());
    for (int i=0;i<matrix.size();i++) 
    {
        for (int j=0;j<matrix[i].size();j++) 
        {
            if (matrix[i][j]==0) 
            {
                ans[i]=min(ans[i],j);
                ans[j]=min(ans[j],i);
            }
        }
    }
    for (int i=0;i<ans.size();i++) 
    {
        for (int j=0;j<ans[i];j++) 
            matrix[i][j]=0;
        for (int j=0;j<ans[i];j++) 
            matrix[j][i]=0;
    }
    for (int i=0;i<ans.size();i++) 
    {
        for (int j=ans[i];j<matrix[i].size();j++) 
            matrix[i][j]=0;
        for (int j=ans[i];j<matrix.size();j++) 
            matrix[j][i]=0;
    }
}
int main()
{
    vector<vector<int>> matrix1={{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> matrix2={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix1);
    setZeroes(matrix2);
    for (const auto& row : matrix1) 
    {
        for (int val : row) 
            cout << val << " ";
        cout << endl;
    }
    cout << endl;
    for (const auto& row : matrix2) 
    {
        for (int val : row) 
            cout << val << " ";
        cout << endl;
    }
}