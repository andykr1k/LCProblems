class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q != nullptr || p != nullptr && q == nullptr){
            return false;
        }
        if (p == nullptr && q == nullptr){
            return true;
        }
        bool k;
        if (p->val != q->val){
            k = false;
        } else {
            k = true;
        }
        bool l = isSameTree(p->left, q->left);
        bool r = isSameTree(p->right, q->right);
        if (k && l && r){
            return true;
        } else {
            return false;
        }
    }
};