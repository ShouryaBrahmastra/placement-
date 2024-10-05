#include<iostream>
using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;   
    
};

struct tree *createnode(int data)
{
    struct tree *t;
    t=(struct tree *)malloc(sizeof(struct tree));
    t->data=data;
    t->left=NULL;
    t->right=NULL;
    return t;
};

class TreeFunc
{
    public:
        void PreOrder(struct tree *r)
        {
            if(r!=NULL)
            {
                printf(" %d ",r->data);
                PreOrder(r->left);
                PreOrder(r->right);
            }
        }

        void PostOrder(struct tree *r)
        {
            if(r!=NULL)
            {
                PostOrder(r->left);
                PostOrder(r->right);
                printf(" %d ",r->data);
            }
        }

        void InOrder(struct tree *r)
        {
            if(r!=NULL)
            {
                InOrder(r->left);
                printf(" %d ",r->data);
                InOrder(r->right);
            }
        }

        bool isBST(struct tree *r)
        {
            static struct tree *prev=NULL; // static pointer to track the previous node
            if (r!=NULL)
            {
                // Check left subtree first
                if (!isBST(r->left))
                {
                    return false;
                }
                // Check current node: it must be greater than the previous node
                if (prev!=NULL && r->data <= prev->data)
                {
                    return false;
                }
                prev=r;
                return isBST(r->right); // Empty subtree is always a BST  
            }
            else
            {
                return true;
            }
            
        }

};

int main()
{
    /*
                  5[p]
            /             \
           3[p2]           7[p6]
         /      \        /      \ 
       2[p3]     4[p1]  6[p5]    8[p7]
     /
    1[p4]
    */
    struct tree *p=createnode(5);
    struct tree *p1=createnode(4);
    struct tree *p2=createnode(3);
    struct tree *p3=createnode(2);
    struct tree *p4=createnode(1);
    struct tree *p5=createnode(6);
    struct tree *p6=createnode(7);
    struct tree *p7=createnode(8);

    p->left=p2;
    p->right=p6;
    p2->left=p3;
    p2->right=p1;
    p3->left=p4;
    p6->left=p5;
    p6->right=p7;

    cout<<endl;
    TreeFunc obj;
    cout<<"\nPreorder traversal is:";
    obj.PreOrder(p);

    cout<<endl;
    cout<<"\nPostorder traversal is:";
    obj.PostOrder(p);

    cout<<endl;
    cout<<"\nInorder traversal is:";
    obj.InOrder(p);

    cout<<"\n\nThe given tree is ";
    bool res=obj.isBST(p);
    if (res)
    {
        cout<<"a Binary Search tree.\n";
    }
    else
    {
        cout<<"not a Binary Search tree.\n";
    }
    


    return 0;
}