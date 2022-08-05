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
 
    // if (p->lchild == nullptr && p->rchild == nullptr){
    //     if (p == root){
    //         root = nullptr;
    //     }
    //     delete p;
    //     return nullptr;
    // }
 
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
    return 0;
}