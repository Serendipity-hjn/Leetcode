// 题目链接：https://leetcode.cn/problems/maximum-depth-of-binary-tree/
#include "iostream"
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x) : val(x), left(nullptr), right(nullptr)
    {
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
    {
    }
};

class Solution
{
  public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int L = maxDepth(root->left);
        int R = maxDepth(root->right);
        return max(L, R) + 1;
    }
};