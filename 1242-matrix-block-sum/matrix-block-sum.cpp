class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(i>0)
                    mat[i][j]+=mat[i-1][j];
                if(j>0)
                    mat[i][j]+=mat[i][j-1];
                if(i>0 && j>0)
                    mat[i][j]-=mat[i-1][j-1];
            }
        }
        vector<vector<int>> ans(mat.size(),vector<int>(mat[0].size(),0));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                int r1=i-k,r2=i+k;
                int c1=j-k,c2=j+k;
                if(r1<0)
                    r1=0;
                if(r2>=mat.size())
                    r2=mat.size()-1;
                if(c1<0)
                    c1=0;
                if(c2>=mat[0].size())
                    c2=mat[0].size()-1;
                int sum=mat[r2][c2];
                if(r1>0)
                    sum-=mat[r1-1][c2];
                if(c1>0)
                    sum-=mat[r2][c1-1];
                if(r1>0 &&c1>0)
                    sum+=mat[r1-1][c1-1];
                ans[i][j]=sum;
            }
        }
        return ans;
    }
};