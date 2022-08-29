#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int val)
    {
        cout << " Node Created " << endl;
        this->data = val;
        next = NULL;
    }

    int getData()
    {
        return this->data;
    }

    Node *getNext()
    {
        return this->next;
    }

    void setNext(Node *nd)
    {
        this->next = nd;
    }
};

class LinkedList
{
private:
    Node *head = NULL;
    int len = 0;

public:
    LinkedList()
    {
        cout << " Linkedlist Created " << endl;
    }

    void insertAtBeg(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->setNext(head);
            head = newnode;
        }
        len++;
        cout << " Insertion at Beginning successful " << endl;
    }

    int findMiddleofLL()
    {
        Node *p1, *p2;
        p1 = p2 = head;
        while (p2 != NULL && p2->getNext() != NULL)
        {
            p2 = p2->getNext()->getNext();
            p1 = p1->getNext();
        }
        return p1->getData();
    }

    void printLL()
    {
        cout << " Start Printing " << endl;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->getData() << " ";
            temp = temp->getNext();
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtBeg(12);
    ll.insertAtBeg(23);
    ll.insertAtBeg(34);
    ll.insertAtBeg(45);
    ll.insertAtBeg(56);
    ll.printLL();
    cout << ll.findMiddleofLL() << endl;

    return 0;
}