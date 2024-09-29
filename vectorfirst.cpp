#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{

    cout << " displaying this vector " << endl;
    // takes vector input int type and a reference of a integer vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    
    vector<int> vec4(6, 3); 
    display(vec4);      
  
    vector<int>vec2
        display(vec1);
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 566); // will insert 566  5 times 5 copy
    display(vec1);
*/
     cout<<vec4.size();
    
    return 0;
}