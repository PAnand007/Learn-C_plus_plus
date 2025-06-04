#include <iostream>
#include <string>
using namespace std;

class booK {
    string name;
    int price;
    int pagenumber;

public:
    void addname(string nameit) {
        name = nameit;
    }

    void addprice(int p) {
        price = p;
    }

    void addpage(int page) {
        pagenumber = page;
    }

    void display() {
        cout << name << " " << price << " " << pagenumber << endl;
    }

    bool countbook(int newp) {
        return price < newp;
    }

    bool isBookPresent(string bookName) {
        return name == bookName;
    }
};

int main() {
    booK math;
    math.addname("Math");
    math.addpage(300);
    math.addprice(200);
    math.display();

    cout << "Is book price less than 300? " << (math.countbook(300) ? "Yes" : "No") << endl;
    cout << "Is 'Math' present? " << (math.isBookPresent("Math") ? "Yes" : "No") << endl;
    cout << "Is 'Science' present? " << (math.isBookPresent("Science") ? "Yes" : "No") << endl;

    return 0;
}
