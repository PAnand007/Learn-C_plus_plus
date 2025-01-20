#include<iostream>
#include<vector>
#include<algorithm>  

using namespace std;

int main(){
   vector<int> v;
   int n;
   cout << "Enter number of elements: " << endl;
   cin >> n;
   for (int i = 0; i < n; i++) {
       int x; cin >> x;
       v.push_back(x);
   }

   v.at(0) = 100;  // Use to change element or v[0] = 100;

   cout << "Vector before sorting: ";
   for (int i = 0; i < v.size(); i++) {
       cout << v[i] << " ";
   }
   cout << endl;

   sort(v.begin(), v.end());

   cout << "Vector after sorting: ";
   for (int i = 0; i < v.size(); i++) {
       cout << v[i] << " ";
   }

   return 0;
}
