#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

void print_vector(vector<int>vec){

    for(int i=0;i<vec.size();i++){
        cout<<vec[i] <<"\t";
    }
    cout<<"\n";
}
void play_game(){

    vector<int> guesss;
    int count = 0;
    int random = rand() % 251;
    cout<<random<<endl;
    cout<<"guess the num"<<endl;

    while(true){
        int guess;
        cin>>guess;
        count++;
        guesss.push_back(guess);

        if(guess == random){
            cout<<"win"<<endl;
            break;
        }else if(guess < random){
            cout<<"too low"<<endl;
        }else{
            cout<<"too high"<<endl;
        }
    }

    std::ifstream input("best_score.txt");

    if(!input.is_open()){
        std::cout<<"unable to open"<<endl;
        return;
    }
    int best_score;
    input >> best_score;
   
    std::ofstream output("best_score.txt");
 
    if(!output.is_open()){
        std::cout<<"unable to open"<<endl;
        return;
    }

    if(count < best_score){
        output<<count;
    }else{
        output<<best_score;
    }
    print_vector(guesss);
}
int main(){
    srand(time(NULL));
    int choice;

    do{
        cout<<"0.Quit" << endl << " 1. play game\n";
        cin>>choice;

        switch(choice){
            case 0:
                cout<<"thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    }
    while(choice != 0);

    return 0;
}