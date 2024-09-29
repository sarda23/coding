#include <iostream>
using namespace std;

class node
{
public:
    int key, data; // key is unique
    node *next;    // pointer of type node which therefore can point to the same type

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

class singlylinkedlist
{
public:
    node *head;

    singlylinkedlist()
    {
        head = NULL;
    }
    singlylinkedlist(node *n)
    {
        head = n;
    }
    // check if node exist with the help of key value
    node *nodeexist(int k)
    { // function which returns a pointer
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
            n->next = head;
            head = n;
        }
    }

    // insert a node after a perticular node in the linked list
    void insertnodeafter(int k, node *n)
    { // k is the key value after which we want to aatach the new node i.e n
        node *ptr = nodeexist(k);
        if (ptr == NULL)
        {
            cout << " no node exist with the key value k" << endl;
        }
        else
        {
            if (nodeexist(n->key) != NULL)
            {
                cout << "node already exist with key value :" << n->key << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << " node inserted" << endl;
            }
        }
    }

    void deletenodebykey(int k)
    {
        if (head == NULL)
        {
            cout << " empty linked list" << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << " node unlinked with keys value : " << k << endl;
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node *currentptr = head->next;
                while (currentptr->key == k)
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
                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "node unlinked with key value: " << k << endl;
                }
                else
                {
                    cout << "node doesn't exist with the key value : " << k << endl;
                }
            }
        }
    }

    // update node
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

    // display
    void print()
    {
        if (head == NULL)
        {
            cout << "no nodes in the singly linked list" << endl;
        }
        else
        {
            cout << " singly linked list values" << endl;
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
    singlylinkedlist s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << " what operation do you want to perform? select option number. enter 0 to exit." << endl;
        cout << "1. appendnode()" << endl;
        cout << "2. prependnode()" << endl;
        cout << "3. insertnodeafter" << endl;
        cout << "4. deletenodebykey()" << endl;
        cout << "5. updatenode()" << endl;
        cout << "6. print()" << endl;
        cout << "7. clear screen " << endl;
        cin >> option;
        node *n1 = new node();

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