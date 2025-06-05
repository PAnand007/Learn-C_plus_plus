#include<iostream>

using namespace std;

class bike{
    int enginecc;
    public:
    int setcc(int c){
        enginecc = c;
    }
    int getcc(){
        return enginecc;
    }

    //constructor called when object created
    bike(){
        cout<<"hi"<<endl;
    }

};

int main(){

//

bike tvs;
tvs.setcc(5);
cout<<tvs.getcc()<<endl;



bike toy;
 toy.setcc(5);
cout<< toy.getcc()<<endl;

    return 0;
}