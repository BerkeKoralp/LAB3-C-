#include <iostream>

using namespace std;

class Node {
public:int data;

Node *next;

Node(int data,Node* n){
    this->next=n;

this->data=data;}

};

class Stack{

Node* top;
int sizes;
int s;

Stack(int sizes){

top=nullptr;
s=0;
this->sizes=sizes;

}

void push(int datam){

 if (top==nullptr){
    top=new Node(datam,nullptr);
    s++;
 }

 else if(sizes==s){   cout << "\nStack Overflow";
        exit(1);}

    else{
        Node* temp=new Node(datam,top);
        top=temp;
        s++;
    }
                }

 Node* pop(){
    if(top==nullptr){
        cout<<"Bir þey yapaman gardaþ";
    return nullptr;

    }
    else
    {
        Node* temp=top;
        top->next=top;
        s--;
        return temp;

    }

 }

    int topcuk(){
        if(top==nullptr)
            return -1;


    return top->data;
    }

    bool isEmpty(){

    if(top==nullptr)
        return true;

    else return false;
    }

    int giveSize(){
    return s;
    }
};

int main()
{

  Stack* myStack=new Stack(5);


}


