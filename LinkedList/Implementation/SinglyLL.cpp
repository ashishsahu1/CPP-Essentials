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

    void insertAtEnd(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (temp->getNext() != NULL)
            {
                temp = temp->getNext();
            }
            temp->setNext(newnode);
        }
        len++;
        cout << " Insertion at End successful " << endl;
    }

    void insetAtMid(int val, int pos)
    {
        if (pos > len - 1)
        {
            cout << "Insertion at position failed... Position out of bound... " << endl;
            return;
        }
        Node *newnode = new Node(val);
        int count = 1;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;
            while (count < pos - 1)
            {
                // cout<<count<<" ";
                temp = temp->getNext();
                count++;
            }
            newnode->setNext(temp->getNext());
            temp->setNext(newnode);
        }
        len++;
        cout << " Insertion at position successful " << endl;
    }

    void delAtBeg()
    {
        if (head == NULL)
        {
            cout << " Empty List " << endl;
            return;
        }
        Node *temp = head;
        head = head->getNext();
        cout << temp->getData() << " Deleted successfully " << endl;
        free(temp);
        len--;
    }

    void delAtEnd()
    {
        if (head == NULL)
        {
            cout << " Empty List " << endl;
            return;
        }
        Node *temp = head;
        while (temp->getNext()->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        Node *delNode = temp->getNext();
        temp->setNext(NULL);
        cout << delNode->getData() << " Deleted successfully " << endl;
        free(delNode);
        len--;
    }

    void delAtMid(int pos)
    {
        int count = 1;
        if (pos > len - 1)
        {
            cout << " Deletion at position failed... Position out of bound... " << endl;
            return;
        }
        if (head == NULL)
        {
            cout << " List Empty " << endl;
        }
        else
        {
            Node *temp = head;
            while (count < pos - 1)
            {
                // cout<<count<<" ";
                temp = temp->getNext();
                count++;
            }
            Node *delN = temp->getNext();
            temp->setNext(temp->getNext()->getNext());
            cout << delN->getData() << " Deleted successfully" << endl;
        }
        len--;
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
    ll.delAtBeg();
    ll.delAtBeg();
    ll.printLL();
    ll.insertAtEnd(78);
    ll.insertAtEnd(89);
    ll.printLL();
    ll.delAtEnd();
    ll.printLL();
    ll.insetAtMid(101, 2);
    ll.insetAtMid(121, 3);
    ll.printLL();
    ll.delAtMid(4);
    ll.printLL();
    return 0;
}