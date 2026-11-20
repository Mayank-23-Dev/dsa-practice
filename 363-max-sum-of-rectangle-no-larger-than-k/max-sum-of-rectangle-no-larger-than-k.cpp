class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& mat, int k)
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
        int ans=INT_MIN;
        for(int row1=0;row1<mat.size();row1++)
        {
            for(int col1=0;col1<mat[0].size();col1++)
            {
                for(int row2=row1;row2<mat.size();row2++)
                {
                    for(int col2=col1;col2<mat[0].size();col2++)
                    {
                        int sum=mat[row2][col2];
                        if(row1>0)
                            sum-=mat[row1-1][col2];
                        if(col1>0)
                            sum-=mat[row2][col1-1];
                        if(row1>0 && col1>0)
                            sum+=mat[row1-1][col1-1];
                        if(sum<=k && sum>ans)
                            ans=max(ans,sum);
                    }
                }
            }
        }
        return ans;
    }
};