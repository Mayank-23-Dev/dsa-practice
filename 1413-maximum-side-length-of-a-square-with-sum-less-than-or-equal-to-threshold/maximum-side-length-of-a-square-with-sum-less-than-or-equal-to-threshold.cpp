class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
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
        int max_length=0;
        for(int len = 1;len<=min(mat.size(),mat[0].size());len++)
        {
            for(int row1=0;row1+len<=mat.size();row1++)
            {
                for(int col1=0;col1+len<=mat[0].size();col1++)
                {
                    int row2=row1+len-1;
                    int col2=col1+len-1;
                    int sum=mat[row2][col2];
                    if(row1>0)
                        sum-=mat[row1-1][col2];
                    if(col1>0)
                        sum-=mat[row2][col1-1];
                    if(row1>0 && col1>0)
                        sum+=mat[row1-1][col1-1];
                    if(sum<=threshold)
                        max_length=max(max_length,len);
                }
            }
        }
        return max_length;
    }
};