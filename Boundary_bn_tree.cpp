#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
    TreeNode *left;
    TreeNode *rigth;
    int value;
};
bool isLeaf(TreeNode *node)
{
    if (node->left == NULL && node->rigth == NULL)
    {
        return true;
    }
    return false;
}
void leftboundary(TreeNode *root, vector<int> &res)
{
    TreeNode *cur = root->left;
    while (cur)
    {
        if (!isLeaf(cur))
        {
            res.push_back(cur->value);
        }
        if (cur->left)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->rigth;
        }
    }
}

void rightboundary(TreeNode *root, vector<int> &res)
{
    TreeNode *cur = root->rigth;
    vector<int> tmp;
    while (cur)
    {
        if (!isLeaf(cur))
        {
            tmp.push_back(cur->value);
        }
        if (cur->rigth)
        {
            cur = cur->rigth;
        }
        else
        {
            cur = cur->left;
        }
    }
    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        res.push_back(tmp[i]);
    }
}

void addleafnode(TreeNode *root, vector<int> &res)
{
    if (isLeaf(root))
    {
        res.push_back(root->value);
    }
    if (root->left)
    {
        addleafnode(root->left, res);
    }
    if (root->rigth)
    {
        addleafnode(root->rigth, res);
    }
}

vector<int> boundary_traversal(TreeNode *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    result.push_back(root->value);
    leftboundary(root, result);
    rightboundary(root, result);
    addleafnode(root, result);
    return result;
}

int main(int argc, char const *argv[])
{
    TreeNode *troot = new TreeNode;
    TreeNode *n1 = new TreeNode;
    TreeNode *n2 = new TreeNode;
    TreeNode *n3 = new TreeNode;
    TreeNode *n4 = new TreeNode;
    troot->value = 10;
    n1->value = 20;
    n2->value = 30;
    n3->value = 40;
    n4->value = 50;
    troot->left = n1;
    troot->rigth = n2;
    n1->left = n3;
    n1->rigth = NULL;
    n2->rigth = n4;
    n2->left = NULL;
    n3->rigth = n3->left = NULL;
    n4->rigth = n3->left = NULL;
    vector<int> res = boundary_traversal(troot);
    for (int i = 0; i < res.size() - 1; i++)
    {
        cout << "lol" << res[i];
    }

    return 0;
}
