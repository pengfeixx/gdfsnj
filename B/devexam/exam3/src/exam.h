#ifndef EXAM_H
#define EXAM_H

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Exam
{
public:
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        if (root->left == nullptr && root->right == nullptr)
            return true;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        int delta = left - right;
        if (delta > 1 || delta < -1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

    int getDepth(TreeNode *root) {
        if (!root)
            return 0;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        return (left > right) ? (left + 1) : (right + 1);
    }
};

#endif // EXAM_H
