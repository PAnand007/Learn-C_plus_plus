#include<iostream>
using namespace std;

int main(){
   int arr[5] = {1, 2, 2, 3, 40};
   int *ptr = arr;
   
   for (int i = 0; i < 5; i++)
   {
    cout<<ptr[i]<<endl;
   }
   

   return 0;
}
