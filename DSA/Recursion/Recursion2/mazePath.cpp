#include <iostream>

using namespace std;

// Function to calculate the number of ways through the maze
int maze(int sr, int sc, int er, int ec) {
    if (sr > er || sc > ec) return 0; // Out of bounds
    if (sr == er && sc == ec) return 1; // Reached destination

    int rightWays = maze(sr, sc + 1, er, ec);
    int downWays = maze(sr + 1, sc, er, ec);

    return rightWays + downWays; // Total ways
}

// Function to print all paths
void printPath(int sr, int sc, int er, int ec, string s) {
    if (sr > er || sc > ec) return; // Out of bounds
    if (sr == er && sc == ec) {
        cout << s << endl; // Print path
        return;
    }

    printPath(sr, sc + 1, er, ec, s + 'R'); // Move right
    printPath(sr + 1, sc, er, ec, s + 'D'); // Move down
}

int main() {
    // Calculate and print the number of ways
    cout << "Number of Ways: " << maze(0, 0, 2, 2) << endl;

    // Print all paths
    cout << "Paths:" << endl;
    printPath(0, 0, 2, 2, "");
    return 0;
}
