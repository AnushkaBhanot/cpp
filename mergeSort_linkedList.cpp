#include<bits/stdc++.h>
using namespace std;

class Node //Link list node
{
    public:
    int data;
    Node* next;
};

Node* SortedMerge(Node* a, Node* b);
void frontBackSplit(Node* source, Node** frontRef, Node** backRef);

void mergeSort(Node** headRef) //sorts linked list by changing next pointer not data
{
    Node* head= *headRef;
    Node* a;
    Node* b;

    if((head==NULL) || (head->next==NULL)) //base case -- lendth 0 or 1
     return;

    frontBackSplit(head,&a,&b); //split head into 'a' & 'b' sublists

    //Recursively sort sublists
    mergeSort(&a);
    mergeSort(&b);

    //merge 2 sorted lists together
    *headRef= SortedMerge(a,b);
}

Node* SortedMerge(Node* a, Node* b)
{
    Node* result= NULL;

    //Base cases
    if(a==NULL)
     return(b);
    else if(b==NULL)
     return(a);

    //Pick either a or b and recur
    if(a->data <= b->data)
    {
        result=a;
        result->next= SortedMerge(a->next, b);
    }
    else
    {
        result=b;
        result->next= SortedMerge(a, b->next);
    }
    return(result);
}

// Split the nodes of the given list into front and back halves, and return the two lists using the reference parameters.
// If the length is odd, the extra node should go in the front list. Uses the fast/slow pointer strategy.
void frontBackSplit(Node* source, Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    slow= source;
    fast= source->next;

    //advance fast 2 nodes, advance slow 1 node
    while(fast != NULL)
    {
        fast= fast->next;
        if(fast != NULL)
        {
            slow= slow->next;
            fast= fast->next;
        }
    }

    //slow is before midpoint in the list so split it in 2 at that point
    *frontRef= source;
    *backRef= slow->next;
    slow->next= NULL;
}

void printList(Node* node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node= node->next;
    }
}

//Funcn to insert a node at beginning of linked list
void push(Node** head_ref, int new_data)
{
    Node* new_node= new Node(); //allocate node
    new_node->data= new_data; //put in the data
    new_node->next= (*head_ref); //link old list off new node
    (*head_ref)= new_node;
}

int main()
{
    //start with empty list
    Node* res= NULL;
    Node* a= NULL;

    push(&a,15);
    push(&a,10);
    push(&a,5);
    push(&a,20);
    push(&a,3);
    push(&a,2);

    mergeSort(&a);
    cout<<"Sorted Linked List: "<<endl;
    printList(a);
    return 0;
}
