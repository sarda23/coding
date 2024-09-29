#include<iostream>
using namespace std;
/* this point karta hai uss object ki taraf jisne
     uss ko execute kia uss member function ko jisme 
     aap hai 
     */
class aa{
      int a;
      public:
         void setdata(int a){    
                   this-> a = a;        
         }

         void getdata(){
             cout<<" the value of a is = "<<a<<endl;
         }
};


int main (){
           // this is a keyword which is a pointer which point to the
           //   object which invokes the member function
        aa a;
        a.setdata(4);
        a.getdata();
    
         return 0;

}