class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        int i=1;
        int n = num;
        while(i<n){
            if(num%i==0){
                sum+=i+(num/i);
                n=num/i;
            }
            i++;
        }
        
        if(num==sum-num){
            return true;
        }
        return false; 
    }
};