#include<iostream>
using namespace std;

struct Node{
    
    int data;
    Node* next;
    
};

    Node* head;

void insertBeg(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void printElements()
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
	cout<<" ";
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    int n;
    cout<<"Enter the number of values : ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"Enter the value...";
        cin>>x;
        insertBeg(x);
    }
    
    printElements();
    
    return 0;
}
