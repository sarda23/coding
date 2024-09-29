#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k=1,m;
	int a[5]={1,2,3,4,5};
	i=++a[1];
	j=a[1]++;
	m=a[i++];
	printf("\n%d %d %d",i,j,m);
	getch();
}