class Solution {
public:
    int getMinDistance(vector<int>& a, int target, int start) {
        int e1 = -1;
        int dist = INT_MAX;
        
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == target)
                e1 = i;    
            if(e1 != -1)
                if(abs(e1-start) < dist)
                    dist = abs(e1-start);
        }
        if(dist == INT_MAX)
            return -1;
        return dist;
    }
};