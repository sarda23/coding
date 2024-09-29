#include <iostream>
using namespace std;

int sumofnatural(int n)
{
  static int sum = 0;
  if (n <= 1)
    return n;
  else
    sum = n + sumofnatural(n - 1);

  return sum;
}

int main()
{
  int n;
  cout << " the sum of natural number n is  " << endl;
  cout << "enter the number " << endl;
  cin >> n;
  cout << sumofnatural(n);

  return 0;
}