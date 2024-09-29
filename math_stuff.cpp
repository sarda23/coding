#include<iostream>

struct rect{
    double len;
    double width;
};

double area(double len,double width){
    return len*width;
}
double area(double len){
    return len*len;
}
double area(rect recta){
    return recta.len*recta.width;
}
int main(){

    rect rectagle;
    rectagle.len = 10;
    rectagle.width = 20;
    
    std::cout<<area(rectagle.len,rectagle.width);
    std::cout<<std::endl;
    std::cout<<area(rectagle.len);
    std::cout<<std::endl;
    std::cout<<area(rectagle);
    return 0;
}