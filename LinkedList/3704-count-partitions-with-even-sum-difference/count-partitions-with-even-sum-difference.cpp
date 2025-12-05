class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n =nums.size(), sum=0, psum=0, ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            psum+=nums[i];
            if((sum-2*psum)%2==0)
            ans++;
        }
        return ans;
    }
};