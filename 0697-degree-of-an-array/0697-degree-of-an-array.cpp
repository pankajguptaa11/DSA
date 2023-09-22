#include <tuple>

class Solution {
    struct Info {
        int count;
        int startIdx;
        int endIdx;

        void updateEnd(int end) {
            endIdx = end;
            ++count;
        }
        int range() const {
            return endIdx - startIdx + 1;
        }
    };
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, Info> cache; // num, <count, startIdx, endIdx>

        for (int i = 0; i < nums.size(); ++i) {
            if (cache.find(nums[i]) != cache.end()) {
                cache[nums[i]].updateEnd(i);
            }
            else {
                cache[nums[i]] = Info{1, i, i};
            }
        }
        int count = 0;
        int shorted = 0;
        for (auto& [k, v] : cache) {
            if (count < v.count) {
                count = v.count;

                shorted = v.range();
            }
            else if (count == v.count) {
                if (shorted > v.range()) {
                    shorted = v.range();
                }
            }
        }
        return shorted;
    }
};