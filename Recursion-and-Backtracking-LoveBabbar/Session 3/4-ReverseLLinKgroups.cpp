#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start ndoe
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void PrintItt(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *Reverse(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node *temp = head;
    Node *prev,*curr,*after;
    prev = NULL;
    curr = head;
    while(curr!=NULL){
        after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
    }
    return prev;
}

Node *KReverse(Node *head,int k){
    if(head == NULL){
        return NULL;
    }

    Node *prev, *curr, *after;
    prev = NULL;
    curr = head;
    int count = 0;
    while (curr != NULL && count<k)
    {
        after = curr->next;
        curr->next = prev;
        prev = curr;
        curr = after;
        count++;
    }
    if(after != NULL){
        head->next = KReverse(after,k);
    }

    return prev;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *root = new Node(55);
    head = tail = root;

    insertAtHead(head, 12);
    insertAtHead(head, 23);
    insertAtHead(head, 34);
    insertAtHead(head, 56);
    insertAtHead(head, 78);
    PrintItt(head);
    cout << endl
         << endl;

    head = Reverse(head);
    PrintItt(head);

    cout<<endl;
    int k =2;
    head = KReverse(head,k);
    PrintItt(head);


    return 0;
}