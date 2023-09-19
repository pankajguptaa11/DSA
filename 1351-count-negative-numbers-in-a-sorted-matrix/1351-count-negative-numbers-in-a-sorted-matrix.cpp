class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < (int)grid.size(); i++) {
            for (int j = (int)grid[i].size() - 1; j >= 0; j--) {
                if (grid[i][j] >= 0) {
                    break;
                }
                res++;
            }
        }
        return res;
    }
};