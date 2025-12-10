class Solution {
public:
    long long fac(long long n){
        int const mod=1e9+7;
        if(n==1)
        return 1;
        return (n*fac(n-1))%mod;
    }
    int countPermutations(vector<int>& complexity) {
        int c=complexity[0];
        vector<int>t;
        for(int i=1;i<complexity.size();i++){
            t.push_back(complexity[i]);
        }
        sort(t.begin(),t.end());
        if(c>=t[0])
        return 0;
        return fac(complexity.size()-1);
    }
};