#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class node{
    public: 
    int data;
    node* next;
};
class Stack{
    public: node* top;
            Stack(){top = NULL;};
            void push(char x);
            char pop();
            void display(node* p);
            int isOperand(char x);
            int prec(char x);
};

void Stack::push(char x){
    node* t = new node;
    if(t==NULL) cout<<"Stack Overflow\n";
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop(){
    if(top == NULL) return 0;
    else{
        node* p;
        char x;
        x = top->data;
        p = top;
        top = top->next;
        free(p);
        return x;
    }
}
int Stack::isOperand(char x){
    if(x == '+' || x == '-' || x == '*' || x=='/') return 0;
    else return 1;
}

int Stack::prec(char x){
    if(x == '+' || x == '-') return 1;
    else if(x == '*' || x == '/') return 2;
    return 0;
}
char* infix2Postfix(char * infix){
    struct Stack st;
    char* postfix = new char[strlen(infix)+1];
    int i = 0, j = 0;
    while(infix[i] = '\0'){
        if (st.isOperand(infix[i])) postfix[j++] = infix[i++];
        else{
            if(st.prec(infix[i])>st.prec(st.top->data)) 
                st.push(infix[i++]);
            else 
                postfix[j++] = st.pop();
        }
    }
    while(st.top != NULL){
        postfix[j++] = st.pop();
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char* exp = "a+b*c-d/e";
    int i = 0;
    cout<<infix2Postfix(exp);
   
    return 0;
}