class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        long long int cnt=0;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
//Check the condition for each element
            if(nums[i]==nums[j]){
//If Condition fullfill then increase the counter
                cnt++;
            }}

        }
//Return Counter
     return cnt;   
    }
};

