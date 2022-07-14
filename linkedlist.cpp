#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *first, *last;



node* sortList(struct node* p){
    p = first;
    struct node* q;
    while(p){
        q = p;
        p=p->next;
        cout<<endl<<q->data<<" "<<p->data;
        if(p!=NULL && p->data < q->data){
            q->next = p->next;
            p->next = q;
        }
    }
    return first;
}

int isSorted(struct node* p){
    p = first;
    struct node* q;
    while(p){
        q = p;
        p = p->next; 
        if(q->data > p->data) return 0;
    }
    return 1;
}

int search(struct node *p, int x){
    p = first;
    while(p){
        if(p->data == x) return 1;
        p = p->next;

    }
    return 0;
}

int max(struct node *p){
    p = first;
    int max = p->data;
    while(p){
        if(p->data > max){
            max = p->data;
        }
        p = p->next;

    }
    return max;

}

int sum(struct node *p){
    p = first;
    int sum = 0;
    while(p){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int count (struct node *p){
    p = first;
    int c= 0;
    while(p){
        p = p->next;
        c++;
    }
    return c;
}

int deleteNode( int index){
    struct node *q, *p;
    int x = -1;
    
    if(index < 1 || index>count(first))
    return -1;
    if(index == 1){
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    } 
    else {
        p = first;
        for(int i = 0; i < index-1; i++){
            q = p;
            p = p->next; 
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}
void sortedInsert(int x){
    struct node *p, *t, *q = NULL;
    t = new node;
    t->data = x;
    p = first;
    
    if(first == NULL) first = t;
    else{
        while(p && p->data < x){
            q = p;
            p = p->next;
        }
        if( p == first){
            t->next = first;
            first = t;
        }
        else{
        t->next = q->next;
        q->next = t; }
        
    }

}
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
void display(struct node* ptr){
   ptr = first;
   while (ptr != NULL) {
      cout<<endl<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

void reverseList(node* p){
    p = first;
    struct node* q = NULL, *r = NULL;
    while(p){                           //sliding 3 pointers together
    r = q;
    q = p; 
    p = p->next;
    q->next = r;
    }
    first = q;
    display(first);

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
    insertLast(1);
    insertLast(2);
    insertLast(3);
    insertLast(4);
    insertLast(5);

    // cout<<"\n deleted node : "<<deleteNode(4)<<endl;
    // cout<<"\n number of nodes : "<<count(p)<<endl;
    // cout<<"\n sum is : "<<sum(p)<<endl;
    // cout<<"\n max is : "<<max(p)<<endl;
    // cout<<"\n search result: "<<search(p,10)<<endl;
    // cout<<"\n isSorted result : "<<isSorted(p)<<endl;
    display(p);
    reverseList(p);
    return 0;
}