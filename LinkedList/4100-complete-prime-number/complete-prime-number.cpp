class Solution {
public:


    bool isprime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(long long i = 5; i * i <= n; i += 6)
            if(n % i == 0 || n % (i + 2) == 0) return false;
        return true;
    }
    
    bool completePrime(int num) {
        int val = 10;
        if(!isprime(num)) return false;
        while(val <= num) {
            int digit = num % val;
            int ans = num / val;
            if(!isprime(digit) || !isprime(ans)) return false;
            val *= 10;
        }
        return true;
    }
};