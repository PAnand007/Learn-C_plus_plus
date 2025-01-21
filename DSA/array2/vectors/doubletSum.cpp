// find the doublet in the array whose sum is equal to the given number LEETCODE 1 (TWO SUM)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={4,5,3,1,2,6,7,8,9,5};
    int x;
    cout<<"Enter digit to find: "<<endl;
     cin>>x;
     bool flag = false;
     for (int i = 0; i < v.size()-1; i++) {
     for (int j = i+1; j < v.size() ; j++) {
       if (v[i]+v[j]==x)
       {
        
       }  
    }  
  } 
  if(!flag)cout<<"No Doublet!"<<endl;
}