// checking whether a given tree is a sumtree or not
#include <stdio.h>
#include<stdlib.h>

struct binaryTreeNode
{
    int data;
    struct binaryTreeNode *left,*right;
};

struct binaryTreeNode* insert(int data)
{
        struct binaryTreeNode *temp=(struct binaryTreeNode*)malloc(sizeof(struct binaryTreeNode));
        temp->left=temp->right=NULL;
        temp->data=data;
        return temp;
}

int sum(struct binaryTreeNode *T)
{
    if(T==NULL)
    {
        return 0;
    }
    return (sum(T->left)+T->data+sum(T->right));
}

int isSumTree(struct binaryTreeNode *T)
{
    int left,right;
    if(T==NULL)
    {
        return 1;
    }
    left=sum(T->left);
    right=sum(T->right);
    if(T->data == left+right)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print_preorder(struct binaryTreeNode* tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}


int main(void)
{
    int i;
    struct binaryTreeNode *root=NULL;

    root=insert(26);
    root->left=insert(10);
    root->right=insert(3);
    root->left->right=insert(6);
    root->left->left=insert(4);
    root->right->right=insert(3);

    i=isSumTree(root);

    if(i==1)
    {
       printf("given tree is a sum tree\n");
    }
    else
    {
       printf("given tree is not a sum tree\n");
    }

	return 0;
}

