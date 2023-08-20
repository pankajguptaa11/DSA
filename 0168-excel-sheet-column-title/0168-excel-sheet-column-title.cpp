class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans;
        
        while(columnNumber){
            if(columnNumber%26 == 0){
                ans +='Z';
                columnNumber--;
            }
            else{
                ans += (columnNumber%26-1) + 'A';
            }
            columnNumber/=26;
        }
        
        reverse(begin(ans),end(ans));
        
        return ans;
    }
};