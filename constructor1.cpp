#include<iostream>
using namespace std;

class complex
{
     int a,b;

     public:

        complex(void);// constructor declaration

        void printdata()
        {

             cout<<" YOUR NUMBER IS " << a << " + " << b << "i"<<endl;

        }
};

complex :: complex(void)
{
          a=23;
          b=3;

}

int main (){

      complex o1;
      o1.printdata();

     return 0;
}