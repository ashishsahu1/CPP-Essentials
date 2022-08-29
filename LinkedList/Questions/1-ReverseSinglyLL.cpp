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

    void reverseLL()
    {
        Node *after = NULL;
        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL)
        {
            after = curr->getNext();
            curr->setNext(prev);
            prev = curr;
            curr = after;
        }

        head = prev;
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
    ll.reverseLL();
    ll.printLL();

    return 0;
}