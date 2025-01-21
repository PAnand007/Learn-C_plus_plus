#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int> vec;  // Dynamic array using vector
    // Adding elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"Capicity: "<<vec.capacity()<<endl;


    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    

    return 0;
}
