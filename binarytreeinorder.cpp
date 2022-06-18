///PROBLEM #94


#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

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
