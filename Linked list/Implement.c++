#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node *next;
    
    
    //default constructor
    Node()
    {
        data =0;
        next = NULL;
    }
    
    //Parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    Node * head;
    public:
    LinkedList()
    {
        head = NULL;
    }
    
    void insertNode(int);
    
    void deleteNode(int);
    
    void printNode();
};



void LinkedList :: insertNode(int data)
{
    Node* newNode = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = newNode;
    
}


void LinkedList:: deleteNode(int pos)
{
    if(head==NULL)
    {
        cout<<"list empty"<<endl;
        return;
    }
    
    Node* temp1 = head;
    Node* temp2;
    int length = 0;
     
     while(temp1!= NULL)
     {
         temp1 = temp1->next;
         length++;
     }
     
     if(length<pos)
     {
         cout<< "index out of bound" << endl;
         return;
     }
    temp1 = head;
    if(pos==1)
    {
        head = head->next;
        delete(temp1);
        return;
    }
    while(pos-->1)
    {
        temp2 = temp1;
        temp1= temp1->next;
    }
    temp2->next =  temp1->next;
    delete temp1;
    
}

void LinkedList :: printNode()
{
    Node* temp = head;
    if(head==NULL)
    {
        cout<<"No node is present"<<endl;
        return;
    }
    
    while(temp!=NULL)
    {
        cout<<temp->data<< " "<<endl;
        temp = temp->next;
    }
}

int main()
{
    LinkedList list;
    
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);
    list.insertNode(5);
    
    cout<<"The elements are : ";
    
    list.printNode();
    cout<<endl;
    
    list.deleteNode(2);
    cout<<"The elements are : ";
    
    list.printNode();
    cout<<endl;
    
    return 0;
    
}

