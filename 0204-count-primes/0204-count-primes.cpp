class Solution {
public:
    // bool isPrime(int num){
    //     if(num <=1 ) return false;
    //     if(num == 2) return true;
    //     if(num % 2 == 0) return false;
    //     for(int i=3; i*i<=num; i+=2){
    //         if(num%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    int countPrimes(int n) {
        if(n <2) return 0;
        int count = 0;
        vector<int>temp(n,1);
        temp[0] = temp[1] = 0;
        for(int i=2; i*i<n; i++){
            if(temp[i]){
                for(int j=i*i; j<n; j+=i){
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