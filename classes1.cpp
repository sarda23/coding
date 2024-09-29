#include<iostream>
using namespace std;



class employee
{
   private:
       int a,b,c;
   public:
        int d,e;
        void setdata( int a, int b, int c); // function declaration
        void getdata(){

            cout<<" the value of a is "<< a <<endl;
            cout<<" the value of b is "<< b <<endl;
            cout<<" the value of c is "<< c <<endl;
        } 


};
   void employee :: setdata( int a1, int b1, int c1)
   {
        a=a1;
        b=b1;
        c=c1;

   }
     


int main()
{
    employee sarda;
    sarda.d=34;
    sarda.e=33;
    //sarda.a=3466;
    sarda.setdata(1,2,4);
    sarda.getdata();


    return 0;
}