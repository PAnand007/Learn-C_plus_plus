#include<iostream>
#include<vector>
#include<algorithm>  

using namespace std;
//normally vectors are passed by value not their  address

void change( vector<int>& a){ //add & to use reference & = ampercent
     a.at(0) = 100;

}

int main(){
   vector<int> v={4,55,53,3,3,3,3,3,8,25};
   change(v);

   cout << "Vector after change: "<<endl;
   for (int i = 0; i < v.size(); i++) {
       cout << v[i] << " ";
   }
   
}
//1:30
