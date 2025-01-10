#include<iostream>
using namespace std;
int main(){
     //binary triangle   

    int row, col;
    cout<<"Enter number of rows : ";
    cin>>row;
    int k =1;
    
    // for (int i = 1; i <= row; i++)
    // {   
    //     if (i%2==0)
    //     {
    //         k=0;
    //     }
    //     else k = 1;
        
    //     for (int j = 1; j <= i; j++) //i can also be used but it's not good

    //     {
    //         cout<<k<<" ";
    //         //flipping
    //         if (k==1)
    //         {
    //             k=0;
    //         }
    //         else{
    //             k=1;
    //         }  
    //     }
    //     cout<<endl;
    // }    

   
   
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++) //i can also be used but it's not good

        {
            if ((i+j)%2==0)//mathematical approch
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            
           
           
        }
        cout<<endl;
    }    

}
