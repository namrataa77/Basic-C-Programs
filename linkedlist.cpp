#include<iostream>
using namespace std;

struct node
{
    int data;
    struct Node *next;
};

int main()
{
    struct node *p;
    p = new node;
    p->data = 10;
    p->next = 0;
    return 0;
}