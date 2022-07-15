#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
}; struct node *head;

void display(node* p){
    p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }    while(p!=head);

}

void create(vector<int> A){
    struct node *t, *last;
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

int main(){
 vector<int> A = {1,2,3,4,5};
 create(A);
 display(head);

}