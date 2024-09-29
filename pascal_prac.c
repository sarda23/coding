#include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
char* getEncryptedNumber(int number_count,int*numbers);
int main()
{
    //cout<<"Hello World";
    int numbers[4]={4,5,6,7};
    cout<<getEncryptedNumber(4,numbers);

    return 0;
}

  char* getEncryptedNumber(int number_count,int*numbers){
    while(number_count > 2) {
        int vec[number_count-1];
        for (int i = 0; i < number_count-1 ; i ++) {
            vec[i]=(numbers[i]+numbers[i+1])%10;
        }
        numbers = vec;
        number_count-=1;
    }
    int sum = 0;
    char str[2];
    for(int i =0;i<number_count;i++) {
    sum+=numbers[i];
    str[i]=sum;
    }
    
    return str;

}