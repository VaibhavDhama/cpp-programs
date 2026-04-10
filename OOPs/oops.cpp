#include<iostream>
using namespace std;

class player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }

    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    player vaibhav;
    vaibhav.setScore(90);
    vaibhav.setHealth(100);
    cout<<vaibhav.getScore();

}