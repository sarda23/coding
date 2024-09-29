#include <iostream>
using namespace std;
int sum(int);

int sum(int num)
{
    int ans = 0;
    if (num <= 1)
        return 1;
    ans = num + sum(num - 1);
    return ans;
}
int main()
{
    int num = 11, ans = 0;

    cout << " the sum of natural number is = " << sum(num);

    return 0;
}