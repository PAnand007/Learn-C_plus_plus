#include <iostream>
using namespace std;

class Student {
public:
    int age;
    string name;

    // Parameterized Constructor
    Student(int a, string n) {
        age = a;
        name = n;
    }

    // Copy Constructor
    Student(const Student &s) {
        age = s.age;
        name = s.name;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1(20, "Alice");s1.display();
    Student p1 = s1; // Copy constructor is called here

    
    p1.display();
    return 0;
}
