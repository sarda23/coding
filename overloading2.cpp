#include<iostream>

class pos{
    public:
        int x = 10;
        int y = 20;
        pos operator + (pos p){
            pos new_pos;
            new_pos.x = x + p.x;
            new_pos.y = y + p.y;

            return new_pos;
        }

        bool operator == (pos p){
            if(x == p.x && y == p.y)
                return true;

            return false;
        }
};

int main(){
    pos p1,p2;
    pos p3 = p1 + p2;
    // p2 will be passed as an argument
    std::cout<<p3.x<<"  "<<p3.y<<std::endl;
    
    
    if(p1 == p2){
        std::cout<<"they are the same!\n";
    }
   
    return 0;
}