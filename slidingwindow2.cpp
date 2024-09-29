#include<iostream>
using namespace std;

int smallestsubarray(int targetsum, int arr[]){
       int minwindowsize=INT_MAX;
       int currentwindowsum=0;
       int windowstart=0;
       for(int windowend=0; windowend<10 ; windowend++){
           currentwindowsum+=arr[windowend];

           while(currentwindowsum >= targetsum){
               minwindowsize = min(minwindowsize, windowend-windowstart+1);
               currentwindowsum -= arr[windowstart];
               windowstart++;
           }
       }

        return minwindowsize;
}


int main(){
    int arr[]={4,2,2,7,8,1,2,8,10};
    int targetsum=8;
    cout<<smallestsubarray(targetsum , arr);
    return 0;
}