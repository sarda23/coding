
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
 
    if (n1 != n2)
        return false;
 
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}
 
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    if (areAnagram(str1, str2))
        cout <<
        "Strings are anagrams of each other.";
    else
        cout << "Strings are not anagrams of each other.";
    return 0;
}