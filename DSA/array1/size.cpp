#include<iostream>
using namespace std;
int main(){
    //array
    int arr[] = {1,5,5,6,3,32,3,3};
  int n = sizeof (arr)/ sizeof (arr[0]);
cout<<n<<endl;
for (int i = 0; i <= n-1; i++)
{
    cout<<&arr[i]<<endl;
    
}

}