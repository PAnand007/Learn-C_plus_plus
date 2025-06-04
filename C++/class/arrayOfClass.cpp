#include <iostream>
using namespace std;

class Player {
    string name;
    bool alive;

public:
    void setName(string name) {
        this->name = name;
    }

    void setAlive(bool status) {
        this->alive = status;
    }

    bool getAlive() {
        return alive;
    }

    void display() {
        cout << "Player: " << name << " | Alive: " << (alive ? "Yes" : "No") << endl;
    }
};

int main() {
    const int SIZE = 3;

    // ✅ Array of Player objects
    Player players[SIZE];

    // ✅ Setting values
    players[0].setName("Aditya");
    players[0].setAlive(true);

    players[1].setName("Raju");
    players[1].setAlive(false);

    players[2].setName("Priya");
    players[2].setAlive(1);

    // ✅ Loop to display info
    cout << "All Player Info:\n";
    for (int i = 0; i < SIZE; ++i) {
        players[i].display();
    }

    return 0;
}
