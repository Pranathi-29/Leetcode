class Solution {
public:
    int findMinSum(vector<int>& nums){
        int s=INT_MAX;
        int idx=0;
        for(int i=0;i<nums.size()-1;i++){
            int t=nums[i]+nums[i+1];
            if(t<s){
                s=t;
                idx=i;
            }
        }
        return idx;
    }
    int minimumPairRemoval(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end()))
        return 0;
        int ans=0;
        int n=nums.size();
        while(ans<n-1){
            int j = findMinSum(nums);
            int sum=nums[j]+nums[j+1];
            nums.erase(nums.begin() + j);
            ans++;
            nums[j]=sum;
            // for(int i=0;i<nums.size();i++){
            //     cout<< nums[i] << " ";
            // }
            cout <<endl;
            if(is_sorted(nums.begin(),nums.end()))
                return ans; 
        }
        return nums.size()-1;
    }
};