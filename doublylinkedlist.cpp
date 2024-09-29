#include <iostream>
using namespace std;

class node
{
public:
    int key, data;
    node *next;
    node *previous;

    node()
    {
        key = 0;
        data = 0;
        next = NULL;
        previous = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class doublylinkedlist
{

public:
    node *head;

    doublylinkedlist()
    {
        head = NULL;
    }
    doublylinkedlist(node *n)
    {
        head = n;
    }

    // 1. check if node exists using the key value
    node *nodeexist(int k)
    {

        node *temp = NULL;
        node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    //2. append a node to the list
    void appendnode(node *n)
    {
        if (nodeexist(n->key) != NULL)
        {
            cout << "node already exist with key value :" << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << " node appended " << endl;
            }
            else
            {
                node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                n->previous = ptr;
                cout << "node appended " << endl;
            }
        }
    }
    // prepend node
    void prependnode(node *n)
    { // pass by address
        if (nodeexist(n->key) != NULL)
        {
            cout << "node already exist with key value :" << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << " node prepended " << endl;
            }
            else
            {
                head->previous = n;
                n->next = head;
                head = n;
                cout << "node prepended" << endl;
            }
        }
    }

    // 4. insert a node after a particular key in the list
    void insertnodeafter(int k, node *n)
    {
        node *ptr = nodeexist(k);
        if (ptr == NULL)
            cout << "no node exists with key " << k << endl;
        else
        {
            if (nodeexist(ptr->key) != NULL)
            {
                cout << "node already exists with the key value " << n->key << endl;
            }
            else
            {

                node *nextnode = ptr->next;
                // inserting at the end
                if (nextnode == NULL)
                {
                    ptr->next = n;
                    n->previous = ptr;
                    cout << " node inserted at the end" << endl;
                }
                //inserting in between
                else
                {
                    n->next = nextnode;
                    nextnode->previous = n;
                    n->previous = ptr;
                    ptr->next = n;
                    cout << " node inserted in between" << endl;
                }
            }
        }
    }

    // 5. delete a node by key
    void deletenodebykey(int k)
    {

        node *ptr = nodeexist(k);

        if (ptr == NULL)
        {
            cout << "no node exists with the key value :" << k << endl;
        }

        else
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "node unlinked with keys value" << endl;
            }
            else
            {
                node *nextnode = ptr->next;
                node *previous = ptr->previous;
                //deleting at the end
                if (nextnode == NULL)
                {
                    previous->next = NULL;
                    ptr->previous = NULL;
                    cout << "node deleted at the end" << endl;
                }

                // delettion in between
                else
                {
                    previous->next = nextnode;
                    nextnode->previous = previous;
                    ptr->previous = NULL;
                    ptr->next = NULL;
                    cout << "node deleted in between" << endl;
                }
            }
        }
    }

    //6. update node

    void updatenodebykey(int k, int d)
    {
        node *ptr = nodeexist(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "node data updated" << endl;
        }
        else
        {
            cout << "node doesn't exist with the key value" << endl;
        }
    }

    // 7. print
    void print()
    {
        if (head == NULL)
        {
            cout << "no nodes in the doubly linked list" << endl;
        }
        else
        {
            cout << " doubly linked list values" << endl;
            node *temp = head;
            while (temp != NULL)
            {
                cout << " (" << temp->key << " , " << temp->data << ")" << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    doublylinkedlist s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "what operation do you want to perform? select option number. enter 0 to exit." << endl;
        cout << "1. appendnode()" << endl;
        cout << "2. prependnode()" << endl;
        cout << "3. insertnodeafter" << endl;
        cout << "4. deletenodebykey()" << endl;
        cout << "5. updatenode()" << endl;
        cout << "6. print()" << endl;
        cout << "7. clear screen " << endl;

        cin >> option;

        node *n1 = new node(); // creating an obj n1(pointer) in heap memory gobal scope last throughtout the program

        switch (option)
        {
        case 0: /* constant-expression */
            /* code */

            break;
        case 1:
            cout << "append node operation \n enter key & data of the node to be apended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendnode(n1);
            //cout<<n1.key<<" =" << n1.data<<endl;
            break;
        case 2:
            cout << "prepend node operation \n enter key &data" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependnode(n1);
            break;
        case 3:
            cout << "insert node operation \n enter key of existing node after which you want to insert this new node" << endl;
            cin >> k1;
            cout << "enter key and data of the new node first : " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.insertnodeafter(k1, n1);
            break;
        case 4:
            cout << "delete node by key operation -\n enter key of the node to be deleted :" << endl;
            cin >> k1;
            s.deletenodebykey(k1);
            break;
        case 5:
            cout << "update node by the key operation - \nenter key & new data to be updated " << endl;
            cin >> key1;
            cin >> data1;
            s.updatenodebykey(key1, data1);
            break;
        case 6:
            s.print();
            break;
        case 7:
            system("cls");
            break;

        default:
            cout << " enter proper option number" << endl;

            break;
        }
    } while (option != 0);

    return 0;
}