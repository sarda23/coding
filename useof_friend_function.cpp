#include <bits/stdc++.h>
using namespace std;
class a{
private:
	a(){
		cout<<"constructor of a "<<endl;
	}
	friend class b;
};
class b{
public:
	b(){
		a a1;
		cout<<"constructor of b"<<endl;
	}
};
int main(){
	b b1;
	return 0;
}