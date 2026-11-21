#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>

struct node{
    int data;
    node*next;
    node*prev;
    node(int data){
        this->data=data;
        prev=next=NULL;
    }
};

class LinkedList{
   
    node*head;
    node*tail;
    node* getNode(int data);
    public:
    LinkedList();
    void add(int data);
    void display();
    void insertAfter(int data,int afterData);
    void insertBefore(int data,int beforeData);
    int getCount();
    int getDataByIndex(int index);
};

#endif