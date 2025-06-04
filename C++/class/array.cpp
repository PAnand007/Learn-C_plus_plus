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
        cout << "Player: " << name
             << " | Alive: " << (alive ? "Yes" : "No") << endl;
    }
};

int main() {
    int size;
    cout << "Enter number of players: ";
    cin >> size;

    // ✅ Dynamically allocate array of Player objects
    Player* players = new Player[size];

    // ✅ Set values
    for (int i = 0; i < size; ++i) {
        string name;
        bool isAlive;

        cout << "\nEnter name for player " << i + 1 << ": ";
        cin >> name;
        cout << "Is player alive? (1 = Yes, 0 = No): ";
        cin >> isAlive;

        players[i].setName(name);
        players[i].setAlive(isAlive);
    }

    // ✅ Display all players
    cout << "\n--- Player Info ---\n";
    for (int i = 0; i < size; ++i) {
        players[i].display();
    }

    // ✅ Free allocated memory
    delete[] players;

    return 0;
}
