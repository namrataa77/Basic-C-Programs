#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class node{
    public : 
    int data;
    node *next;
};

class Stack{
    public: 
            node* top;
            Stack(){top = NULL;}
            void push(int x);
            int pop();
            void display(node *p);
};

void Stack::push(int x){
    node *t = new node;
    if(t == NULL) cout<<"Stack Overflow";
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop(){
    node *p;
    int x = -1;

    if(top == NULL) return -1;
    else{
        p = top;
        top = top->next;
        x = p->data;
        free(p);
    }
    return x;

 }

 void Stack::display(node *p){
    p = top;
    cout<<endl;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
 }

int main()
{
    cout<<"Stack program starts here -> "<<endl;
    Stack stk;
    node* p;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.display(p);
    cout<<endl<<"Popped element : "<<stk.pop();
    stk.display(p);
    return 0;
}