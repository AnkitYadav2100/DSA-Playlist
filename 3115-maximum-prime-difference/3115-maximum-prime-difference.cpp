class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3; i*i<=n; i+=2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int maxIdx = -1;
        int minIdx = -1;
        for(int i=0; i<n; i++){
            if(isPrime(nums[i])){
                if(maxIdx == -1){
                    maxIdx = i;
                }
                minIdx = i;
            }
        }
       
        return abs(maxIdx-minIdx);
    }
};