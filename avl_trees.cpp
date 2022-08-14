#include <iostream>
using namespace std;
#define count 10
class node
{
public:
    int data;
    node *right;
    node *left;
};
node *create_node(int dat)
{
    node *root = new (node);
    root->data = dat;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void print_binary_tree(node *root, int space)
{
    if (root == NULL)
    {
        return;
    }
    space += count;
    print_binary_tree(root->right, space);
    cout << endl;
    for (int i = 0; i < space; i++)
    {
        cout << " ";
    }
    cout << root->data << endl;
    print_binary_tree(root->left, space);
}
int main(int argc, char const *argv[])
{
    node *p, *p1, *p2;
    p = create_node(3);
    p1 = create_node(4);
    p2 = create_node(6);
    p->left = p1;
    p->right = p2;
    print_binary_tree(p, 0);
    return 0;
}
