//finding the sum of left leaf nodes in a binary tree
#include <stdio.h>
#include <stdlib.h>

struct binaryTreeNode
{
    int data;
    struct binaryTreeNode *left,*right;
};

void insert(struct binaryTreeNode **T,int data)
{
    if(*T==NULL)
    {
        struct binaryTreeNode *temp=(struct binaryTreeNode*)malloc(sizeof(struct binaryTreeNode));
        temp->left=temp->right=NULL;
        temp->data=data;
        *T=temp;
    }
    else if(data < (*T)->data)
    {
        insert(&(*T)->left,data);
    }
    else if(data > (*T)->data)
    {
        insert(&(*T)->right,data);
    }
    else
    {
        printf("given number is already present\n");
    }
}

int leafNodeCheck(struct binaryTreeNode *T)
{
    if(T==NULL)
    {
        return 0;
    }
    else if(T->left==NULL && T->right==NULL)
    {
        return 1;
    }
    return 0;
}

int sumOfLeftNodes(struct binaryTreeNode *T)
{
    int sum=0;
    if(T!=NULL)
    {
        if(leafNodeCheck(T->left))
        {
            sum=sum+T->left->data;
        }
        else
        {
            sum=sum+sumOfLeftNodes(T->left);
        }
         sum=sum+sumOfLeftNodes(T->right);
    }
    return sum;
}

void print_preorder(struct binaryTreeNode  *tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

int main()
{
    int sum;
    struct binaryTreeNode *root=NULL;

    insert(&root,15);
    insert(&root,8);
    insert(&root,2);
    insert(&root,11);
    insert(&root,25);
    insert(&root,9);
    insert(&root,17);

    sum=sumOfLeftNodes(root);
    printf("%d\n",sum);
    return 0;
}
