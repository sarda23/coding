#include<iostream>
using namespace std;

int main(){
    int i=0;
    switch(i){
        case 0: i++;
        case 1: i=i++;
        case 2: ++i;
    }

    cout<<i++;
    return 0;
}