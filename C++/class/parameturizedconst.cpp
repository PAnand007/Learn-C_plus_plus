#include<iostream>

using namespace std;

class bike{
    public:
    int tyreSize;
    int seats;
    int enginecc;

    //parameterized constructor
    bike(int tyreSize, int enginecc, int seats){
        this->enginecc = enginecc;
        this->seats = seats;
        this->tyreSize =tyreSize;
       
    }

};

int main(){

//

bike tvs(50,500,2);
bike yamha(10,400,3);

    return 0;
}