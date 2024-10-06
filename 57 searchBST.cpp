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
        struct tree *SearchBST(struct tree *r,int key)
        {
            if (r==NULL)
            {
                return NULL;
            }
            if (key==r->data)
            {
                return r;
            }
            else if(key < r->data)
            {
                return( SearchBST(r->left,key));
            }
            else
            {
                return( SearchBST(r->right,key));
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
    
    int key;
    cout<<"\nEnter the element to be searched in BST: ";
    cin>>key;

    struct tree *found=obj.SearchBST(p,key);
    if (found!=NULL)
    {
        cout<<"\nElement "<<found->data<<" is present in BST";
        
    }
    else
    {
        cout<<"\nElement not present in BST.";   
    }
    
    


    return 0;
}