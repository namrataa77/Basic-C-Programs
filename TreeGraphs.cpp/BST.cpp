#include<iostream>
using namespace std;

struct node{
    int val;
    struct node *lchild;
    struct node *rchild;
} *root = NULL;

void insert(int key){
    struct node* t = root, *r = NULL, *p;
    if(root == NULL){
        p = new node;
        p->val = key;
        // cout<<p->val;
        p->rchild = NULL;
        p->lchild = NULL;
        root = p;
    }
    else{
    while(t){
        r = t;
        if(key == t->val) return;
        else if( key > t->val) t= t->rchild;
        else t = t->lchild;
    }
    p = new node;
    p->val = key;
    p->rchild = p->lchild = NULL;
    // cout<<p->val<<" ";
    if(p->val < r->val) r->lchild = p;
    else r->rchild = p;}

}

void inorder(node *root){
    if(root){
        inorder(root->lchild);
        cout<<root->val<<" ";
        inorder(root->rchild);
    }

}

int main()
{
    insert(10);
    insert(5);
    insert(20);
    insert(30);
    insert(8);
    insert(3);
    inorder(root);
    return 0;
}