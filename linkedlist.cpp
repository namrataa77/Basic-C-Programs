#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first, *last;
void insertLast(int x){
    node *t = new node;
    t->data = x;
    t->next = NULL;
    if(first == NULL){
        first = t;
        last = t;
    } else {
        last->next = t;
        last = t;
    }
}
void insert(int pos, int x){
    node *t, *p;
    if(pos == 0){
        t = new node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(pos>0){
        p = first;
        for(int i=0;i<pos-1 && p; i++){
            p = p->next;
        }
        if(p){
            t = new node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
void display(){
    struct node* ptr;
   ptr = first;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main()
{
    struct node *p;
    p = new node;
    // insert(0,2);
    // insert(1,3);
    // insert(2,4);
    // insert(3,5);
    // insert(4,6);
    insertLast(7);
    insertLast(7);
    insertLast(7);
    insertLast(7);
    insertLast(7);

    display();
    return 0;
}