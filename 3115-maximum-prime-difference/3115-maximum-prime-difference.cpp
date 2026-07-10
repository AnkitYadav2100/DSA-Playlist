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
        // for(int i=0; i<n; i++){
        //     if(isPrime(nums[i])){
        //         if(maxIdx == -1){
        //             maxIdx = i;
        //         }
        //         minIdx = i;
        //     }
        // }
        int i = 0, j = n-1;
        int first = -1, last = -1;
        while(i<n){
            if(isPrime(nums[i]) && first == -1){
                first = i;
            }
            if(isPrime(nums[j]) && last == -1){
                last = j;
            }
            if(first != -1 && last != -1) break;
            i++;
            j--;
        }
       
        // return abs(maxIdx-minIdx);
        return abs(first-last);
    }
};