#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class queue{
    public:
    node* head;
    node* tail;
    int size;
    queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        node* temp=new node(val);
       if(size==0) head=tail=temp;
       else{
        tail->next=temp;
        tail=temp;
       }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"queue is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"queue is empty! ";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"queue is empty! ";
            return -1;
        }
        return tail->val;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int sizee(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}