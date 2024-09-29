#include <iostream>
using namespace std;

// protected access

class base
{
protected: // like private but can be inherited
    int a;

private:
    int b;
};
/* for a protected member 
                          public derivation   private      protected 
    1. private  member    not inherit         not inherit  not inherit       
    2. protected member   protected           private      protected              
    3. public member      public              private      protected
  
 */

class derive : protected base
{
        

};

int main()
{
       base b;
       derive d;
      // cout<<d.a;   // will not work  cause a is protected in both base 
                    // as well as derived class
       
    return 0;
}