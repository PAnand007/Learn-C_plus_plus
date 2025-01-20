#include<iostream>
using namespace std;

int main(){
   int arr[5] = {1, 2, 2, 3, 40};
   int n = sizeof(arr) / sizeof(arr[0]);
   bool flag = false;

   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] == arr[j]) {
            flag = true;
            cout << "Duplicate: " << arr[i] << endl;
            break;
         }
      }
      if (flag) break;
   }
   
   if (!flag) {
      cout << "No Duplicate" << endl;
   }
   
   return 0;
}
