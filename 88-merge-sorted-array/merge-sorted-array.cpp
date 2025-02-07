

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ns = (n + m) - 1;
        m--;
        n--;
        while (n >= 0) {
            if (m >= 0 && nums1[m] >= nums2[n]) {
                nums1[ns] = nums1[m];
                m--;
            } else {
                nums1[ns] = nums2[n];
                n--;
            }
            ns--;
        }
    }
};
