#include <iostream>
using namespace std;

class node
{
public:
    int key;
    int data;
    node *next;

    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class circularlinkedlist
{
public:
    node *head;
    circularlinkedlist()
    {
        head = NULL;
    }
    // 1. check if the node exists
    node *nodeexist(int k)
    {

        node *temp = NULL;
        node *ptr = head;
        if (ptr == NULL)
            return temp;
        else
        {
            do
            {

                if (ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;

            } while (ptr != head);
            return temp;
        }
    }

    void appendnode(node *n)
    {
        if (n != NULL)
        {
            cout << "node already exists with the key value: " << n->key << " . apend another node with different key values " << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                n->next = head;
                cout << " node appended at the first head postion " << endl;
            }
            else
            {
                if (head == NULL)
                {
                    head = n;
                    n->next = head;
                    cout << " node appended at the first head postion" << endl;
                }
                else
                {
                    node *ptr = head;
                    while (ptr->next != head)
                        ptr = ptr->next;
                    ptr->next = n;
                    n->next = head;
                    cout << "node appended" << endl;
                }
            }
        }
    }
    //3. prepend node attach a node at the start
    void prependnode(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << " node already exists with the key value :" << n->key << ". append another node with diffrent key value" << endl;
        }
        else
        {
            node *ptr = head;
            while ((ptr->next) != head)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = head;
            head = n;
            cout << " node prepended" << endl;
        }
    }

    //4. insert a node after a particular node in the list
    void insertnode(int k, node *n)
    {
        node *ptr = nodeexist(k);
        if (ptr == NULL)
            cout << " no node exists with key value of :" << endl;
        else
        {
            if (nodeexist(n->key) != NULL)
            {
                cout << "node already exists with the key value "
                     << n->key << ". append another node with different key value" << endl;
            }
            else
            {
                if (ptr->next == head)
                {
                    n->next = head;
                    ptr->next = n;
                    cout << "node inserted at the end" << endl;
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "node inserted in between " << endl;
                }
            }
        }
    }

    //delete node by key value
    void deletenodebykey(int k)
    {
        node *ptr = nodeexist(k);
        if (ptr == NULL)
        {
            cout << "no node exists with the key value of : " << k << endl;
        }
        else
        {
            if (head == NULL)
            {
                cout << "singly linked list already empty. can't delete" << endl;
            }
            else if (ptr == head)
            {
                if (head->next == NULL)
                {
                    head = NULL;
                    cout << " head node unlinked... list empty" << endl;
                }
                else
                {
                    node *ptr1 = head;
                    while (ptr1->next != head)
                    {
                        ptr1 = ptr1->next;
                    }
                    ptr1->next = head->next;
                    head = head->next;
                    cout << "node unlinked with key value :" << k << endl;
                }
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }

                prevptr->next = temp->next;
                cout << "node unlinked with the key value :" << k << endl;
            }
        }
    }

    //6. update
    void updatenode(int k, int data)
    {
        node *ptr = nodeexist(k);

        if (ptr != NULL)
        {
            ptr->data = data;
            cout << "node updated " << endl;
        }
        else
        {
            cout << " node doesn't exist with the key value :" << k << endl;
        }
    }
    //7. print
    void print()
    {
        if (head == NULL)
        {
            cout << " list is empty" << endl;
        }
        else
        {
            cout << " head address :" << head << endl;
            cout << " singly linked list value : " << endl;
            node *temp = head;
            do
            {
                cout << "(" << temp->key << "," << temp->data << "," << temp->next << ") --> " << endl;
                temp = temp->next;

            } while (temp != head);
        }
    }
};

int main()
{

    return 0;
}