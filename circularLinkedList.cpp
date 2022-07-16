#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
}; struct node *head, *last;

void display(node* p){
    p = head;
    cout<<endl;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }    while(p!=head);

}

void create(vector<int> A){
    struct node *t;
    head = new node;
    head->data = A[0];
    head->next=head;
    last = head;

    for(int i = 1; i<A.size(); i++){
        t = new node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void insert(vector<int> A, int x, int pos){
    struct node* p = head;
    struct node* t;
    t=new node;
    t->data = x;
    if(pos == 1){
        
        t->next = head;
        last->next = t;
        head = t;
    }
    else if(pos == A.size()){
        t->next = head;
        last->next = t;
        last = t;
        // int flag = 1;
        // cout<<endl<<flag;
    }
    else {
    for(int i = 1; i<pos-1; i++){
        p = p->next;
    }
    
    t->next = p->next;
    p->next = t;}

    // cout<<endl<<head->data;
}


int main(){
 vector<int> A = {1,2,3,4,5,6};
 create(A);
 insert(A,6,5);
 insert(A,8,6);
 display(head);

}