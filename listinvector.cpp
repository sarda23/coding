#include <iostream>
#include <list>
using namespace std;

// list
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{

    list<int> list1; // lists of zero length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // removing elements of the lists
    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(9);

 // soritng the list
   // list1.sort();
    display(list1);

   

    list<int> list2(3); // empty list of size eleven
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

     list1.merge(list2);
     cout <<" list1 after merging :";
     display(list1);

     // reversing the list

     list1.reverse();
     display(list1);

    return 0;
}