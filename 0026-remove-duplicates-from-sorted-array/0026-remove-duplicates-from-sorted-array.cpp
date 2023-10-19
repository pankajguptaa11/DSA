class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //  J will store all the unique elements and u can say it act as a slow pointer movving foward when there is unique element only 
    // 
        int j = 1 ;
        for(int i = 0 ; i < nums.size() -1 ; i++)
        {
            if(nums[i] != nums[i+1])
            {
                nums[j] = nums[i+1];
                j++;
            }
        }
        return j ;
    }
};
