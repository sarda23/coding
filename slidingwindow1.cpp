#include<iostream>
#include<math.h>
using namespace std;

int maxsumsubarry(int a[], int k){
    int maxvalue = INT_MIN;
    int currentrunningsum = 0;

    for(int i =0; i< 10; i++){
        currentrunningsum+=a[i];
        if( i >= k-1 ){
            maxvalue = max(maxvalue, currentrunningsum);
            currentrunningsum -= a[i - (k-1)];
        }
    }
    return maxvalue;
}


int main(){
     int a[]={ 4,2,1,7,8,1,2,8,1,0};
     cout<<maxsumsubarry( a, 3);
    return 0;
}