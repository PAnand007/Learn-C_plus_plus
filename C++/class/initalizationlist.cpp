#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {
        cout << "Person created with name: " << name << ", age: " << age << endl;
    }
};

int main() {
    Person p("Alice", 25);
    return 0;
}
