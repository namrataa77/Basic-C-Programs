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
            void push(char x);
            char pop();
            void display(node *p);
};

void Stack::push(char x){
    node *t = new node;
    if(t == NULL) cout<<"Stack Overflow";
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop(){
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
int isBalanced(char *exp){
    Stack s;
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i] == '(') 
            s.push(exp[i]);
        else if(exp[i] == ')'){
            if(s.top == NULL)
                return 0;
            else s.pop();
        }
    }
    if(s.top == NULL) return 1;
}
int main()
{
    char *exp = "((a+b)*(c+d)/(a/b))";
    cout<<isBalanced(exp);
    return 0;
}