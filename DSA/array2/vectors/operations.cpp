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
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"Capicity: "<<vec.capacity()<<endl;
   for (int i = 0; i < vec.size(); i++)
   {
    cout<<vec[i]<<endl;
   }
   vec.pop_back();
   vec.pop_back();
    vec.pop_back();
    vec.pop_back();
   vec.pop_back();
   cout<<"AFTER"<<endl;
    cout<<"size: "<<vec.size()<<endl;
    cout<<"Capicity: "<<vec.capacity()<<endl; // sizes changes but not capicity it only increases
   for (int i = 0; i < vec.size(); i++)
   {
    cout<<vec[i]<<endl;
   }

    return 0;
}
