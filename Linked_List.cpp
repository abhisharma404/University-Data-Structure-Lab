#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;
Node* temp;

void createLL(int x){

    if (head==NULL){

        cout<<"List is empty...inserting at the begining...";
        Node* n = new Node;
        int ele;
        cout<<"\nEnter the value of the element to be inserted...";
        cin>>ele;
        n->data = ele;
        head = n;
        temp = n;
        x -=1;
    }
    for(int i=0;i<x;i++){
        Node *n = new Node;
        int ele;
        cout<<"Enter the element to insert...";
        cin>>ele;
        n->data = ele;
        temp->next = n;
        temp = n;
    }

}

void printLL(){

    cout<<"\n\nPRINTING LIST...";
    temp = head;
    while(temp!=NULL){

        cout<<temp->data<<" | "<<temp->next<<" ";
        temp = temp->next;

    }
    cout<<"\nList traversed and printed...";
}

void deleteBeg(){

    cout<<"\n\nDeleting from the begining\n";
    if (head==NULL){
        cout<<"List is empty!...";
        return;
    }
    temp = head;
    temp = temp->next;
    head = temp;
}
void deleteEnd(){

    cout<<"\n\nDeleting from the end";
    Node* previous;
    temp = head;
    while(temp->next!=NULL){
        previous = temp;
        temp = temp->next;
    }
    previous->next = NULL;
    free(temp);
}
void searchLL(int x){

    int flag = 0;
    Node* previous;
    cout<<"\n\nSearching for..."<<x;
    temp = head;
    while(temp->next!=NULL){

        previous = temp;
        //If found at the beginning
        if (previous->data == x){
            cout<<"\nFound at..."<<head;
            flag = 1;
            break;
        }
        temp = temp->next;
        if(temp->data == x){
            cout<<"\nFound at..."<<previous->next;
            flag = 1;
            break;
        }

    }
    if (flag!=1){
        cout<<"\nElement "<<x<<" not found in the linked list...";
        }
}

int main(){

    cout<<"\t\tWelcome to the Linked List program...";
    int n;
    cout<<"\nEnter the length of the linked list...";
    cin>>n;
    createLL(n);
    printLL();
    deleteBeg();
    printLL();
    deleteEnd();
    printLL();
    searchLL(4);
    return 0;
}
