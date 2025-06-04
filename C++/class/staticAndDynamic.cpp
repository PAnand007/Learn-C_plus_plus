#include<iostream>

using namespace std;

class player{
    int health;
    int age;
    int score;
    bool alive;

    public:
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
        void setHealth(int health){
        this->health = health;

    }
        void setAge(int age){
        this->age = age;
    }
        void setScore(int score){
        this->score=score;
    }
        void setAlive(int alive){
        this->alive=alive;
    }
    void display(){
        cout<<age<<" :"<<alive<<":"<<health<<":"<<score<<endl;
    }

};
//outside
int sumScore(player a, player b){
    return a.getScore() + b.getScore();
}

//returning the class object itself

player getMax(player a, player b){
    if (a.getScore()>b.getScore()) return a;
    else return b;

    
}
int main(){
//complie time allocation
    player Aditya;
    Aditya.setHealth(100);
    Aditya.setAlive(1);
    Aditya.setScore(1000);
    Aditya.setAge(12);

    player Raju;
    Raju.setAge(15);
    Raju.setAlive(true);
    Raju.setHealth(20);
    Raju.setScore(50);

    //dynamic memory allocation run time allocation

    player *raj = new player;
    player rajObject = *raj;


    rajObject.setAge(12);
    raj->setAlive(1);
    cout<<raj->getAlive()<<endl;

    cout<<rajObject.getAge()<<endl;


    return 0;
}