#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> merged(nums1.size()+nums2.size());
    for (int i = 0; i < nums1.size(); i++)
        merged[i] = nums1[i];
    for (int i = 0; i < nums2.size(); i++)
        merged[nums1.size() + i] = nums2[i];
    sort(merged.begin(), merged.end());
    int n = merged.size();
    if (n % 2 == 0)
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    else
        return merged[n / 2];
}
int main() {
    int m, n;
    cout << "Enter size of first array: ";
    cin >> m;
    vector<int> nums1(m);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < m; i++)
        cin >> nums1[i];
    
    cout << "Enter size of second array: ";
    cin >> n;
    vector<int> nums2(n);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n; i++)
        cin >> nums2[i];
    
    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;
    return 0;
}