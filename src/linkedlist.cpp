#include <iostream>
#include "linkedlist.h"
using namespace std;

LinkedList::LinkedList(){
    head=tail=NULL;
}
void LinkedList::add(int data){
    node* newNode=new node(data);
    if(head==NULL){
        head=tail=newNode;
        newNode->prev=NULL;
        newNode->next=NULL;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        newNode->next=NULL;
    }
}
void LinkedList::display(){
    node* current=head;
    if(current==NULL){
        cout<<"Linked List Empty\n";
    }
    else{
        while(current!=NULL){
            cout<<current->data<<"\n";
            current = current->next;
        }
    }
}

node* LinkedList::getNode(int data){
    node* current=head;
    while(current!=NULL){
        if(current->data==data){
            return current;
        }
        current=current->next;
    }
    return NULL;
}

void LinkedList::insertAfter(int data ,int afterData){
    node* wnode=getNode(data);
    if(wnode==NULL){
        cout<<"No Matching Data\n";
    }
    else{
        node* newNode=new node(afterData);
        node* B= wnode->next;

        newNode->prev=wnode;
        newNode->next=B;
        wnode->next = newNode;
        
        if(B!=NULL){
            B->prev=newNode;
        }
        else{
            tail=newNode;
        }
    }
}


void LinkedList::insertBefore(int data ,int beforeData){
    node* wnode=getNode(data);
    if(wnode==NULL){
        cout<<"No Matching Data\n";
    }
    else{
        node* newNode=new node(beforeData);
        node* B= wnode->prev;
        
        newNode->prev=B;
        newNode->next = wnode;
        wnode->prev = newNode;
        
        if(B!=NULL){
            B->next=newNode;
        }
        else{
            head=newNode;
        }
    }
}

int LinkedList::getCount(){
    node* current=head;
    int count=0;
    if(current==NULL){
        return 0;
    }
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}

int LinkedList::getDataByIndex(int index){
    node* current=head;
    int count=0;
    while(current!=NULL){
        if(count==index){
            return current->data;
        }
        count++;
        current=current->next;
    }
    return -1;
}
