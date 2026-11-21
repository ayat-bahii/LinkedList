#include <iostream>
#include "linkedlist.h"
using namespace std;

int main(){
    LinkedList l;
    l.add(30);
    l.add(10);
    l.display();
    cout<<"==================\n";
    l.insertAfter(30,100);
    l.display();
    cout<<"==================\n";
    l.insertBefore(100,50);
    l.display();
    cout<<"==================\n";
    cout<<l.getCount()<<"\n";
    cout<<"==================\n";
    int index=2;
    if(l.getDataByIndex(index)>-1){
      cout<<l.getDataByIndex(index);
    }
    else{
        cout<<"Index Not Found";
    }
    return 0;
}