class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i>0)
                    matrix[i][j]+=matrix[i-1][j];
                if(j>0)
                    matrix[i][j]+=matrix[i][j-1];
                if(i>0 && j>0)
                    matrix[i][j]-=matrix[i-1][j-1];
            }
        }
        int ans=0;
        for(int row1=0;row1<matrix.size();row1++)
        {
            for(int col1=0;col1<matrix[0].size();col1++)
            {
                for(int row2=row1;row2<matrix.size();row2++)
                {
                    for(int col2=col1;col2<matrix[0].size();col2++)
                    {
                        int sum=matrix[row2][col2];
                        if(row1>0)
                            sum-=matrix[row1-1][col2];
                        if(col1>0)
                            sum-=matrix[row2][col1-1];
                        if(row1>0 && col1>0)
                            sum+=matrix[row1-1][col1-1];
                        if(sum==target)
                            ans++;
                    }
                }
            }
        }
        return ans;
    }
};