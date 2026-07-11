class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>temp;
        for(int i=0; i<n; i++){
            int val = start + 2 * i;
            temp.push_back(val);
        }
        
        int ans = temp[0];
        for(int i=1; i<n; i++){
            ans = ans ^ temp[i];
        }
        return ans;
    }
};