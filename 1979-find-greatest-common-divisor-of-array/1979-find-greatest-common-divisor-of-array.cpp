class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = nums.size();
        int min = nums[0];
        int max = nums[l-1];

        for(int i=min; i>=2; i--){
            if((min%i == 0) && (max%i == 0)){
                return i;
            }
        }
        return 1;
    }
};