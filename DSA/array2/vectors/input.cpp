#include<iostream>
#include<vector>
using namespace std;

int main(){
   
   vector <int> v;
   int n;
   cout<<"Enter number of elements: "<<endl;
   cin>>n;
   for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }




    // vector<int> vec(5);  
    // cout<<"size: "<<vec.size()<<endl;
    // cout<<"Capicity: "<<vec.capacity()<<endl;

  
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cin>>vec[i];
    // }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    
    
  
    return 0;
}
