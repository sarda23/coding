#include<iostream>
#include<string>
#include<map>

using namespace std;


// map is an associative array
int main(){
          map<string, int> marksmap;
          marksmap["nishant"]=100;
          marksmap["reshma"]=65;
          marksmap["rahul"]=50;

          map<string, int> :: iterator iter;
          for(iter=marksmap.begin();iter!=marksmap.end();iter++){
              cout<<(*iter).first<<" " << (*iter).second << "\n";
          } 

           cout<<" the size is : = "<<marksmap.size()<<endl;
    return 0;
}