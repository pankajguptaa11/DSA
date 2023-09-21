class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int j=0;
        int mini = *min_element(nums.begin(),nums.end());
        while(j < nums.size())
        {
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[j] == mini) break;
                if(nums[j] > nums[i]) count++;
            }
            ans.push_back(count);
            j++;

        }
        return ans;
    }
};