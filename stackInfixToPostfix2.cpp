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
            int newPrec(char x);
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
    if( x == '+' || x == '-' || x == '*' || x=='/' || x == '^' || x == '(' || x == ')') return 0;
    else return 1;
}

int Stack::prec(char x){
    if(x == '+' || x == '-') return 1;

    else if(x == '*' || x == '/') return 3;
    else if(x == '^') return 6;
    else if(x == '(' ) return 7;
    else if(x == ')' ) return 0;
    return 0;
}
int Stack::newPrec(char x){
    if(x == '+' || x == '-') return 2;

    else if(x == '*' || x == '/') return 4;
    else if(x == '^') return 5;
    else if(x == '(' ) return 0;
    return 0;
}
char* infix2Postfix2(char* infix){
    struct Stack st;
    int len = strlen(infix);
    char* postfix = new char[len+1];
    int i = 0, j = 0;
    
    
    while(infix[i] != '\0'){
       
        if (st.isOperand(infix[i])) {
            postfix[j++] = infix[i++]; 
            }
        else{
            
            if(st.top == NULL) st.push(infix[i++]);
            else {
                if(infix[i]=='('){
                st.push(infix[i++]);
                
                
                }
                else if(infix[i] == ')'){
                    
                    while((st.newPrec(st.top->data) >= st.prec(infix[i])) || (st.top != NULL)){

                        if(st.newPrec(st.top->data) != st.prec(infix[i])){
                            
                            postfix[j++] = st.pop();
                        }
                        else{
                            st.pop();
                            i++;
                            
                        }
                    }
                }
                else if(st.prec(infix[i])>st.newPrec(st.top->data)) {
                    st.push(infix[i++]); 
                }
                else 
                postfix[j++] = st.pop();
            }
            
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
    char* exp = "((a+b)*c)-d^e^f";
    cout<<infix2Postfix2(exp);
   
    return 0;
}