class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = 0;
        int second = 0;
        for(int num : nums){
            if(num > largest){
                second = largest;
                largest = num;
            }else{
                second = max(second,num);
            }
        }
        return (largest - 1)*(second-1);
    }
};