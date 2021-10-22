#ifndef EXAM_H
#define EXAM_H

/***
 * -------------------------------------------------------------------------------------------------------------------
 * 题目
 * -------------------------------------------------------------------------------------------------------------------
 * 输入一棵二叉树的根节点，判断该树是不是平衡二叉树。如果某二叉树中任意节点的左右子树的深度相差不超过1，那么它就是一棵平衡二叉树。
 *  
 * 示例 1:
 * 给定二叉树 [3,9,20,null,null,15,7]
 *     3
 *    / \
 *   9  20
 *     /  \
 *    15   7
 * 返回 true 。
 * 
 * 示例 2:
 * 给定二叉树 [1,2,2,3,3,null,null,4,4]
 *        1
 *       / \
 *      2   2
 *     / \
 *    3   3
 *   / \
 *  4   4
 * 返回 false 。
 * 
 * 要求：
 * 1. 完善exam*.*文件，通过所有单元测试
 * 2. 除exam*.*以外的文件不得修改，修改会被覆盖
 */

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
        if(!root) return true;
        else if(abs(f(root->left)-f(root->right))>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

    int f(TreeNode *node){
        if(!node) return 0;
        return 1+max(f(node->left), f(node->right));
    }
};

#endif // EXAM_H
