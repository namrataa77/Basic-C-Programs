#include<iostream>
#include<bits/stdc++.h>
#include<stack>
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
        else r->rchild = p;
        
    }

}

void inorder(node *root){
    if(root){
        inorder(root->lchild);
        cout<<root->val<<" ";
        inorder(root->rchild);
    }

}
int Height(node *p) {
    int x;
    int y;
    if (p == nullptr){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
node* InPre(node *p) {
    while (p && p->rchild != nullptr){
        p = p->rchild;
    }
    return p;
}
 
node* InSucc(node *p) {
    while (p && p->lchild != nullptr){
        p = p->lchild;
    }
    return p;
}
 

struct node* Delete(struct node* p, int key){
    node* q;
 
    if (p == nullptr){
        return nullptr;
    }
 
    if (p->lchild == nullptr && p->rchild == nullptr){
        if (p == root){
            root = nullptr;
        }
        delete p;
        return nullptr;
    }
 
    if (key < p->val){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->val){
        p->rchild = Delete(p->rchild, key);
    } else {
        if (Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->val = q->val;
            p->lchild = Delete(p->lchild, q->val);
        } else {
            q = InSucc(p->rchild);
            p->val = q->val;
            p->rchild = Delete(p->rchild, q->val);
        }
    }
    return p;
}
 
void createPre(int* pre, int n){
    // Create root node
    int i = 0;
    root = new node;
    root->val = pre[i++];
    root->lchild = nullptr;
    root->rchild = nullptr;
    // Iterative steps
    node* t;
    node* p = root;
    stack<node*> stk;
 
    while (i < n){
        // Left child case
        if (pre[i] < p->val){
            t = new node;
            t->val = pre[i++];
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            stk.push(p);
            p = t;
        } else {
            // Right child cases
            if (pre[i] > p->val && pre[i] < stk.empty() ? 32767 : stk.top()->val){
                t = new node;
                t->val = pre[i++];
                t->lchild = nullptr;
                t->rchild = nullptr;
                p->rchild = t;
                p = t;
            } else {
                p = stk.top();
                stk.pop();
            }
        }
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
    insert(89);
    inorder(root);
    Delete(root,10);
    cout<<endl;
    inorder(root);
    cout>>endl;
    int pre[] = {30,20,10,15,25,40,50,45};
    int n = sizeof(pre)/sizeof(pre[0]);
    createPre(pre,n);

    return 0;
}