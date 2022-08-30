#include<vector>
using namespace std;

class Solution {
public:       
    vector<int> end;

    vector<int> inorderTraversal(TreeNode* root) {
        if (root != NULL){
            
            inorderTraversal(root->left);
            
            end.push_back(root->val);
            
            inorderTraversal(root->right);
            
        }
        return end;
    }
};
