class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        long long res=1;
        long long mod=1000000007;
        while(k)
        {
            int s=pq.top();
            pq.pop();
            pq.push(s+1);
            k--;
        }
        while(!pq.empty())
        {
            long long s=pq.top();
            pq.pop();
            res=(res*s)%mod;
        }
        return res;
    }
};