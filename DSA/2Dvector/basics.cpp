#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
   vector< vector<int>> matrix1 = {{4,1,2,3,3,30},{4,6,9,3,5,7,5,3},{4,1,2,3,3,30},{4,6,5,3},{4,1,2,0},{4,3}};
   vector< vector<int>> matrix2 ;
   vector<int> row1 = {4,1,2,3,3,30};
   vector<int> row2 = {4,6,9,3,5,7,5,3};
   vector<int> row3 = {4,1,2,3,3,30};
   vector<int> row4 = {4,6,5,3};
   vector<int> row5 = {4,1,2,0};
   vector<int> row6 = {4,3};
   //Passing 1D vectors directly in 2D vector
   matrix2.push_back(row1);
   matrix2.push_back(row2);
   matrix2.push_back(row3);
   matrix2.push_back(row4);
   matrix2.push_back(row5);
   matrix2.push_back(row6);


    cout<<"Matrix 1"<<endl;
    //Print
   for (int i = 0; i < matrix1.size(); i++)
   {
    for (int j = 0;  j < matrix1[i].size(); j++)
    {
        cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
    
   }
       cout<<"Matrix 2"<<endl;
    //Print
   for (int i = 0; i < matrix2.size(); i++)
   {
    for (int j = 0;  j < matrix2[i].size(); j++)
    {
        cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
    
   }
   
   cout<<matrix2[5][5]<<endl; //garbage value 

   cout<<endl;


//    cout<<matrix1.size()<<endl;

    // size of each vector of matrix i.e. Rows
   cout<<matrix1[0].size()<<endl;
   cout<<matrix1[1].size()<<endl;
   cout<<matrix1[2].size()<<endl;
   cout<<matrix1[3].size()<<endl;
   cout<<matrix1[4].size()<<endl;
   cout<<matrix1[5].size()<<endl;

// declaration 
   vector<vector<int>> v(4, vector<int>(5,10));
       //Print
   for (int i = 0; i < v.size(); i++)
   {
    for (int j = 0;  j < v[i].size(); j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
   }

   



     

}