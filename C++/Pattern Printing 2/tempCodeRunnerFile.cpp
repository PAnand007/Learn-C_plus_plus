#include<iostream>
using namespace std;
int main(){
    int n,m=1;
    cout<<"Enter number of rows : "<<endl;
    cin>>n;
    //1111
    //1222
    //1233
    //1234
    //builtin function min(a,b)
    //2*n-1
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <=2*n-1 ; j++)
        {
            int a = i;
            int b = j;
            if (a>n) a = 2*n-i;
          
              
             if (a<n) b = 2*n-j;
            
            cout<<min(a,b);

        }
        
        cout<<endl;
      
    }
    
    
    
    }