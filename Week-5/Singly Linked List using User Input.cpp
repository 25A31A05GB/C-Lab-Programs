#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){

    int n,value;
    Node *head=NULL,*temp=NULL,*newNode;

    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        newNode = new Node();

        cout<<"Enter value: ";
        cin>>value;

        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }

    temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL";

    return 0;
}
