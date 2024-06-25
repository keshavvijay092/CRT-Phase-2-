#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class Node
{
 public:
    int data;
    Node* next;

    Node()
    {
        // default constructor called 
        data = 0;
        cout<<" mai hu defauly hehe "<<endl;
    }
    Node(int data)
    {
        // paramertized constructor 
        this->data = data;
        next = NULL;
        cout<<"mai hu paramertized"<<endl;
    }
    Node(int data,Node* next)
    {
        this->data = data;
        this->next=  NULL;
    }
};
void PrintLL(Node* head)
{
    Node* temp = head;

    while(temp)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}
 
int GetLength(Node* head)
{
    int len =0;
    Node* temp = head;
    while(temp)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void inset
int main()
{
    // creation of static array
    // Node a;
    // dynamic allocation 
    // Node* head = new Node();

    Node* first=  new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth  = new Node(40);
    Node* fifth  = new Node(50);
    

    first->next = second;
    second->next=  third;
    third->next = fourth;
    fourth->next=  fifth;
    
    Node* head = first;
    cout<<"printing LL"<<endl;
    PrintLL(head);
    cout<<endl<<GetLength(head);
    return 0;
}

// class LinkedList
// {
//  Node* head;
//  public:
//     LinkedList()
//     {
//         head = NULL;
//     }

//     void printLL();
// };

// void LinkedList::printLL()
// {
//     Node* head = NULL;
// }