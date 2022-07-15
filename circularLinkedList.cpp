#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
}; struct node *head, *last;

void display(node* p){
    p = head;
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

void insert(int x, int pos){
    struct node* p = head;
    struct node* t;
    if(pos == 1){
        t=new node;
        t->data = x;
        t->next = head;
        last->next = t;
        head = t;
    }
    else {
    for(int i = 1; i<pos-1; i++){
        p = p->next;
    }
    t = new node;
    t->data = x;
    t->next = p->next;
    p->next = t;}

    // cout<<endl<<head->data;
}

int main(){
 vector<int> A = {2,3,4,5};
 create(A);
 insert(1,1);
 display(head);

}