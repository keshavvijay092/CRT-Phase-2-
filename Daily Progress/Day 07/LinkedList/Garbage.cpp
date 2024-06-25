#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = 0;
        next=NULL;
    }
    Node(int data,Node* next)
    {
        this->data=  0;
        this->next = NULL;
    }
};

class LinkedList
{
    Node* head;
    public:

     LinkedList()
     {
        head = NULL;
     }
     void insertNode(int);
    //  void deleteNode(int);
     void printList();
    //  void searchElement(int val);
};

void LinkedList::printList()
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
void LinkedList::insertNode(int data)
{
    
}
int main()
{
    Node* temp = new Node(5);
    Node* temp  =new Node(10);   
    return 0;
}