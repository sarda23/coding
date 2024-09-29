#include <iostream>
using namespace std;

class kirana
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {

        id = a;
        price = b;
    }
    void getdata()
    {

        cout << " code of the item is =" << id << endl;
        cout << " price of this item is =" << price << endl;
    }
};

int main()
{
    int size = 3;
    //int *ptr = &size;
    // int *ptr = new int [34];

    kirana *ptr = new kirana[size];
    kirana *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << " enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {

        cout << " item number : " << j + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}
