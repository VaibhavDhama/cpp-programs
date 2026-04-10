#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

    class Helmet{
        int hp;
        int level;

    public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
public:
    void setHealth(int health){
        this->health = health;
    }  
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAlive(int alive){
        this->alive = alive;
    } 
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        
    }

    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }   
};
int addScore(Player a,Player b){
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    Player harsh;
    Player raghav; // complile time, static allocation

    Player *vaibhav = new Player; // run time, dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    harsh.setHealth(70);
    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setAlive(true);
    harsh.setGun(akm);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setHealth(80);
    raghav.setAge(23);
    raghav.setScore(90);
    raghav.setAlive(true);
    raghav.setGun(awm);

    vaibhav->setHealth(50);

    cout<<vaibhav->getHealth()<<endl;
    cout<<addScore(harsh,raghav)<<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore();
}