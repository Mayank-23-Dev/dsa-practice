class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0,sumB=0;
        for(int i:aliceSizes) 
            sumA+=i;
        for(int i:bobSizes) 
            sumB+=i;
        int diff=(sumA-sumB)/2;
        for(int i:aliceSizes)
        {
            for(int j:bobSizes)
            {
                if(i-j==diff)
                    return {i,j};
            }
        }
        return {};
    }
};