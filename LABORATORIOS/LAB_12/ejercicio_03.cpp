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

    void pop(){
        if(front == nullptr){
            cout <<"empty queue"<< endl;
            return;
        }
        node* todelete=front;
        front = front->next;
        delete todelete;
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
    bool search(int num){
        bool se{false};
        node* temp=front;
        while(temp != nullptr){
            if(temp->data ==num)
                se=true;
            temp = temp->next;
        }
        delete temp;
        return se;
    }
    void search_out(int num){
        if(search(num)){
            cout<<"Number: "<<num<<" is in the queue."<<endl;
        }else{
            cout<<"Number: "<<num<<" is not in the queue."<<endl;
        }
    }
    bool empty(){
        if(front == nullptr)
            return true;
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();
    q.search_out(3);
    q.search_out(6);
    return 0;
}


