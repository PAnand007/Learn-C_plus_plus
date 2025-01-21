#include<iostream>
#include<vector>
 

using namespace std;


int main(){
   vector<int> v={4,55,53,3,3,3,3,3,8,25};
  int x;
  cout<<"Enter digit to find: "<<endl;
  cin>>x;

  //if need to find all digits in the vector
//   bool flag = false;
//   for (int i = 0; i < v.size(); i++)
//   {
//    if (v[i]==x)
//    {
//     cout<<"Digit found at index "<<i<<endl;
//     flag = true;
//    }
 
//   }
//   if(!flag)cout<<"digit not found!"<<endl;

// //if i need to find first ocuurance of digit
//     for (int i = 0; i < v.size(); i++)
//   {
//    if (v[i]==x)
//    {
//     cout<<"Digit found at index 0-n "<<i<<endl;
//     break;

  
// }
// }



// Corrected code to find the last occurrence of a digit in a vector
for (int i = v.size() - 1; i >= 0; i--)
{
    if (v[i] == x)
    {
        cout << "Digit found at index " << i << endl;
        break;
    }
}

}
