#include<iostream>
#include<vector>
using namespace std;

int main(){
   
    vector<int> vec(5);  // initialization array using vector
   
    cout<<"size: "<<vec.size()<<endl;
    cout<<"Capicity: "<<vec.capacity()<<endl;

    vector<int> v(5, 100);  // initialization array using vector
   
    cout<<"size: "<<v.size()<<endl;
    cout<<"Capicity: "<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    
  
    return 0;
}
