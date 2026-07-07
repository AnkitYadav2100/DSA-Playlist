class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int dSum = 0;
        for(int num : nums){
            sum += num;
            while(num>0){
                dSum += num%10;
                num/=10;
            }
        }
        return abs(sum-dSum);
    }
};