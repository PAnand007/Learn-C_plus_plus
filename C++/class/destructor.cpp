#include<iostream>

using namespace std;

//destructor called when object goes out of scope/ilaka defined using{curly braces}

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

    //destructor similar to constructor
    ~bike(){
        cout<<"i am called"<<endl;
    }

};

int main(){

//

bike tvs(50,500,2);
bike yamha(10,400,3);
cout<<tvs.enginecc<<" "<<tvs.seats<< "  "<<tvs.tyreSize<<endl;

bool yes = true;
if (yes == true)
{
    bike ktm(40,50,60);
    cout<<ktm.enginecc<<" "<<ktm.seats<< "  "<<ktm.tyreSize<<endl;
//here scope 
}


cout<<yamha.enginecc<<" "<<yamha.seats<< "  "<<yamha.tyreSize<<endl;

    return 0;
}