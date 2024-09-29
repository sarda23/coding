#include <iostream>
using namespace std;

class queue
{
private:
    int f, r, arr[5];

public:
    queue()
    {
        f = -1;
        r = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (f == -1 && r == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (r == 4)
            return true;
        else
            return false;
    }
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << " queue is full" << endl;
            return;
        }
        else if (isEmpty())
        {
            r = 0;
            f = 0;
            arr[r] = value;
        }
        else
        {
            r++;
            arr[r] = value;
        }
    }
    int dequeue()
    {
        int x;
        if (isEmpty())
        {
            cout << " queue is empty" << endl;
            return 0;
        }
        else if (f == r)
        {
            x = arr[f];
            arr[f] = 0;
            r = -1;
            f = -1;
            return x;
        }
        else
        {
            x = arr[f];
            arr[f] = 0;
            f++;
            return x;
        }
    }
    int count()
    {
        return (r - f + 1);
    }
    void display()
    {
        cout << " the values in the queue is/are - " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    queue q1;
    int option, value;

    do
    {
        cout << " \n what operation dp you want to perform? select option number. enter 0 to exit." << endl;
        cout << "1. enqueue() " << endl;
        cout << "2. dequeue() " << endl;
        cout << "3. isEmpty() " << endl;
        cout << "4. is Full() " << endl;
        cout << "5. count() " << endl;
        cout << "6. display() " << endl;
        cout << "7. clear screen " << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            // just go out
            break;
        case 1:
            cout << " enter the item to enqueue in the queue" << endl;
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << " dequeue operation going on" << q1.dequeue() << endl;

            break;
        case 3:
            if (q1.isEmpty())
                cout << " queue is empty" << endl;
            else
                cout << "queue is not empty" << endl;
            break;
        case 4:
            if (q1.isFull())
                cout << " the queue is full" << endl;
            else
                cout << " queue is not full" << endl;

            break;
        case 5:
            cout << " count operation is called " << q1.count() << endl;
            break;
        case 6:
            cout << " the display function is called " << endl;
            q1.display();
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