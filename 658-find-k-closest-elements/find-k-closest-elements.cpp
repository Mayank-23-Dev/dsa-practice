class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        int i=0,j=arr.size()-k;
        while(i<j)
        {
            int m=(i+j)/2;
            if(x-arr[m]>arr[m+k]-x)
                i=m+1;
            else
                j=m;
        }
        return vector<int>(arr.begin()+i,arr.begin()+i+k);
    }
};