#include<iostream>
using namespace std; 
    int squ(int num){
        int square = num * num;
        
        cout<<"square of "<<num<<" : "<<square<<endl;
        
          }

          int Number( int x){
            for (int i = 0; i <= x; i++)
            {
                squ(i);
            }
            
          }
int main(){
    int x;
   
    cout<<"Enter the value of n Natural numbers: ";
    cin>>x;
    Number(x);
   
    


}
