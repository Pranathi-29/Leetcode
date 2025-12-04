class Solution {
public:
    int countCollisions(string directions) {
        string s= directions;
        int n = s.size(), ans = 0;
        int i = 0, j = n - 1;
        while (i < n && s[i] == 'L') i++;
        while (j >= 0 && s[j] == 'R') j--;
        for (int k = i; k <= j; k++) {
            if(s[k]!='S')
            ans++;
        }
        return ans;
    }
};