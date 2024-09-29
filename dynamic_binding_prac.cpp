// run time polymorphism 
// dynamic binding


#include <bits/stdc++.h>
using namespace std;
class base{
public:
	virtual void show(){
		cout<<"this is in base"<<endl;
	}
};
class derived:public base{
public:
	void show(){
		cout<<" this is in derived"<<endl;
	}
};
int main(){
	base *p=new derived;
	p->show();
	return 0;
}