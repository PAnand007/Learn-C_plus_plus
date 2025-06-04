
#include <iostream>
using namespace std;

// External Gun class
class Gun {
    int ammo;
    int damage;
    int scope;

public:
    void setAmmo(int ammo) { this->ammo = ammo; }
    void setDamage(int damage) { this->damage = damage; }
    void setScope(int scope) { this->scope = scope; }

    int getAmmo() { return ammo; }
    int getDamage() { return damage; }
    int getScope() { return scope; }

    void display() {
        cout << "Gun -> Ammo: " << ammo
             << ", Damage: " << damage
             << ", Scope: " << scope << endl;
    }
};

class Player {
    int health;
    int age;
    int score;
    bool alive;

    Gun* gun; // Pointer to external Gun object

public:
    // ✅ Nested Helmet class
    class Helmet {
        int protection;
    public:
        void setProtection(int p) { protection = p; }
        int getProtection() { return protection; }

        void display() {
            cout << "Helmet -> Protection Level: " << protection << endl;
        }
    };

private:
    Helmet helmet;

public:
    Player() : gun(nullptr) {} // initialize gun to nullptr

    void setHealth(int health) { this->health = health; }
    void setAge(int age) { this->age = age; }
    void setScore(int score) { this->score = score; }
    void setAlive(bool alive) { this->alive = alive; }

    void setGun(Gun* gunPtr) { gun = gunPtr; }
    void setHelmet(Helmet h) { helmet = h; }

    int getScore() { return score; }

    void display() {
        cout << "Player -> Age: " << age
             << ", Alive: " << (alive ? "Yes" : "No")
             << ", Health: " << health
             << ", Score: " << score << endl;

        if (gun) {
            gun->display();
        } else {
            cout << "Gun -> Not assigned.\n";
        }

        helmet.display();
    }
};

// Outside helper functions
int sumScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

Player getMax(Player a, Player b) {
    return (a.getScore() > b.getScore()) ? a : b;
}

int main() {
    Gun akm;
    akm.setAmmo(120);
    akm.setDamage(75);
    akm.setScope(4);

    Player::Helmet helmet1;
    helmet1.setProtection(80);

    Player Aditya;
    Aditya.setHealth(100);
    Aditya.setAlive(true);
    Aditya.setScore(1500);
    Aditya.setAge(21);
    Aditya.setGun(&akm);         // ✅ Passing gun as pointer
    Aditya.setHelmet(helmet1);   // ✅ Setting nested class object

    Player Raju;
    Raju.setAge(19);
    Raju.setAlive(true);
    Raju.setHealth(60);
    Raju.setScore(900);

    Player::Helmet helmet2;
    helmet2.setProtection(60);
    Raju.setHelmet(helmet2);

    cout << "Aditya Info:\n";
    Aditya.display();

    cout << "\nRaju Info:\n";
    Raju.display();

    cout << "\nTotal Score: " << sumScore(Aditya, Raju) << endl;

    Player maxPlayer = getMax(Aditya, Raju);
    cout << "\nPlayer with Max Score:\n";
    maxPlayer.display();

    return 0;
}


























// #include <iostream>
// using namespace std;

// class Player {
//     int health;
//     int age;
//     int score;
//     bool alive;

// public:
//     // ✅ Nested class
//     class Gun {
//         int ammo;
//         int damage;
//         int scope;

//     public:
//         void setAmmo(int ammo) { this->ammo = ammo; }
//         void setDamage(int damage) { this->damage = damage; }
//         void setScope(int scope) { this->scope = scope; }

//         int getAmmo() { return ammo; }
//         int getDamage() { return damage; }
//         int getScope() { return scope; }

//         void display() {
//             cout << "Gun -> Ammo: " << ammo
//                  << ", Damage: " << damage
//                  << ", Scope: " << scope << endl;
//         }
//     };

// private:
//     Gun gun; // Using the nested class

// public:
//     int getHealth() { return health; }
//     int getAge() { return age; }
//     int getScore() { return score; }
//     bool getAlive() { return alive; }

//     Gun getGun() { return gun; }

//     void setHealth(int health) { this->health = health; }
//     void setAge(int age) { this->age = age; }
//     void setScore(int score) { this->score = score; }
//     void setAlive(bool alive) { this->alive = alive; }
//     void setGun(Gun gun) { this->gun = gun; }

//     void display() {
//         cout << "Age: " << age
//              << ", Alive: " << (alive ? "Yes" : "No")
//              << ", Health: " << health
//              << ", Score: " << score << endl;
//         gun.display();
//     }
// };

// // Outside function using Player
// int sumScore(Player a, Player b) {
//     return a.getScore() + b.getScore();
// }

// Player getMax(Player a, Player b) {
//     return (a.getScore() > b.getScore()) ? a : b;
// }

// int main() {
//     Player::Gun akm; // Use nested class like this
//     akm.setAmmo(111);
//     akm.setDamage(90);
//     akm.setScope(2);

//     Player Aditya;
//     Aditya.setAge(12);
//     Aditya.setAlive(true);
//     Aditya.setHealth(100);
//     Aditya.setScore(1000);
//     Aditya.setGun(akm);

//     Player Raju;
//     Raju.setAge(15);
//     Raju.setAlive(true);
//     Raju.setHealth(50);
//     Raju.setScore(100);
//     // Giving no gun

//     cout << "Aditya:\n";
//     Aditya.display();

//     cout << "\nRaju:\n";
//     Raju.display();

//     cout << "\nTotal Score: " << sumScore(Aditya, Raju) << endl;

//     Player winner = getMax(Aditya, Raju);
//     cout << "\nPlayer with Max Score:\n";
//     winner.display();

//     return 0;
// }
