class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        // arr[0] = 1;
        // for(int i=1; i<n; i++){
        //     arr[i] = min(arr[i], arr[i-1]+1);
        // }
        // return arr[n-1];
        int m = INT_MIN;
        for(int i=0; i<n; i++){
            if(i==0){
                arr[0] = 1;
            }else if(abs(arr[i] - arr[i - 1]) > 1){
                arr[i] = arr[i-1] + 1;
            }
            m = max(m,arr[i]);
        }
        return m;
    }
};