//
// Created by olmer on 6/19/2022.
//
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    explicit node(int val){
        data=val;
        next= nullptr;
    }
};

class queue {
    node *front;
    node *back;
public:
    queue() {
        front = nullptr;
        back = nullptr;
    }

    void push(int x) {
        node *n = new node(x);
        if (front == nullptr) {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    int peek(){
        if(front == nullptr){
            cout <<"no elements"<< endl;
            return -1;
        }
        return front->data;
    }
    void print(){
        node* temp=front;
        while(temp != nullptr){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        delete temp;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();
}