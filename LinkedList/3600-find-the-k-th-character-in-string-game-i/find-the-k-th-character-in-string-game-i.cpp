class Solution {
public:
    char kthCharacter(int k) {
        string w="a";
        while(w.length()<k){
            int n=w.length();
            for(int i=0;i<n;i++){
                char t;
                if(w[i]=='z'){
                    t = 'a';
                }
                else
                 t = w[i]+1;
                w.push_back(t);
            }
        }
        return w[k-1];
        
    }
};