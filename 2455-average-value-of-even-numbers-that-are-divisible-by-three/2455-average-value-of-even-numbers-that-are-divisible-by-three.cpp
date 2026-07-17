class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int avg = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                avg+=nums[i];
                count++;
            }
        }
        return count == 0 ? 0 : avg/count;
    }
};