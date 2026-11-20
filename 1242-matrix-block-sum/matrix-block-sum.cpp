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
                ans[i][j]=mat[(i+k>=mat.size()?mat.size()-1:i+k)][(j+k>=mat[0].size()?mat[0].size()-1:j+k)];
                if((i-k<0?0:i-k)>0)
                    ans[i][j]-=mat[(i-k<0?0:i-k)-1][(j+k>=mat[0].size()?mat[0].size()-1:j+k)];
                if((j-k<0?0:j-k)>0)
                    ans[i][j]-=mat[(i+k>=mat.size()?mat.size()-1:i+k)][(j-k<0?0:j-k)-1];
                if((i-k<0?0:i-k)>0 &&(j-k<0?0:j-k)>0)
                    ans[i][j]+=mat[(i-k<0?0:i-k)-1][(j-k<0?0:j-k)-1];
            }
        }
        return ans;
    }
};