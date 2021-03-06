#include <iostream>
#include<cstring>
#include <stack>

using namespace std;
 
int isOperand(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/' ||
        x == '^' || x == '(' || x == ')'){
        return 0;
    }
    return 1;
}
 

 
int isOperator(int a, int b, char x){
    if (x == '+' ){
        return (a+b);
    }
        
    else if  (x == '-')
        return (a-b);
    else if (x == '*') { 
        // cout<<"hi";
        return (a*b); 
    }
        
    else if ( x == '/') 
        return (a/b);
    
    return -1;
}

 
void convert(char* infix){
 
    stack<int> stk;
 
    int i = 0;
 
    while (infix[i] != '\0'){

    
        
        if (isOperand(infix[i])){
            stk.push(infix[i]-48);
            i++; 
        } 
        else {

            int b = stk.top(); cout<<"b : "<<b<<endl;
            stk.pop();
            int a = stk.top(); cout<<"a :"<<a<<endl;
            stk.pop();
            int res = 0;
            res = isOperator(a,b,infix[i]); cout<<"res : "<<res<<endl;
            stk.push(res); 
            i++;
        }
    }
 
    while (! stk.empty()){
        cout<<stk.top();
        stk.pop();
    } 
}
 
 
int main() {
 
    char* infix = "35*62/+4-";
 
    convert(infix);
    return 0;
 
}