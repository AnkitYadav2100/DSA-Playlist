class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        while(n>0){
            int digit = n%10;
            sum += digit;
            if(digit!=0){
                x = x*10 + digit;
            }
            n/=10;
        }
        string s = to_string(x);
        reverse(s.begin(),s.end());
        return stoll(s) * sum;
    }
};