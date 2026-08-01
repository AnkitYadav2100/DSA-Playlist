class Solution {
public:
    string convertToTitle(int columnNumber) {
        string str = "";
        // if(columnNumber<27) return columnNumber + "";
        while(columnNumber > 0){
            columnNumber--;
            int rem = columnNumber%26;
            str = str + (char)(rem + 'A');
            columnNumber/=26;
        }
        reverse(str.begin(), str.end());
        return str;       
    }
};