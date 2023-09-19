class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*, char>> q;     // Initialize the queue to store every node with left or right position
        q.push({root, 'r'});                // Push root node in the queue
        
        int ans = 0;                        // To store sum of left node
        
        while(!q.empty()) {
            TreeNode* temp = q.front().first;   // Store the values of queue front and then pop it.
            char ch = q.front().second;
            q.pop();
            
            if(temp -> left == NULL && temp -> right == NULL) {
                if(ch == 'l') {
                    ans += temp -> val;         // If left leaf node -> add the value to ans
                }
            }
            if(temp -> left) {
                q.push({temp -> left, 'l'});    // Push left child in queue
            }
            if(temp -> right) {
                q.push({temp -> right, 'r'});   // Push right child in queue
            }
        }
        return ans;
    }
};