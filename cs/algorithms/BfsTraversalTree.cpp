#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int key;
    node *left;
    node *right;
} node;
node *createNode(int key)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
int findHeight(node *root)
{
    if (root == NULL)
        return 0;
    int lHeight = findHeight(root->left);
    int rHeight = findHeight(root->right);
    if (lHeight > rHeight)
        return (lHeight + 1);
    return rHeight + 1;
}
void printCurrentLevel(node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
    {
        cout << root->key << " ";
        return;
    }
    printCurrentLevel(root->left, level - 1);
    printCurrentLevel(root->right, level - 1);
}
void bfsRecursion(node *root)
{
    int height = findHeight(root);
    for (int i = 1; i <= height; i++)
        printCurrentLevel(root, i);
}
void bfsQueue(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *cur = q.front();
        q.pop();
        cout << cur->key << " ";
        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }
}
int main()
{
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    //1.
    //  bfsRecursion(root);
    //2.
    bfsQueue(root);
    return 0;
}
/*
n=number of nodes
methods
    1. recursion
        Tc: O(n^2)
        Sc: O(n)
    2. queue
        Tc: O(n)
        Sc: O(n)
*/