class Solution {
public:
    void backtrack(int k, int n, vector<vector<int>>&ans, int &sum,vector<int>&sub,int idx){
        if(sum==n&&k==sub.size()){
            ans.push_back(sub);
            return ;
        }
        
        if(sum>n||sub.size()>k)
        return ;
        for(int i=idx;i<10;i++){
            sum+=i;
            sub.push_back(i);
            backtrack(k,n,ans,sum,sub,i+1);
            sum-=i;
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>sub;
        int sum=0;
        backtrack(k,n,ans,sum,sub,1);
        return ans;
    }
};