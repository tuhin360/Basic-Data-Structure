#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// input
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) // corner case
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root != NULL) // corner case
        q.push(root);
    while (!q.empty())
    {
        // 1. queue front value ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node ke niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3.children push kora
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    cout << max_height(root);

    return 0;
}

// input: 6 3 5 -1 2 0 -1 -1 1 -1 -1
// output: 3
