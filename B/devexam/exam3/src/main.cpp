#include "gtest/gtest.h"
#include "exam.h"

class PrepareTest:public testing::Test {
protected:
    Exam _exam;
};

TEST_F(PrepareTest, test0){
    EXPECT_EQ(_exam.isBalanced(NULL), true);
}

TEST_F(PrepareTest, test1){
    TreeNode *root = new TreeNode(100);

    EXPECT_EQ(_exam.isBalanced(root), true);
}

TEST_F(PrepareTest, test2){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->left->left = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), false);
}

TEST_F(PrepareTest, test3){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->right = new TreeNode(101);
    root->left->left = new TreeNode(110);
    root->left->right = new TreeNode(110);
    root->left->right->right = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), false);
}

TEST_F(PrepareTest, test4){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->left->left = new TreeNode(110);
    root->left->left->left = new TreeNode(110);
    root->left->left->right = new TreeNode(110);
    root->left->right = new TreeNode(110);
    root->left->right->left = new TreeNode(110);
    root->left->right->right = new TreeNode(110);
    root->right = new TreeNode(101);
    root->right->left = new TreeNode(110);
    root->right->left->left = new TreeNode(110);
    root->right->left->right = new TreeNode(110);
    root->right->right = new TreeNode(110);
    root->right->right->left = new TreeNode(110);
    root->right->right->right = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), true);
}

TEST_F(PrepareTest, test5){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->left->left = new TreeNode(110);
    root->left->right = new TreeNode(110);
    root->right = new TreeNode(101);
    root->right->left = new TreeNode(110);
    root->right->left->left = new TreeNode(110);
    root->right->left->right = new TreeNode(110);
    root->right->right = new TreeNode(110);
    root->right->right->left = new TreeNode(110);
    root->right->right->right = new TreeNode(110);
    root->right->right->right->left = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), false);
}

TEST_F(PrepareTest, test6){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->left->left = new TreeNode(110);
    root->left->left->left = new TreeNode(110);
    root->left->left->right = new TreeNode(110);
    root->left->right = new TreeNode(110);
    root->left->right->left = new TreeNode(110);
    root->left->right->left->left = new TreeNode(110);
    root->left->right->left->left->right = new TreeNode(110);
    root->left->right->right = new TreeNode(110);
    root->right = new TreeNode(101);
    root->right->left = new TreeNode(110);
    root->right->left->left = new TreeNode(110);
    root->right->left->right = new TreeNode(110);
    root->right->right = new TreeNode(110);
    root->right->right->left = new TreeNode(110);
    root->right->right->right = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), false);
}

TEST_F(PrepareTest, test7){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->right = new TreeNode(101);

    EXPECT_EQ(_exam.isBalanced(root), true);
}

TEST_F(PrepareTest, test8){
    TreeNode *root = new TreeNode(100);
    root->left = new TreeNode(110);
    root->right = new TreeNode(101);
    root->left->left = new TreeNode(110);
    root->left->left->right = new TreeNode(110);

    EXPECT_EQ(_exam.isBalanced(root), false);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
