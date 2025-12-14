class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        vector<int>res;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j])
            res.push_back(nums1[i++]);
            else
            res.push_back(nums2[j++]);
        }
        while(i<nums1.size())
        res.push_back(nums1[i++]);
        while(j<nums2.size())
        res.push_back(nums2[j++]);
        nums1=res;
    }

};