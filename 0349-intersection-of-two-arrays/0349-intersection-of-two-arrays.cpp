class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size(),i=0,j=0;
        vector<int>ans;
        set<int> st;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while(i<m && j<n){

            if(nums1[i]<nums2[j]) i++;

            else if(nums1[i]==nums2[j]) {
                st.insert(nums1[i]);
                i++;
                j++;
            }

            else if(nums1[i]>nums2[j]) j++;
        }
        //hume unique value chiyee 
        //so we can use erase function and set data structure

        //ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        for(auto val: st)
           ans.push_back(val);

    return ans;
}
};