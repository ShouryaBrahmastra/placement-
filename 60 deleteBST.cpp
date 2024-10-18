#include<iostream>
using namespace std;

struct tree {
    int data;
    struct tree *left;
    struct tree *right;   
};

struct tree* createnode(int data) {
    struct tree* t;
    t = (struct tree*) malloc(sizeof(struct tree));
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;
}

class TreeFunc {
public:
    // InOrder traversal
    void InOrder(struct tree* r) {
        if (r != NULL) {
            InOrder(r->left);
            printf(" %d ", r->data);
            InOrder(r->right);
        }
    }

    // Find the inorder predecessor (maximum node in the left subtree)
    struct tree* inorderPredecessor(struct tree* r) {
        r = r->left;
        while (r->right != NULL) {
            r = r->right;
        }
        return r;
    }

    // Function to delete a node from BST
    struct tree* deleteNode(struct tree* r, int value) {
        if (r == NULL) {
            return NULL;  // If the node is not found
        }

        // If the value to be deleted is smaller than the root's data, move to left subtree
        if (value < r->data) {
            r->left = deleteNode(r->left, value);
        }
        // If the value is larger, move to right subtree
        else if (value > r->data) {
            r->right = deleteNode(r->right, value);
        }
        // When the value matches
        else {
            // Case 1: Node with only one child or no child
            if (r->left == NULL) {
                struct tree* temp = r->right;
                free(r);
                return temp;
            } 
            else if (r->right == NULL) {
                struct tree* temp = r->left;
                free(r);
                return temp;
            }

            // Case 2: Node with two children: get the inorder predecessor
            struct tree* iPre = inorderPredecessor(r);
            r->data = iPre->data;  // Copy the in-order predecessor's data to this node
            // Delete the inorder predecessor
            r->left = deleteNode(r->left, iPre->data);
        }
        return r;
    }
};

int main() {
    /*
                  5[p]
            /             \
           3[p2]           7[p6]
         /      \        /      \ 
       2[p3]     4[p1]  6[p5]    8[p7]
     /
    1[p4]
    */
    struct tree* p = createnode(5);
    struct tree* p1 = createnode(4);
    struct tree* p2 = createnode(3);
    struct tree* p3 = createnode(2);
    struct tree* p4 = createnode(1);
    struct tree* p5 = createnode(6);
    struct tree* p6 = createnode(7);
    struct tree* p7 = createnode(8);

    p->left = p2;
    p->right = p6;
    p2->left = p3;
    p2->right = p1;
    p3->left = p4;
    p6->left = p5;
    p6->right = p7;

    cout << "\nOriginal tree:\n";
    TreeFunc obj;
    obj.InOrder(p);

    
    obj.deleteNode(p, 4);
    
    cout << "\nAfter deleting node 4:\n";
    obj.InOrder(p);

    return 0;
}
