#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void push(int x){
    if(rear == NULL){
        rear = new node;
        rear->data = x;
        rear->next = NULL;
        front = rear;
    }
    else{
        temp = new node;
        temp->data = x;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void pop(node* p){
    if(front == NULL) cout<<"queue underflow"<<endl;
    p = front;
    front = front->next;
    delete(p);
}

void display(){
    struct node* p = front;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    struct node* p = front;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop(p);
    pop(p);
    pop(p);
    display();

    return 0;
}