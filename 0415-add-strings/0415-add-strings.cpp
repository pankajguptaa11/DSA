class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size() - 1;
        int n2 = num2.size() - 1;
        
        string ans = "";
        
        short carry = 0;
        
        char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        
        while (n1 >= 0 || n2 >= 0) {
            short n1_d = 0, n2_d = 0;
            if (n1 >= 0) {
                n1_d = num1[n1] - '0';
            }
            if (n2 >= 0) {
                n2_d = num2[n2] - '0';
            }
            
            short sum = n1_d + n2_d + carry;
            
            if (sum > 9) {
                carry = sum / 10;
                ans = digits[sum % 10] + ans;
                
            } else {
                ans = digits[sum] + ans;
                carry = 0;
            }
            
            if (n1 >= 0) {
                n1--;
            }
            if (n2 >= 0) {
                n2--;
            }
        }
        
        if (carry) {
            ans = digits[carry] + ans;
        }
        
        return ans;
    }
};
