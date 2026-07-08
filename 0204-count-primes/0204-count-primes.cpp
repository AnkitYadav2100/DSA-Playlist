class Solution {
public:
    int countPrimes(int n) {
        if(n <2) return 0;
        int count = 0;
        vector<int>temp(n,1);
        temp[0] = temp[1] = 0;
        for(int i=2; i*i<n; i++){
            if(temp[i]){
                for(int j=2*i; j<n; j+=i){
                    temp[j] = 0;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(temp[i]){
                count++;
            }
        }
        return count;
    }
};